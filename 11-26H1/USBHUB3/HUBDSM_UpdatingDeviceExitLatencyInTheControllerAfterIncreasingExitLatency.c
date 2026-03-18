/*
 * XREFs of HUBDSM_UpdatingDeviceExitLatencyInTheControllerAfterIncreasingExitLatency @ 0x140024F20
 * Callers:
 *     <none>
 * Callees:
 *     HUBUCX_UpdateDeviceExitLatencyUsingUCXIoctl @ 0x140029800 (HUBUCX_UpdateDeviceExitLatencyUsingUCXIoctl.c)
 */

__int64 __fastcall HUBDSM_UpdatingDeviceExitLatencyInTheControllerAfterIncreasingExitLatency(__int64 a1)
{
  HUBUCX_UpdateDeviceExitLatencyUsingUCXIoctl(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
