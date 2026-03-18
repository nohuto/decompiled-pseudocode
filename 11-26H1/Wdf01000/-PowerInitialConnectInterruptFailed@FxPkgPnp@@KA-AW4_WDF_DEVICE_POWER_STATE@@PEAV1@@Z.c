/*
 * XREFs of ?PowerInitialConnectInterruptFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1400A59A0
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerConnectInterruptFailed@FxPkgPnp@@IEAAXXZ @ 0x1400A5484 (-PowerConnectInterruptFailed@FxPkgPnp@@IEAAXXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerInitialConnectInterruptFailed(FxPkgPnp *This)
{
  FxPkgPnp::PowerConnectInterruptFailed(This);
  return 836LL;
}
