/*
 * XREFs of PfTStart @ 0x1407C9844
 * Callers:
 *     PfSetSuperfetchInformation @ 0x140B60C94 (PfSetSuperfetchInformation.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     PfpPartitionToParent @ 0x1404CF710 (PfpPartitionToParent.c)
 *     PfpTraceLogPfPartitionId @ 0x140602E4C (PfpTraceLogPfPartitionId.c)
 *     PfFbBufferListAllocate @ 0x140602E6C (PfFbBufferListAllocate.c)
 *     PfFbBufferListUpdateMax @ 0x140602F70 (PfFbBufferListUpdateMax.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     PfTAllocateBuffers @ 0x1407C91B8 (PfTAllocateBuffers.c)
 *     PfTCleanup @ 0x1407C92B4 (PfTCleanup.c)
 *     PfTInitialize @ 0x1407C9604 (PfTInitialize.c)
 *     PfpCreateEventInternal @ 0x1407CB08C (PfpCreateEventInternal.c)
 *     ObOpenObjectByPointer @ 0x140906B20 (ObOpenObjectByPointer.c)
 *     ObCloseHandle @ 0x14091D2C0 (ObCloseHandle.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     PsEnumProcesses @ 0x1409BBF0C (PsEnumProcesses.c)
 *     PsCreateSystemThreadEx @ 0x140A78DE0 (PsCreateSystemThreadEx.c)
 *     PfTAccessTracingStart @ 0x140BFEEDC (PfTAccessTracingStart.c)
 */

