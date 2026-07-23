/*
 * XREFs of ExReleaseTimeRefreshLockShared @ 0x140A91120
 * Callers:
 *     ExTraceTimerResolution @ 0x1404E3B34 (ExTraceTimerResolution.c)
 *     ExpSetTimeZoneInformation @ 0x1408395BC (ExpSetTimeZoneInformation.c)
 *     PopPolicyTimeChange @ 0x140A91050 (PopPolicyTimeChange.c)
 *     ExpQuerySystemInformation @ 0x140B169CC (ExpQuerySystemInformation.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 */

void ExReleaseTimeRefreshLockShared()
{
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpSysDbgLock.WaitBlockFill11[112], 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&ExpSysDbgLock.WaitBlockFill11[112]);
  KeAbPostRelease((unsigned __int64)&ExpSysDbgLock.WaitBlockFill11[112]);
  KeLeaveCriticalRegion();
}
