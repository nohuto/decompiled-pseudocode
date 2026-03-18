/*
 * XREFs of LogFwInitialize @ 0x140C52270
 * Callers:
 *     BgpFwLibraryInitialize @ 0x140C545B8 (BgpFwLibraryInitialize.c)
 * Callees:
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

void *LogFwInitialize()
{
  *(_DWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[80] |= 0x80u;
  *(_QWORD *)&WheapPfaLock.AbWaitEntryCount = 0LL;
  WheapPfaLock.SuspendEvent.Header.WaitListHead.Flink = 0LL;
  LODWORD(WheapPfaLock.PropagateBoostsEntry.Next) = 0;
  WheapPfaLock.MutantListHead.Blink = 0LL;
  *(_QWORD *)&WheapPfaLock.PriorityFloorCounts[8] = 0LL;
  *(_OWORD *)&WheapPfaLock.SchedulerApcFill5[56] = 0uLL;
  WheapPfaLock.SuspendEvent.Header.WaitListHead.Blink = 0LL;
  WheapPfaLock.MutantListHead.Flink = 0LL;
  WheapPfaLock.ThreadListEntry.Blink = 0LL;
  *(_QWORD *)&WheapPfaLock.PriorityFloorCounts[24] = 0LL;
  *(_QWORD *)&WheapPfaLock.PriorityFloorCounts[16] = 0LL;
  *(_QWORD *)&WheapPfaLock.PriorityFloorSummary = 0LL;
  WheapPfaLock.IoSelfBoostsEntry.Next = 0LL;
  WheapPfaLock.SuspendEvent.Header.LockNV = 0;
  LODWORD(WheapPfaLock.ThreadListEntry.Flink) = 0;
  WheapPfaLock.SchedulerSharedSystemSlot = 0LL;
  *(_OWORD *)&WheapPfaLock.SchedulerApcFill5[72] = 0uLL;
  qword_140E0F1D0 = 1LL;
  qword_140E0F1C8 = 0x7FFFFFFFFFFFFFFFLL;
  qword_140E0F1D8 = 0x7FFFFFFFFFFFFFFFLL;
  return memset_0(&qword_140E64F90, 0, 0x48uLL);
}
