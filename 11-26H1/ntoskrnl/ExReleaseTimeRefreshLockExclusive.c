/*
 * XREFs of ExReleaseTimeRefreshLockExclusive @ 0x140A73AB4
 * Callers:
 *     ExCleanTimerResolutionRequest @ 0x1404DC1EC (ExCleanTimerResolutionRequest.c)
 *     NtSetSystemInformation @ 0x140839A80 (NtSetSystemInformation.c)
 *     ExpReadLeapSecondData @ 0x14083C19C (ExpReadLeapSecondData.c)
 *     ExpRefreshSystemTime @ 0x14083C564 (ExpRefreshSystemTime.c)
 *     ExpTimeZoneInitSiloState @ 0x14083C738 (ExpTimeZoneInitSiloState.c)
 *     NtSetSystemTime @ 0x14083C8F0 (NtSetSystemTime.c)
 *     ExUpdateTimerResolutionPolicy @ 0x140A7374C (ExUpdateTimerResolutionPolicy.c)
 *     NtSetTimerResolution @ 0x140A737C0 (NtSetTimerResolution.c)
 *     ExpTimeRefreshWork @ 0x140C05510 (ExpTimeRefreshWork.c)
 *     PoBroadcastSystemState @ 0x140C0BF20 (PoBroadcastSystemState.c)
 *     PopTransitionSystemPowerStateEx @ 0x140C112B0 (PopTransitionSystemPowerStateEx.c)
 *     KdpTimeSlipWork @ 0x140C1B460 (KdpTimeSlipWork.c)
 *     Phase1InitializationDiscard @ 0x140CB1D40 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 */

__int64 ExReleaseTimeRefreshLockExclusive()
{
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpSysDbgLock.WaitBlockFill11[112], 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpSysDbgLock.WaitBlockFill11[112]);
  KeAbPostRelease((unsigned __int64)&ExpSysDbgLock.WaitBlockFill11[112]);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
