/*
 * XREFs of ?PnpEventFailedInit@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1400A38A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleasePowerThread@FxPkgPnp@@AEAAXXZ @ 0x140039488 (-ReleasePowerThread@FxPkgPnp@@AEAAXXZ.c)
 *     ?PnpFinishProcessingIrp@FxPkgPnp@@IEAAXE@Z @ 0x1400736A8 (-PnpFinishProcessingIrp@FxPkgPnp@@IEAAXE@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxPkgPnp::PnpEventFailedInit(FxPkgPnp *This, unsigned __int8 a2)
{
  unsigned __int8 v3; // dl

  FxPkgPnp::ReleasePowerThread(This, a2);
  This->ReleaseReenumerationInterface(This);
  FxPkgPnp::PnpFinishProcessingIrp(This, v3);
  return 261LL;
}