__int64 __fastcall PfTStart(__int64 a1, int a2, KPROCESSOR_MODE a3, _QWORD *a4)
{
  HANDLE v8; // r14
  int EventInternal; // edi
  __int64 v10; // rax
  __int64 v11; // rdx
  HANDLE v12; // rcx
  void *v13; // r10
  NTSTATUS v14; // eax
  _SLIST_ENTRY *v15; // r9
  _SLIST_ENTRY *v16; // r9
  __int64 v17; // r8
  signed __int32 v19[8]; // [rsp+0h] [rbp-A9h] BYREF
  int v20; // [rsp+50h] [rbp-59h] BYREF
  HANDLE v21; // [rsp+58h] [rbp-51h] BYREF
  PVOID Object; // [rsp+60h] [rbp-49h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v24[2]; // [rsp+70h] [rbp-39h] BYREF
  int *v25; // [rsp+90h] [rbp-19h]
  __int64 v26; // [rsp+98h] [rbp-11h]
  PVOID *p_Object; // [rsp+A0h] [rbp-9h]
  __int64 v28; // [rsp+A8h] [rbp-1h]
  HANDLE *v29; // [rsp+B0h] [rbp+7h]
  __int64 v30; // [rsp+B8h] [rbp+Fh]

  Handle = 0LL;
  if ( (unsigned int)dword_140E07398 > 4 && tlgKeywordOn((__int64)&dword_140E07398, 2LL) )
  {
    v20 = PfpTraceLogPfPartitionId((__int64 *)a1);
    v26 = 4LL;
    v25 = &v20;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E07398, (unsigned __int8 *)word_1400499FA, 0LL, 0LL, 3u, v24);
  }
  v21 = 0LL;
  v8 = 0LL;
  if ( (a2 & 1) != 0 && (stru_140E66D40.WaitBlockFill7[116] & 1) == 0 )
    a2 &= ~1u;
  if ( (a2 & 2) != 0
    && (stru_140E66D40.WaitBlockFill7[116] & 1) == 0
    && *(_DWORD *)&stru_140E66D40.WaitBlockFill11[144] != 1
    && *(_DWORD *)&stru_140E66D40.WaitBlockFill11[148] != 1 )
  {
    a2 &= ~2u;
  }
  if ( (a2 & 1) != 0 )
  {
    EventInternal = PfTAllocateBuffers(a1 + 88, 0x8000u, 8u);
    if ( EventInternal < 0 )
      goto LABEL_22;
    EventInternal = PfTAllocateBuffers(a1 + 128, 0x14028u, 2u);
    if ( EventInternal < 0 )
      goto LABEL_22;
    v10 = PfpPartitionToParent(a1);
    EventInternal = PsCreateSystemThreadEx(
                      &Handle,
                      0x1FFFFFLL,
                      0LL,
                      *(_QWORD *)(v10 + 128),
                      v11,
                      PfTLoggingWorker,
                      a1,
                      v11,
                      v11);
    if ( EventInternal < 0 )
      goto LABEL_22;
    Object = 0LL;
    ObReferenceObjectByHandle(Handle, 0x1FFFFFu, (POBJECT_TYPE)PsThreadType, 0, &Object, 0LL);
    v12 = Handle;
    *(_QWORD *)(a1 + 168) = Object;
    ObCloseHandle(v12, 0);
  }
  if ( (a2 & 3) != 0
    && !*(_QWORD *)(a1 + 680)
    && (EventInternal = PfpCreateEventInternal(0LL, 1LL, 512LL, a1 + 680), EventInternal < 0)
    || (v13 = *(void **)(a1 + 680)) != 0LL
    && (v14 = ObOpenObjectByPointer(v13, a3 == 0 ? 0x200 : 0, 0LL, 0x120001u, (POBJECT_TYPE)ExEventObjectType, a3, &v21),
        v8 = v21,
        EventInternal = v14,
        v14 < 0) )
  {
LABEL_22:
    PfTCleanup(a1, 0);
    PfTInitialize(a1, 1);
    if ( v8 )
      ObCloseHandle(v8, a3);
    goto LABEL_36;
  }
  if ( (a2 & 1) != 0 )
  {
    PfFbBufferListUpdateMax(a1 + 416, 0x100000);
    PfFbBufferListAllocate(v15, ((_DWORD)KeNumberProcessors_0 + 2) << 12, 2 * KeNumberProcessors_0 + 4);
  }
  if ( (a2 & 2) != 0 )
  {
    PfFbBufferListUpdateMax(a1 + 288, 0x1000000);
    PfFbBufferListAllocate(v16, ((_DWORD)KeNumberProcessors_0 + 7) << 15, 2 * KeNumberProcessors_0 + 14);
  }
  ExAcquireFastMutex((PKGUARDED_MUTEX)(a1 + 624));
  if ( (a2 & 1) != 0 )
  {
    *(_DWORD *)(a1 + 604) = *(_DWORD *)&stru_140E66D40.WaitBlockFill11[128];
    if ( *(_DWORD *)(a1 + 600) < *(_DWORD *)(a1 + 604) )
      PfTAccessTracingStart(a1, 2LL);
  }
  if ( (a2 & 2) != 0 )
    *(_DWORD *)(a1 + 612) = *(_DWORD *)&stru_140E66D40.WaitBlockFill11[124];
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 624));
  *(_DWORD *)(a1 + 72) |= a2;
  if ( (a2 & 1) != 0 )
  {
    _InterlockedOr(v19, 0);
    PsEnumProcesses(PfCalculateProcessHash, 0LL);
    PfTAccessTracingStart(a1, 1LL);
  }
  *a4 = v8;
  EventInternal = 0;
LABEL_36:
  if ( (unsigned int)dword_140E07398 > 4 && tlgKeywordOn((__int64)&dword_140E07398, 2LL) )
  {
    v20 = PfpTraceLogPfPartitionId((__int64 *)a1);
    v26 = v17;
    v25 = &v20;
    v28 = v17;
    p_Object = &Object;
    v30 = v17;
    v29 = &v21;
    LODWORD(Object) = a2;
    LODWORD(v21) = EventInternal;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E07398, (unsigned __int8 *)&byte_140049997, 0LL, 0LL, 5u, v24);
  }
  return (unsigned int)EventInternal;
}
