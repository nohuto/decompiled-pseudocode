/*
 * XREFs of ?PowerGotoImplicitD3DisarmWakeAtBus@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1400A5940
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxPkgPnp::PowerGotoImplicitD3DisarmWakeAtBus(FxPkgPnp *This)
{
  This->PowerDisableWakeAtBusOverload(This);
  return 788LL;
}
