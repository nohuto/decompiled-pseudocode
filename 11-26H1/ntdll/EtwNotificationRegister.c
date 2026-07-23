/*
 * XREFs of EtwNotificationRegister @ 0x180041740
 * Callers:
 *     EtwEventRegister @ 0x180041F90 (EtwEventRegister.c)
 *     EtwRegisterTraceGuidsW @ 0x1800433E0 (EtwRegisterTraceGuidsW.c)
 *     SbSelectProcedure @ 0x180083640 (SbSelectProcedure.c)
 *     SbObtainTraceHandle @ 0x180084C30 (SbObtainTraceHandle.c)
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x18008DC80 (MicrosoftTelemetryAssertTriggeredWorker.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlSetLastWin32Error @ 0x180040B90 (RtlSetLastWin32Error.c)
 *     EtwpCheckForPrivatePreEnable @ 0x180041FE0 (EtwpCheckForPrivatePreEnable.c)
 *     EtwpRegisterProvider @ 0x180042360 (EtwpRegisterProvider.c)
 *     EtwpInsertRegistration @ 0x18008D400 (EtwpInsertRegistration.c)
 *     ProviderHandleRemove @ 0x18008D6C0 (ProviderHandleRemove.c)
 *     EtwpFreeRegistration @ 0x18008D758 (EtwpFreeRegistration.c)
 *     RtlpInterlockedPopEntrySList @ 0x180162BD0 (RtlpInterlockedPopEntrySList.c)
 *     memcmp @ 0x1801648D0 (memcmp.c)
 */

ULONG __cdecl EtwNotificationRegister(
        LPCGUID Guid,
        ULONG Type,
        PETW_NOTIFICATION_CALLBACK Callback,
        PVOID Context,
        PREGHANDLE RegHandle)
{
  __int16 v7; // si
  unsigned __int32 i; // edx
  signed __int32 v10; // eax
  PSLIST_ENTRY v11; // rdi
  _SLIST_ENTRY *Heap_0; // rax
  GUID v13; // xmm0
  __int16 Next_high; // cx
  signed __int16 v15; // ax
  _RTL_SRWLOCK *v16; // r15
  _SLIST_ENTRY *v17; // r12
  unsigned int v18; // ebx
  __int64 v19; // rbp
  volatile __int64 *v20; // rcx
  unsigned __int32 v21; // esi
  __int64 v22; // rcx
  _QWORD *v24; // r8
  unsigned __int8 v25; // al
  __int64 v26; // rdx
  unsigned int v27; // [rsp+60h] [rbp+8h]

  v7 = Type;
  if ( !Guid || !RegHandle || !memcmp(Guid, &PrivateLoggerNotificationGuid, 0x10uLL) && PrivateLoggerNotificationEntry )
  {
    v21 = 87;
    goto LABEL_19;
  }
  *RegHandle = 0LL;
  for ( i = EtwpRegistrationCount; ; i = v10 )
  {
    if ( i >= 0x800 )
      goto LABEL_23;
    v10 = _InterlockedCompareExchange(&EtwpRegistrationCount, i + 1, i);
    if ( i == v10 )
      break;
  }
  v11 = RtlpInterlockedPopEntrySList(&EtwpFreeRegistrationList);
  if ( v11 )
    goto LABEL_10;
  Heap_0 = (_SLIST_ENTRY *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, 0x100uLL);
  v11 = Heap_0;
  if ( Heap_0 )
  {
    Heap_0[4].Next = 0LL;
    *((_QWORD *)&Heap_0[4].Next + 1) = 0LL;
LABEL_10:
    v13 = *Guid;
    v11[3].Next = (_SLIST_ENTRY *)Callback;
    *((_QWORD *)&v11[3].Next + 1) = Context;
    v11[2] = (_SLIST_ENTRY)v13;
    Next_high = HIWORD(v11[5].Next);
    *((_DWORD *)&v11[15].Next + 2) = NtCurrentTeb()->SubProcessTag;
    HIWORD(v11[5].Next) = (HIWORD(v11[5].Next) ^ (v7 ^ Next_high) & 0x3FFF) & 0xBFFF;
    do
    {
      v15 = _InterlockedExchangeAdd16(&EtwpRegistrationSequence, 1u);
      WORD2(v11[5].Next) = v15 + 1;
    }
    while ( v15 == -1 );
    goto LABEL_12;
  }
  _InterlockedDecrement(&EtwpRegistrationCount);
LABEL_12:
  if ( !v11 )
  {
LABEL_23:
    v21 = 14;
    goto LABEL_19;
  }
  v16 = (_RTL_SRWLOCK *)&v11[4];
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)&v11[4]);
  v17 = v11 + 5;
  LODWORD(v11[5].Next) = NtCurrentTeb()->ClientId.UniqueThread;
  RtlAcquireSRWLockExclusive(&SRWLock);
  v18 = dword_1801C62E0;
  if ( !dword_1801C62E0
    || (v19 = (__int64)v11,
        (unsigned int)dword_1801C62E0 >> 4 >= dword_180192040[((unsigned int)dword_1801C62E0 >> 1) & 7]) )
  {
    if ( (unsigned __int8)byte_1801C62E4 >= 8u
      || (v27 = dword_180192040[(unsigned __int8)byte_1801C62E4],
          (v24 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, 8LL * v27)) == 0LL) )
    {
      v21 = 14;
      RtlReleaseSRWLockExclusive(&SRWLock);
      LODWORD(v17->Next) = 0;
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)&v11[4]);
      EtwpFreeRegistration(v11);
      goto LABEL_19;
    }
    v25 = byte_1801C62E4;
    v26 = 0LL;
    v19 = (__int64)v11;
    v18 = (2 * (byte_1801C62E4 & 7)) | 1;
    if ( v27 )
    {
      do
      {
        v24[v26] = v18 | (unsigned __int64)(unsigned int)(16 * (v26 + 1));
        v26 = (unsigned int)(v26 + 1);
      }
      while ( (_DWORD)v26 != v27 );
      v25 = byte_1801C62E4;
    }
    _InterlockedExchange64(&qword_1801C62A0[v25], (__int64)v24);
    ++byte_1801C62E4;
  }
  v20 = (volatile __int64 *)(qword_1801C62A0[(v18 >> 1) & 7] + 8 * ((unsigned __int64)v18 >> 4));
  dword_1801C62E0 = *(_DWORD *)v20;
  _InterlockedExchange64(v20, v19);
  RtlReleaseSRWLockExclusive(&SRWLock);
  v21 = 0;
  if ( Type == 10 || (v21 = EtwpRegisterProvider(v19, Callback)) == 0 )
  {
    EtwpInsertRegistration((PRTL_BALANCED_NODE)v19);
    EtwpCheckForPrivatePreEnable(v19);
    LODWORD(v17->Next) = 0;
    RtlReleaseSRWLockExclusive(v16);
    *RegHandle = v18 | ((unsigned __int64)*(unsigned __int16 *)(v19 + 84) << 32);
    return v21;
  }
  ProviderHandleRemove(v22, v18);
  LODWORD(v17->Next) = 0;
  RtlReleaseSRWLockExclusive(v16);
  EtwpFreeRegistration(v19);
LABEL_19:
  RtlSetLastWin32Error(v21);
  return v21;
}
