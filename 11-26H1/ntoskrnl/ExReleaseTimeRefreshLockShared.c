/*
 * XREFs of ExReleaseTimeRefreshLockShared @ 0x140A8BE50
 * Callers:
 *     ExTraceTimerResolution @ 0x1404EA784 (ExTraceTimerResolution.c)
 *     ExpSetTimeZoneInformation @ 0x14083337C (ExpSetTimeZoneInformation.c)
 *     PopPolicyTimeChange @ 0x140A8BD80 (PopPolicyTimeChange.c)
 *     ExpQuerySystemInformation @ 0x140B145DC (ExpQuerySystemInformation.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 */

void ExReleaseTimeRefreshLockShared()
{
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpSysDbgLock.ApcStateFill[40], 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&ExpSysDbgLock.ApcStateFill[40]);
  KeAbPostRelease((unsigned __int64)&ExpSysDbgLock.ApcStateFill[40]);
  KeLeaveCriticalRegion();
}
