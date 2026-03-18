/*
 * XREFs of KiReleaseDpcCorralLock @ 0x1403C25D0
 * Callers:
 *     KeGenericCallDpcEx @ 0x1403C2284 (KeGenericCallDpcEx.c)
 *     KiGenericCallDpcInitiatorWorker @ 0x1403C23F0 (KiGenericCallDpcInitiatorWorker.c)
 * Callees:
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x14027DB10 (KeLeaveGuardedRegion.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 */

void KiReleaseDpcCorralLock()
{
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&KiDpcCorralLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&KiDpcCorralLock.Header.Lock);
  KeAbPostRelease((unsigned __int64)&KiDpcCorralLock);
  KeLeaveGuardedRegion();
}
