/*
 * XREFs of ?PowerD0StartingDmaEnable@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x14007AED0
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerDmaEnableAndScan@FxPkgPnp@@IEAAEXZ @ 0x140042D64 (-PowerDmaEnableAndScan@FxPkgPnp@@IEAAEXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerD0StartingDmaEnable(FxPkgPnp *This)
{
  return FxPkgPnp::PowerDmaEnableAndScan(This) != 0 ? 871 : 834;
}
