/*
 * XREFs of ExReleaseTimeRefreshLockExclusive @ 0x140A66AE4
 * Callers:
 *     ExCleanTimerResolutionRequest @ 0x1404E2B78 (ExCleanTimerResolutionRequest.c)
 *     NtSetSystemInformation @ 0x140833840 (NtSetSystemInformation.c)
 *     ExpReadLeapSecondData @ 0x140835F5C (ExpReadLeapSecondData.c)
 *     ExpRefreshSystemTime @ 0x140836324 (ExpRefreshSystemTime.c)
 *     ExpTimeZoneInitSiloState @ 0x1408364F8 (ExpTimeZoneInitSiloState.c)
 *     NtSetSystemTime @ 0x1408366B0 (NtSetSystemTime.c)
 *     ExUpdateTimerResolutionPolicy @ 0x140A6677C (ExUpdateTimerResolutionPolicy.c)
 *     NtSetTimerResolution @ 0x140A667F0 (NtSetTimerResolution.c)
 *     ExpTimeRefreshWork @ 0x140BFF300 (ExpTimeRefreshWork.c)
 *     PoBroadcastSystemState @ 0x140C05D10 (PoBroadcastSystemState.c)
 *     PopTransitionSystemPowerStateEx @ 0x140C0B0A0 (PopTransitionSystemPowerStateEx.c)
 *     KdpTimeSlipWork @ 0x140C15460 (KdpTimeSlipWork.c)
 *     Phase1InitializationDiscard @ 0x140CABD00 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 */

__int64 ExReleaseTimeRefreshLockExclusive()
{
  __int64 v0; // rdx
  __int64 v1; // r8

  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpSysDbgLock.ApcStateFill[40], 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpSysDbgLock.ApcStateFill[40]);
  KeAbPostRelease((unsigned __int64)&ExpSysDbgLock.ApcStateFill[40]);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v0, v1);
}
