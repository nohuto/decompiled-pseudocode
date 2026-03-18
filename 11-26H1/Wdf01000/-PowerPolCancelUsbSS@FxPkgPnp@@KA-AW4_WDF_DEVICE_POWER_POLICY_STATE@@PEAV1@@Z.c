/*
 * XREFs of ?PowerPolCancelUsbSS@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1400A8740
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerPolicyCancelUsbSSIfCapable@FxPkgPnp@@IEAAEXZ @ 0x140060E74 (-PowerPolicyCancelUsbSSIfCapable@FxPkgPnp@@IEAAEXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolCancelUsbSS(FxPkgPnp *This)
{
  return FxPkgPnp::PowerPolicyCancelUsbSSIfCapable(This) != 0 ? 1472 : 1466;
}
