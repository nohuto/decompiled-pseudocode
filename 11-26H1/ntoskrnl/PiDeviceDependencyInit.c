/*
 * XREFs of PiDeviceDependencyInit @ 0x140CC9B0C
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140CC5E70 (IopInitializePlugPlayServices.c)
 * Callees:
 *     MmDeterminePoolType @ 0x14021A220 (MmDeterminePoolType.c)
 *     ExpAddResourceToSystemResourceList @ 0x14021B4EC (ExpAddResourceToSystemResourceList.c)
 *     RtlStdLogStackTrace @ 0x140260150 (RtlStdLogStackTrace.c)
 *     RtlpStdGetRecordedStackTraceIndex @ 0x1402601DC (RtlpStdGetRecordedStackTraceIndex.c)
 *     RtlStdReleaseStackTrace @ 0x1402602B0 (RtlStdReleaseStackTrace.c)
 *     PerfLogExecutiveResourceInitialize @ 0x140528A54 (PerfLogExecutiveResourceInitialize.c)
 *     ExpTraceLogBadResourceAddress @ 0x14052FCB0 (ExpTraceLogBadResourceAddress.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PnpReleaseDependencyRelationsLock @ 0x1409B0DD0 (PnpReleaseDependencyRelationsLock.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1409B0E00 (PnpAcquireDependencyRelationsLock.c)
 */

__int64 PiDeviceDependencyInit()
{
  ULONG_PTR v0; // rax
  KSPIN_LOCK *v1; // rdi
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
    v1 = *(KSPIN_LOCK **)&NormalizationListLock.WaitRegister.Flags;
    if ( *(_QWORD *)&NormalizationListLock.WaitRegister.Flags
      && (v2 = (unsigned __int16 *)RtlStdLogStackTrace(*(PKSPIN_LOCK *)&NormalizationListLock.WaitRegister.Flags, 1),
          (v3 = (__int64 *)v2) != 0LL) )
    {
      RecordedStackTraceIndex = RtlpStdGetRecordedStackTraceIndex(v1, v2);
      v5 = RecordedStackTraceIndex;
      if ( !RecordedStackTraceIndex )
        RtlStdReleaseStackTrace((__int64)v1, v3);
    }
    else
    {
      v5 = 0;
    }
    v0 = v5;
  }
  PiDependencyRelationsLock.CreatorBackTraceIndex = v0;
  HIDWORD(PiDependencyRelationsLock.Reserved2) = -1;
  ExpAddResourceToSystemResourceList((_KSWAPPABLE_PAGE *)&PiDependencyRelationsLock);
  __incgsdword(0x9098u);
  if ( (DWORD1(PerfGlobalGroupMask[0]) & 0x20000) != 0 )
    PerfLogExecutiveResourceInitialize(65544, (__int64)&PiDependencyRelationsLock, 0, 0);
  PiDependencyEdgeWriteLock = 0LL;
  PnpAcquireDependencyRelationsLock(1);
  qword_140F84F48 = (__int64)&PiDependencyNodeListHead;
  PiDependencyNodeListHead = (__int64)&PiDependencyNodeListHead;
  qword_140F84F28 = (__int64)&PiDependencyNodeEmptyList;
  PiDependencyNodeEmptyList = (__int64)&PiDependencyNodeEmptyList;
  qword_140F84F38 = (__int64)&PiRebuildPowerRelationsQueue;
  PiRebuildPowerRelationsQueue = (__int64)&PiRebuildPowerRelationsQueue;
  PnpReleaseDependencyRelationsLock();
  return 0LL;
}
