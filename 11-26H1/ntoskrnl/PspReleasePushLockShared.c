/*
 * XREFs of PspReleasePushLockShared @ 0x1405053B4
 * Callers:
 *     PspCompleteServerSiloShutdownDeferred @ 0x1407F45D0 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspNotifyServerSiloCreation @ 0x140801B0C (PspNotifyServerSiloCreation.c)
 *     PspBeginServerSiloShutdown @ 0x140B543B4 (PspBeginServerSiloShutdown.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 */

void PspReleasePushLockShared()
{
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspSiloMonitorLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PspSiloMonitorLock.Header.Lock);
  KeAbPostRelease((unsigned __int64)&PspSiloMonitorLock);
  KeLeaveCriticalRegion();
}
