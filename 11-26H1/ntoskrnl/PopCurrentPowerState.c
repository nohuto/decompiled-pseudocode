/*
 * XREFs of PopCurrentPowerState @ 0x140AB1350
 * Callers:
 *     PopCalculateCsSummary @ 0x14042A4C8 (PopCalculateCsSummary.c)
 *     PopUpdateAcDcState @ 0x1404EA054 (PopUpdateAcDcState.c)
 *     PopEsUpdateState @ 0x14051C1C0 (PopEsUpdateState.c)
 *     NtPowerInformation @ 0x1409DE3E0 (NtPowerInformation.c)
 *     PopCurrentPowerStatePrecise @ 0x140AB129C (PopCurrentPowerStatePrecise.c)
 *     PopPowerAggregatorHandleModernStandbyIntent @ 0x140B719D0 (PopPowerAggregatorHandleModernStandbyIntent.c)
 *     PopDiagTraceGracefulShutdown @ 0x140BFDB68 (PopDiagTraceGracefulShutdown.c)
 *     PopTransitionSystemPowerStateEx @ 0x140C0B0A0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopAcquireRwLockShared @ 0x140436298 (PopAcquireRwLockShared.c)
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 */

__int64 __fastcall PopCurrentPowerState(_OWORD *a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  PopAcquireRwLockShared((volatile signed __int64 *)&stru_140F10070.Header.Lock, a2, a3, a4);
  *a1 = *(_OWORD *)&stru_140F10070.Header.WaitListHead.Blink;
  a1[1] = *(_OWORD *)&stru_140F10070.QuantumTarget;
  return PopReleaseRwLock(&stru_140F10070);
}
