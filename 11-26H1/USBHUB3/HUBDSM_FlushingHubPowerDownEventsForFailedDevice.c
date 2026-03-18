/*
 * XREFs of HUBDSM_FlushingHubPowerDownEventsForFailedDevice @ 0x140021370
 * Callers:
 *     <none>
 * Callees:
 *     HUBMUX_ReleaseDevicePowerReference @ 0x140011E94 (HUBMUX_ReleaseDevicePowerReference.c)
 */

__int64 __fastcall HUBDSM_FlushingHubPowerDownEventsForFailedDevice(__int64 a1)
{
  HUBMUX_ReleaseDevicePowerReference(*(volatile signed __int32 **)(a1 + 960));
  return 4077LL;
}
