/*
 * XREFs of ?PowerDxStoppedDisarmWake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1400A57D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxPkgPnp::PowerDxStoppedDisarmWake(FxPkgPnp *This)
{
  This->PowerDisableWakeAtBusOverload(This);
  return 854LL;
}
