/*
 * XREFs of PopCurrentPowerState @ 0x140AAF340
 * Callers:
 *     PopCalculateCsSummary @ 0x140422F4C (PopCalculateCsSummary.c)
 *     PopUpdateAcDcState @ 0x1404E3404 (PopUpdateAcDcState.c)
 *     PopEsUpdateState @ 0x140517FA0 (PopEsUpdateState.c)
 *     NtPowerInformation @ 0x140A1B510 (NtPowerInformation.c)
 *     PopCurrentPowerStatePrecise @ 0x140AAF28C (PopCurrentPowerStatePrecise.c)
 *     PopPowerAggregatorHandleModernStandbyIntent @ 0x140B761C0 (PopPowerAggregatorHandleModernStandbyIntent.c)
 *     PopDiagTraceGracefulShutdown @ 0x140C03B68 (PopDiagTraceGracefulShutdown.c)
 *     PopTransitionSystemPowerStateEx @ 0x140C112B0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockShared @ 0x140424A28 (PopAcquireRwLockShared.c)
 */

__int64 __fastcall PopCurrentPowerState(_OWORD *a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  PopAcquireRwLockShared((volatile signed __int64 *)&xmmword_140F10830, a2, a3, a4);
  *a1 = xmmword_140F10840;
  a1[1] = xmmword_140F10850;
  return PopReleaseRwLock((struct _KTHREAD *)&xmmword_140F10830);
}
