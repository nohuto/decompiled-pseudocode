/*
 * XREFs of PopBSDiagSetTriageThread @ 0x140ABB370
 * Callers:
 *     PopPushPowerStateTransitionRecordWithCallback @ 0x14060769C (PopPushPowerStateTransitionRecordWithCallback.c)
 *     PopPowerAggregatorWorker @ 0x140ABB2C0 (PopPowerAggregatorWorker.c)
 *     PoDelistPowerStateTransitionBlocker @ 0x140BFD138 (PoDelistPowerStateTransitionBlocker.c)
 *     PopDirectedDripsInitializePhase3 @ 0x140CD0B50 (PopDirectedDripsInitializePhase3.c)
 * Callees:
 *     PopAcquireRwLockShared @ 0x140436298 (PopAcquireRwLockShared.c)
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 */

__int64 __fastcall PopBSDiagSetTriageThread(int a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v4; // rbx

  v4 = a1;
  PopAcquireRwLockShared((volatile signed __int64 *)&PopModernStandbyStateNotify.RelativeTimerBias, a2, a3, a4);
  *((_QWORD *)&PopModernStandbyStateNotify.WaitBlock[2].Object + v4) = a2;
  return PopReleaseRwLock((struct _KTHREAD *)&PopModernStandbyStateNotify.RelativeTimerBias);
}
