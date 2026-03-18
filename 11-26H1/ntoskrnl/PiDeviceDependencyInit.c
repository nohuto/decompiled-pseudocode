/*
 * XREFs of PiDeviceDependencyInit @ 0x140CC3A38
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140CBFDA0 (IopInitializePlugPlayServices.c)
 * Callees:
 *     MmDeterminePoolType @ 0x1402609A0 (MmDeterminePoolType.c)
 *     ExpAddResourceToSystemResourceList @ 0x140260A5C (ExpAddResourceToSystemResourceList.c)
 *     RtlStdLogStackTrace @ 0x140260BE8 (RtlStdLogStackTrace.c)
 *     RtlpStdGetRecordedStackTraceIndex @ 0x140260C74 (RtlpStdGetRecordedStackTraceIndex.c)
 *     RtlStdReleaseStackTrace @ 0x140260D48 (RtlStdReleaseStackTrace.c)
 *     PerfLogExecutiveResourceInitialize @ 0x1405263E4 (PerfLogExecutiveResourceInitialize.c)
 *     ExpTraceLogBadResourceAddress @ 0x14052D790 (ExpTraceLogBadResourceAddress.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     PnpReleaseDependencyRelationsLock @ 0x14090ECA0 (PnpReleaseDependencyRelationsLock.c)
 *     PnpAcquireDependencyRelationsLock @ 0x14090ECD0 (PnpAcquireDependencyRelationsLock.c)
 */

__int64 PiDeviceDependencyInit()
{
  ULONG_PTR v0; // rax
  KSPIN_LOCK *p_Policy; // rdi
  unsigned __int16 *v2; // rax
  __int64 *v3; // rsi
  int RecordedStackTraceIndex; // eax
  unsigned __int16 v5; // bx
  unsigned __int64 retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned __int64)&PiDependencyRelationsLock < 0xFFFF800000000000uLL
    || MmDeterminePoolType((unsigned __int64)&PiDependencyRelationsLock) == 256 )
  {
    ExpTraceLogBadResourceAddress((unsigned __int64)&PiDependencyRelationsLock, retaddr);
  }
  memset_0(&PiDependencyRelationsLock.OwnerTable, 0, 0x50uLL);
  v0 = 0LL;
  PiDependencyRelationsLock.SystemResourcesList.Blink = (struct _LIST_ENTRY *)&PiDependencyRelationsLock;
  PiDependencyRelationsLock.SystemResourcesList.Flink = (struct _LIST_ENTRY *)&PiDependencyRelationsLock;
  PiDependencyRelationsLock.SharedWaiters = 0LL;
  PiDependencyRelationsLock.ExclusiveWaiters = 0LL;
  PiDependencyRelationsLock.SpinLock = 0LL;
  if ( (NtGlobalFlag & 0x2000) != 0 )
  {
    p_Policy = (KSPIN_LOCK *)&NormalizationListLock.SchedulingGroup->Policy;
    if ( NormalizationListLock.SchedulingGroup
      && (v2 = (unsigned __int16 *)RtlStdLogStackTrace((PKSPIN_LOCK)&NormalizationListLock.SchedulingGroup->Policy, 1),
          (v3 = (__int64 *)v2) != 0LL) )
    {
      RecordedStackTraceIndex = RtlpStdGetRecordedStackTraceIndex(p_Policy, v2);
      v5 = RecordedStackTraceIndex;
      if ( !RecordedStackTraceIndex )
        RtlStdReleaseStackTrace((__int64)p_Policy, v3);
    }
    else
    {
      v5 = 0;
    }
    v0 = v5;
  }
  PiDependencyRelationsLock.CreatorBackTraceIndex = v0;
  HIDWORD(PiDependencyRelationsLock.Reserved2) = -1;
  ExpAddResourceToSystemResourceList((struct _SINGLE_LIST_ENTRY *)&PiDependencyRelationsLock);
  __incgsdword(0x9098u);
  if ( (DWORD1(PerfGlobalGroupMask[0]) & 0x20000) != 0 )
    PerfLogExecutiveResourceInitialize(65544, (__int64)&PiDependencyRelationsLock, 0, 0);
  PiDependencyEdgeWriteLock = 0LL;
  PnpAcquireDependencyRelationsLock(1);
  qword_140F84BA8 = (__int64)&PiDependencyNodeListHead;
  PiDependencyNodeListHead = (__int64)&PiDependencyNodeListHead;
  qword_140F84B98 = (__int64)&PiDependencyNodeEmptyList;
  PiDependencyNodeEmptyList = (__int64)&PiDependencyNodeEmptyList;
  qword_140F84BB8 = (__int64)&PiRebuildPowerRelationsQueue;
  PiRebuildPowerRelationsQueue = (__int64)&PiRebuildPowerRelationsQueue;
  PnpReleaseDependencyRelationsLock();
  return 0LL;
}
