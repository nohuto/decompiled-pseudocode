/*
 * XREFs of PspReleasePushLockExclusive @ 0x140619120
 * Callers:
 *     PsStartSiloMonitor @ 0x140801670 (PsStartSiloMonitor.c)
 *     PsUnregisterSiloMonitor @ 0x1408018B0 (PsUnregisterSiloMonitor.c)
 * Callees:
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 */

void PspReleasePushLockExclusive()
{
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PspSiloMonitorLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PspSiloMonitorLock.Header.Lock);
  KeAbPostRelease((unsigned __int64)&PspSiloMonitorLock);
  KeLeaveCriticalRegion();
}
