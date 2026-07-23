/*
 * XREFs of LogFwInitialize @ 0x140C58270
 * Callers:
 *     BgpFwLibraryInitialize @ 0x140C5A5B8 (BgpFwLibraryInitialize.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void *LogFwInitialize()
{
  *(_DWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[80] |= 0x80u;
  *(_QWORD *)&WheapPfaLock.PriorityFloorCounts[8] = 0LL;
  *(_QWORD *)&WheapPfaLock.ThreadTimerDelay = 0LL;
  WheapPfaLock.OtherOperationCount = 0LL;
  *(_QWORD *)&WheapPfaLock.PriorityFloorCounts[24] = 0LL;
  WheapPfaLock.InGlobalForegroundList = 0LL;
  WheapPfaLock.SchedulerSharedSystemSlot = 0LL;
  *(_QWORD *)&WheapPfaLock.PriorityFloorCounts[16] = 0LL;
  WheapPfaLock.PropagateBoostsEntry.Next = 0LL;
  *(_QWORD *)&WheapPfaLock.AbCompletedIoQoSBoostCount = 0LL;
  *(_QWORD *)&WheapPfaLock.PriorityFloorSummary = 0LL;
  WheapPfaLock.OtherTransferCount = 0LL;
  WheapPfaLock.ReadTransferCount = 0LL;
  WheapPfaLock.WriteTransferCount = 0LL;
  *(_QWORD *)&WheapPfaLock.ForegroundLossTime = 0LL;
  *(_DWORD *)WheapPfaLock.PriorityFloorCounts = 0;
  WheapPfaLock.IoSelfBoostsEntry.Next = 0LL;
  LODWORD(WheapPfaLock.WriteOperationCount) = 0;
  LODWORD(WheapPfaLock.QueuedScb) = 0;
  WheapPfaLock.ReadOperationCount = 0LL;
  qword_140E0F250 = 1LL;
  qword_140E0F248 = 0x7FFFFFFFFFFFFFFFLL;
  qword_140E0F258 = 0x7FFFFFFFFFFFFFFFLL;
  return memset_0(&qword_140E65190, 0, 0x48uLL);
}
