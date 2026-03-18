/*
 * XREFs of PopIsDetailedSleepReliabilityDiagEnabled @ 0x140B3CD68
 * Callers:
 *     PopUpdatePowerActionWatchdogTimeouts @ 0x1407D1498 (PopUpdatePowerActionWatchdogTimeouts.c)
 *     PopEnableSystemSleepCheckpoint @ 0x140B3CC20 (PopEnableSystemSleepCheckpoint.c)
 *     PopTransitionSystemPowerStateEx @ 0x140C0B0A0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopAcquireRwLockShared @ 0x140436298 (PopAcquireRwLockShared.c)
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 */

char __fastcall PopIsDetailedSleepReliabilityDiagEnabled(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  char v4; // bl

  PopAcquireRwLockShared((volatile signed __int64 *)&PopModernStandbyStateNotify.KernelWaitTime, a2, a3, a4);
  v4 = PopSleepReliabilityDetailedDiagEnabled;
  PopReleaseRwLock((struct _KTHREAD *)&PopModernStandbyStateNotify.KernelWaitTime);
  return v4;
}
