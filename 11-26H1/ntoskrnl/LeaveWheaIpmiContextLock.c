/*
 * XREFs of LeaveWheaIpmiContextLock @ 0x1406D4364
 * Callers:
 *     PnpLogBootFailuresSel @ 0x1405DA220 (PnpLogBootFailuresSel.c)
 *     WheaSelLogCheckPoint @ 0x1406D43A4 (WheaSelLogCheckPoint.c)
 * Callees:
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
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
