/*
 * XREFs of LeaveWheaIpmiContextLock @ 0x1406D83E4
 * Callers:
 *     PnpLogBootFailuresSel @ 0x1405DCA20 (PnpLogBootFailuresSel.c)
 *     WheaSelLogCheckPoint @ 0x1406D8424 (WheaSelLogCheckPoint.c)
 * Callees:
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 */

void LeaveWheaIpmiContextLock()
{
  if ( (_InterlockedExchangeAdd64(
          (volatile signed __int64 *)&WheapConfigTableLock.ApcStateFill[40],
          0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&WheapConfigTableLock.ApcStateFill[40]);
  KeAbPostRelease((unsigned __int64)&WheapConfigTableLock.ApcStateFill[40]);
  KeLeaveCriticalRegion();
}
