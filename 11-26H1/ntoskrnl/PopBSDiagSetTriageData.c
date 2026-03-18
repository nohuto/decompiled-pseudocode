/*
 * XREFs of PopBSDiagSetTriageData @ 0x1407DC970
 * Callers:
 *     PopDirectedDripsInitializePhase3 @ 0x140CD0B50 (PopDirectedDripsInitializePhase3.c)
 *     PopInitializeBlameStack @ 0x140CD15BC (PopInitializeBlameStack.c)
 *     PopPowerButtonSuppressionInit @ 0x140CD317C (PopPowerButtonSuppressionInit.c)
 *     PopBSDiagInitialize @ 0x140CD5F20 (PopBSDiagInitialize.c)
 *     PopPowerAggregatorInitialize @ 0x140D0B4DC (PopPowerAggregatorInitialize.c)
 * Callees:
 *     PopAcquireRwLockShared @ 0x140436298 (PopAcquireRwLockShared.c)
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 */

__int64 __fastcall PopBSDiagSetTriageData(int a1, struct _LIST_ENTRY *a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v4; // rbx
  int v5; // esi
  __int64 v7; // rax

  v4 = a1;
  v5 = a3;
  PopAcquireRwLockShared((volatile signed __int64 *)&PopModernStandbyStateNotify.RelativeTimerBias, (__int64)a2, a3, a4);
  v7 = 2 * v4;
  (&PopModernStandbyStateNotify.Timer.Header.WaitListHead.Blink)[v7] = a2;
  *((_DWORD *)&(&PopModernStandbyStateNotify.Timer.Header.WaitListHead.Blink)[v7] + 2) = v5;
  return PopReleaseRwLock((struct _KTHREAD *)&PopModernStandbyStateNotify.RelativeTimerBias);
}
