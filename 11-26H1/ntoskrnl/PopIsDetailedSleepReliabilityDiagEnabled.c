/*
 * XREFs of PopIsDetailedSleepReliabilityDiagEnabled @ 0x140B3EFE8
 * Callers:
 *     PopUpdatePowerActionWatchdogTimeouts @ 0x1407D4538 (PopUpdatePowerActionWatchdogTimeouts.c)
 *     PopEnableSystemSleepCheckpoint @ 0x140B3EEA0 (PopEnableSystemSleepCheckpoint.c)
 *     PopTransitionSystemPowerStateEx @ 0x140C112B0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockShared @ 0x140424A28 (PopAcquireRwLockShared.c)
 */

char __fastcall PopIsDetailedSleepReliabilityDiagEnabled(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  char v4; // bl

  PopAcquireRwLockShared((volatile signed __int64 *)&PopPdcDeviceListLock.ApcState.ApcListHead[1].Blink, a2, a3, a4);
  v4 = PopSleepReliabilityDetailedDiagEnabled;
  PopReleaseRwLock((struct _KTHREAD *)&PopPdcDeviceListLock.ApcStateFill[24]);
  return v4;
}
