/*
 * XREFs of PpInitializeBootDDB @ 0x140CCB264
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
 *     PpBootDDBHelper @ 0x1407A8694 (PpBootDDBHelper.c)
 */

__int64 __fastcall PpInitializeBootDDB(__int64 a1, int a2)
{
  ULONG_PTR v3; // rax
  KSPIN_LOCK *v4; // rdi
  unsigned __int16 *v5; // rax
  __int64 *v6; // rsi
  int RecordedStackTraceIndex; // eax
  unsigned __int16 v8; // bx
  __int64 result; // rax
  __int64 v10; // rdx
  void *v11; // rcx
  unsigned __int64 retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
    return 0LL;
  PspSiloMonitorLock.TrapFrame = 0LL;
  *(_QWORD *)&PspSiloMonitorLock.AbCompletedIoQoSBoostCount = 0LL;
  PspSiloMonitorLock.WaitBlock[2].WaitListEntry.Blink = 0LL;
  *(_QWORD *)&PspSiloMonitorLock.PriorityFloorSummary = 0LL;
  if ( (unsigned __int64)&PiDDBLock < 0xFFFF800000000000uLL || MmDeterminePoolType((unsigned __int64)&PiDDBLock) == 256 )
    ExpTraceLogBadResourceAddress((unsigned __int64)&PiDDBLock, retaddr);
  memset_0(&PiDDBLock.OwnerTable, 0, 0x50uLL);
  v3 = 0LL;
  PiDDBLock.SystemResourcesList.Blink = (struct _LIST_ENTRY *)&PiDDBLock;
  PiDDBLock.SystemResourcesList.Flink = (struct _LIST_ENTRY *)&PiDDBLock;
  PiDDBLock.SharedWaiters = 0LL;
  PiDDBLock.ExclusiveWaiters = 0LL;
  PiDDBLock.SpinLock = 0LL;
  if ( (NtGlobalFlag & 0x2000) != 0 )
  {
    v4 = *(KSPIN_LOCK **)&NormalizationListLock.WaitRegister.Flags;
    if ( *(_QWORD *)&NormalizationListLock.WaitRegister.Flags
      && (v5 = (unsigned __int16 *)RtlStdLogStackTrace(*(PKSPIN_LOCK *)&NormalizationListLock.WaitRegister.Flags, 1),
          (v6 = (__int64 *)v5) != 0LL) )
    {
      RecordedStackTraceIndex = RtlpStdGetRecordedStackTraceIndex(v4, v5);
      v8 = RecordedStackTraceIndex;
      if ( !RecordedStackTraceIndex )
        RtlStdReleaseStackTrace((__int64)v4, v6);
    }
    else
    {
      v8 = 0;
    }
    v3 = v8;
  }
  PiDDBLock.CreatorBackTraceIndex = v3;
  HIDWORD(PiDDBLock.Reserved2) = -1;
  ExpAddResourceToSystemResourceList((_KSWAPPABLE_PAGE *)&PiDDBLock);
  __incgsdword(0x9098u);
  if ( (DWORD1(PerfGlobalGroupMask[0]) & 0x20000) != 0 )
    PerfLogExecutiveResourceInitialize(65544, (__int64)&PiDDBLock, 0, 0);
  memset_0(&KiSystemServiceTraceCallbackLock.1136, 0, 0x68uLL);
  KiSystemServiceTraceCallbackLock.Padding[4] = (unsigned __int64)PiCompareDDBCacheEntries;
  qword_140FD84D0 = (__int64)PnpAllocateGenericTableEntry;
  qword_140FD84D8 = (__int64)CMFFreeFn;
  *(_QWORD *)&KiSystemServiceTraceCallbackLock.WaitRegister.Flags = &KiSystemServiceTraceCallbackLock.SchedulingGroup;
  KiSystemServiceTraceCallbackLock.SchedulingGroup = (_KSCHEDULING_GROUP *volatile)&KiSystemServiceTraceCallbackLock.SchedulingGroup;
  KiSystemServiceTraceCallbackLock.AutoBoostThreadState = &KiSystemServiceTraceCallbackLock.1136;
  qword_140FD84E0 = 0LL;
  if ( InitIsWinPEMode )
    return 3221225473LL;
  result = PpBootDDBHelper(
             *(void **)(*(_QWORD *)(a1 + 240) + 64LL),
             *(unsigned int *)(*(_QWORD *)(a1 + 240) + 72LL),
             &PspSiloMonitorLock.AbCompletedIoQoSBoostCount,
             (__int64 *)&PspSiloMonitorLock.TrapFrame);
  if ( (int)result >= 0 )
  {
    v10 = *(_QWORD *)(a1 + 240);
    v11 = *(void **)(v10 + 80);
    if ( v11 )
      PpBootDDBHelper(
        v11,
        *(unsigned int *)(v10 + 88),
        &PspSiloMonitorLock.PriorityFloorSummary,
        (__int64 *)&PspSiloMonitorLock.WaitBlock[2].WaitListEntry.Blink);
    BYTE1(NlsMbCodePageTag) = 1;
    return 0LL;
  }
  return result;
}
