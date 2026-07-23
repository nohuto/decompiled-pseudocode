/*
 * XREFs of PopBSDiagSetTriageThread @ 0x140ABC830
 * Callers:
 *     PopPushPowerStateTransitionRecordWithCallback @ 0x14060A1F8 (PopPushPowerStateTransitionRecordWithCallback.c)
 *     PopPowerAggregatorWorker @ 0x140ABC780 (PopPowerAggregatorWorker.c)
 *     PoDelistPowerStateTransitionBlocker @ 0x140C03138 (PoDelistPowerStateTransitionBlocker.c)
 *     PopDirectedDripsInitializePhase3 @ 0x140CD6CF8 (PopDirectedDripsInitializePhase3.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockShared @ 0x140424A28 (PopAcquireRwLockShared.c)
 */

__int64 __fastcall PopBSDiagSetTriageThread(int a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v4; // rbx

  v4 = a1;
  PopAcquireRwLockShared((volatile signed __int64 *)&xmmword_140F0C2F8, a2, a3, a4);
  qword_140F0C3C0[v4] = a2;
  return PopReleaseRwLock((struct _KTHREAD *)&xmmword_140F0C2F8);
}
