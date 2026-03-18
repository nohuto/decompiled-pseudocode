/*
 * XREFs of PspReleasePushLockShared @ 0x14050B944
 * Callers:
 *     PspCompleteServerSiloShutdownDeferred @ 0x1407EEA70 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspNotifyServerSiloCreation @ 0x1407FC0DC (PspNotifyServerSiloCreation.c)
 *     PspBeginServerSiloShutdown @ 0x140B51B14 (PspBeginServerSiloShutdown.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 */

void PspReleasePushLockShared()
{
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspSiloMonitorLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PspSiloMonitorLock.Header.Lock);
  KeAbPostRelease((unsigned __int64)&PspSiloMonitorLock);
  KeLeaveCriticalRegion();
}
