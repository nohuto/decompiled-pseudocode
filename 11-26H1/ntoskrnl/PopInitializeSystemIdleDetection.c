/*
 * XREFs of PopInitializeSystemIdleDetection @ 0x140CD2F58
 * Callers:
 *     PoInitSystem @ 0x140CCE870 (PoInitSystem.c)
 * Callees:
 *     KeSetCoalescableTimer @ 0x140219B40 (KeSetCoalescableTimer.c)
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     PopPulseSystemIdleEvent @ 0x140A3C2BC (PopPulseSystemIdleEvent.c)
 */

__int64 __fastcall PopInitializeSystemIdleDetection(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopWeakChargerLock.SuspendEvent, a2, a3, a4);
  PopPulseSystemIdleEvent(1u);
  PopWeakChargerLock.MutantListHead.Flink = (struct _LIST_ENTRY *)PopCheckForIdleness;
  *(_QWORD *)&PopWeakChargerLock.PriorityFloorCounts[24] = 8LL;
  *(_QWORD *)&PopWeakChargerLock.AbCompletedIoQoSBoostCount = &PopWeakChargerLock.PriorityFloorSummary;
  *(_QWORD *)&PopWeakChargerLock.PriorityFloorSummary = &PopWeakChargerLock.PriorityFloorSummary;
  LODWORD(PopWeakChargerLock.SuspendEvent.Header.WaitListHead.Blink) = 275;
  PopWeakChargerLock.MutantListHead.Blink = 0LL;
  PopWeakChargerLock.PropagateBoostsEntry.Next = 0LL;
  PopWeakChargerLock.ThreadListEntry.Blink = 0LL;
  *(_QWORD *)&PopWeakChargerLock.ForegroundLossTime = 0LL;
  HIDWORD(PopWeakChargerLock.WriteOperationCount) = 0;
  LOWORD(PopWeakChargerLock.WriteOperationCount) = 0;
  BYTE3(PopWeakChargerLock.WriteOperationCount) = 0;
  if ( PopIdleScanInterval )
    KeSetCoalescableTimer(
      (PKTIMER)&PopWeakChargerLock.PriorityFloorCounts[24],
      (LARGE_INTEGER)(-10000000LL * (unsigned int)PopIdleScanInterval),
      1000 * PopIdleScanInterval,
      0x3E8u,
      (PKDPC)&PopWeakChargerLock.SuspendEvent.Header.WaitListHead.Blink);
  dword_140E0B744 = 5;
  PopSystemIdleContext = 1;
  return PopReleaseRwLock((struct _KTHREAD *)&PopWeakChargerLock.SuspendEvent);
}
