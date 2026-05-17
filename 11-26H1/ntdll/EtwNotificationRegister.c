/*
 * XREFs of EtwNotificationRegister @ 0x1800571C0
 * Callers:
 *     EtwEventRegister @ 0x180057A10 (EtwEventRegister.c)
 *     EtwRegisterTraceGuidsW @ 0x180058E60 (EtwRegisterTraceGuidsW.c)
 *     SbSelectProcedure @ 0x1800631F0 (SbSelectProcedure.c)
 *     SbObtainTraceHandle @ 0x1800647E0 (SbObtainTraceHandle.c)
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x18006D830 (MicrosoftTelemetryAssertTriggeredWorker.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlSetLastWin32Error @ 0x180056610 (RtlSetLastWin32Error.c)
 *     EtwpCheckForPrivatePreEnable @ 0x180057A60 (EtwpCheckForPrivatePreEnable.c)
 *     EtwpRegisterProvider @ 0x180057DE0 (EtwpRegisterProvider.c)
 *     EtwpInsertRegistration @ 0x18006CFB0 (EtwpInsertRegistration.c)
 *     ProviderHandleRemove @ 0x18006D270 (ProviderHandleRemove.c)
 *     EtwpFreeRegistration @ 0x18006D308 (EtwpFreeRegistration.c)
 *     RtlpInterlockedPopEntrySList @ 0x180162CD0 (RtlpInterlockedPopEntrySList.c)
 *     memcmp @ 0x1801649D0 (memcmp.c)
 */

__int64 __fastcall EtwNotificationRegister(
        struct _SLIST_ENTRY *a1,
        int a2,
        _SLIST_ENTRY *a3,
        __int64 a4,
        unsigned __int64 *a5)
{
  __int16 v7; // si
  unsigned __int32 i; // edx
  signed __int32 v10; // eax
  PSLIST_ENTRY v11; // rdi
  __int64 Heap_0; // rax
  __int64 v13; // rdx
  struct _SLIST_ENTRY v14; // xmm0
  __int16 Next_high; // cx
  signed __int16 v16; // ax
  volatile signed __int64 *v17; // r15
  struct _SLIST_ENTRY *v18; // r12
  __int64 v19; // rdx
  unsigned int v20; // ebx
  __int64 v21; // rbp
  volatile __int64 *v22; // rcx
  unsigned int v23; // esi
  __int64 v24; // rcx
  __int64 v26; // r8
  unsigned __int8 v27; // al
  __int64 v28; // rdx
  int v29; // [rsp+60h] [rbp+8h]

  v7 = a2;
  if ( !a1 || !a5 || !memcmp(a1, &PrivateLoggerNotificationGuid, 0x10uLL) && PrivateLoggerNotificationEntry )
  {
    v23 = 87;
    goto LABEL_19;
  }
  *a5 = 0LL;
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
  Heap_0 = RtlAllocateHeap_0();
  v11 = (PSLIST_ENTRY)Heap_0;
  if ( Heap_0 )
  {
    *(_QWORD *)(Heap_0 + 64) = 0LL;
    *(_QWORD *)(Heap_0 + 72) = 0LL;
LABEL_10:
    v14 = *a1;
    v11[3].Next = a3;
    v13 = 0x3FFFLL;
    *((_QWORD *)&v11[3].Next + 1) = a4;
    v11[2] = v14;
    Next_high = HIWORD(v11[5].Next);
    *((_DWORD *)&v11[15].Next + 2) = NtCurrentTeb()->SubProcessTag;
    HIWORD(v11[5].Next) = (HIWORD(v11[5].Next) ^ (v7 ^ Next_high) & 0x3FFF) & 0xBFFF;
    do
    {
      v16 = _InterlockedExchangeAdd16(&EtwpRegistrationSequence, 1u);
      WORD2(v11[5].Next) = v16 + 1;
    }
    while ( v16 == -1 );
    goto LABEL_12;
  }
  _InterlockedDecrement(&EtwpRegistrationCount);
LABEL_12:
  if ( !v11 )
  {
LABEL_23:
    v23 = 14;
    goto LABEL_19;
  }
  v17 = (volatile signed __int64 *)&v11[4];
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)&v11[4], v13);
  v18 = v11 + 5;
  LODWORD(v11[5].Next) = NtCurrentTeb()->ClientId.UniqueThread;
  RtlAcquireSRWLockExclusive(&qword_1801C72E8, v19);
  v20 = dword_1801C72E0;
  if ( !dword_1801C72E0
    || (v21 = (__int64)v11,
        (unsigned int)dword_1801C72E0 >> 4 >= dword_180193038[((unsigned int)dword_1801C72E0 >> 1) & 7]) )
  {
    if ( (unsigned __int8)byte_1801C72E4 >= 8u
      || (v29 = dword_180193038[(unsigned __int8)byte_1801C72E4], (v26 = RtlAllocateHeap_0()) == 0) )
    {
      v23 = 14;
      RtlReleaseSRWLockExclusive(&qword_1801C72E8);
      LODWORD(v18->Next) = 0;
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)&v11[4]);
      EtwpFreeRegistration(v11);
      goto LABEL_19;
    }
    v27 = byte_1801C72E4;
    v28 = 0LL;
    v21 = (__int64)v11;
    v20 = (2 * (byte_1801C72E4 & 7)) | 1;
    if ( v29 )
    {
      do
      {
        *(_QWORD *)(v26 + 8 * v28) = v20 | (unsigned __int64)(unsigned int)(16 * (v28 + 1));
        v28 = (unsigned int)(v28 + 1);
      }
      while ( (_DWORD)v28 != v29 );
      v27 = byte_1801C72E4;
    }
    _InterlockedExchange64(&qword_1801C72A0[v27], v26);
    ++byte_1801C72E4;
  }
  v22 = (volatile __int64 *)(qword_1801C72A0[(v20 >> 1) & 7] + 8 * ((unsigned __int64)v20 >> 4));
  dword_1801C72E0 = *(_DWORD *)v22;
  _InterlockedExchange64(v22, v21);
  RtlReleaseSRWLockExclusive(&qword_1801C72E8);
  v23 = 0;
  if ( a2 == 10 || (v23 = EtwpRegisterProvider(v21, a3)) == 0 )
  {
    EtwpInsertRegistration(v21);
    EtwpCheckForPrivatePreEnable(v21);
    LODWORD(v18->Next) = 0;
    RtlReleaseSRWLockExclusive(v17);
    *a5 = v20 | ((unsigned __int64)*(unsigned __int16 *)(v21 + 84) << 32);
    return v23;
  }
  ProviderHandleRemove(v24, v20);
  LODWORD(v18->Next) = 0;
  RtlReleaseSRWLockExclusive(v17);
  EtwpFreeRegistration(v21);
LABEL_19:
  RtlSetLastWin32Error(v23);
  return v23;
}
