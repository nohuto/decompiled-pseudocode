/*
 * XREFs of PiDmaGuardQueueInitialize @ 0x140CCDCAC
 * Callers:
 *     PiDmaGuardInitialize @ 0x1405DF48C (PiDmaGuardInitialize.c)
 * Callees:
 *     MmDeterminePoolType @ 0x14021A220 (MmDeterminePoolType.c)
 *     ExpAddResourceToSystemResourceList @ 0x14021B4EC (ExpAddResourceToSystemResourceList.c)
 *     RtlStdLogStackTrace @ 0x140260150 (RtlStdLogStackTrace.c)
 *     RtlpStdGetRecordedStackTraceIndex @ 0x1402601DC (RtlpStdGetRecordedStackTraceIndex.c)
 *     RtlStdReleaseStackTrace @ 0x1402602B0 (RtlStdReleaseStackTrace.c)
 *     PerfLogExecutiveResourceInitialize @ 0x140528A54 (PerfLogExecutiveResourceInitialize.c)
 *     ExpTraceLogBadResourceAddress @ 0x14052FCB0 (ExpTraceLogBadResourceAddress.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 PiDmaGuardQueueInitialize()
{
  unsigned __int16 v0; // bx
  KSPIN_LOCK *v1; // rdi
  unsigned __int16 *v2; // rax
  __int64 *v3; // rbp
  int RecordedStackTraceIndex; // esi
  unsigned __int64 retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned __int64)&PipDgqListLock < 0xFFFF800000000000uLL
    || MmDeterminePoolType((unsigned __int64)&PipDgqListLock) == 256 )
  {
    ExpTraceLogBadResourceAddress((unsigned __int64)&PipDgqListLock, retaddr);
  }
  memset_0(&PipDgqListLock.OwnerTable, 0, 0x50uLL);
  PipDgqListLock.SystemResourcesList.Blink = (struct _LIST_ENTRY *)&PipDgqListLock;
  v0 = 0;
  PipDgqListLock.SystemResourcesList.Flink = (struct _LIST_ENTRY *)&PipDgqListLock;
  PipDgqListLock.SharedWaiters = 0LL;
  PipDgqListLock.ExclusiveWaiters = 0LL;
  PipDgqListLock.SpinLock = 0LL;
  if ( (NtGlobalFlag & 0x2000) != 0 )
  {
    v1 = *(KSPIN_LOCK **)&NormalizationListLock.WaitRegister.Flags;
    if ( *(_QWORD *)&NormalizationListLock.WaitRegister.Flags )
    {
      v2 = (unsigned __int16 *)RtlStdLogStackTrace(*(PKSPIN_LOCK *)&NormalizationListLock.WaitRegister.Flags, 1);
      v3 = (__int64 *)v2;
      if ( v2 )
      {
        RecordedStackTraceIndex = RtlpStdGetRecordedStackTraceIndex(v1, v2);
        if ( !RecordedStackTraceIndex )
          RtlStdReleaseStackTrace((__int64)v1, v3);
      }
      else
      {
        LOWORD(RecordedStackTraceIndex) = 0;
      }
      v0 = RecordedStackTraceIndex;
    }
    PipDgqListLock.CreatorBackTraceIndex = v0;
  }
  else
  {
    PipDgqListLock.CreatorBackTraceIndex = 0LL;
  }
  HIDWORD(PipDgqListLock.Reserved2) = -1;
  ExpAddResourceToSystemResourceList((_KSWAPPABLE_PAGE *)&PipDgqListLock);
  __incgsdword(0x9098u);
  if ( (DWORD1(PerfGlobalGroupMask[0]) & 0x20000) != 0 )
    PerfLogExecutiveResourceInitialize(65544, (__int64)&PipDgqListLock, 0, 0);
  qword_140F828F8 = (__int64)&PipDgqListHead;
  PipDgqListHead = &PipDgqListHead;
  return 0LL;
}
