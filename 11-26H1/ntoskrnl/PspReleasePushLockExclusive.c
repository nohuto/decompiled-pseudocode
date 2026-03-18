/*
 * XREFs of PspReleasePushLockExclusive @ 0x140616130
 * Callers:
 *     PsStartSiloMonitor @ 0x1407FBC40 (PsStartSiloMonitor.c)
 *     PsUnregisterSiloMonitor @ 0x1407FBE80 (PsUnregisterSiloMonitor.c)
 * Callees:
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 */

void PspReleasePushLockExclusive()
{
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PspSiloMonitorLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PspSiloMonitorLock.Header.Lock);
  KeAbPostRelease((unsigned __int64)&PspSiloMonitorLock);
  KeLeaveCriticalRegion();
}
