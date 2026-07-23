/*
 * XREFs of KiReleaseDpcCorralLock @ 0x1403CC4D0
 * Callers:
 *     KeGenericCallDpcEx @ 0x1403CC184 (KeGenericCallDpcEx.c)
 *     KiGenericCallDpcInitiatorWorker @ 0x1403CC2F0 (KiGenericCallDpcInitiatorWorker.c)
 * Callees:
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x14027D080 (KeLeaveGuardedRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 */

void KiReleaseDpcCorralLock()
{
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&KiDpcCorralLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&KiDpcCorralLock.Header.Lock);
  KeAbPostRelease((unsigned __int64)&KiDpcCorralLock);
  KeLeaveGuardedRegion();
}
