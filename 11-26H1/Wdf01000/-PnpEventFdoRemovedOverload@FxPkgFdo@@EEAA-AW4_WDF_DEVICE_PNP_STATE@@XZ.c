/*
 * XREFs of ?PnpEventFdoRemovedOverload@FxPkgFdo@@EEAA?AW4_WDF_DEVICE_PNP_STATE@@XZ @ 0x140038B20
 * Callers:
 *     <none>
 * Callees:
 *     ?PnpEventRemovedCommonCode@FxPkgPnp@@IEAAXXZ @ 0x140038B3C (-PnpEventRemovedCommonCode@FxPkgPnp@@IEAAXXZ.c)
 */

__int64 __fastcall FxPkgFdo::PnpEventFdoRemovedOverload(FxPkgFdo *this)
{
  FxPkgPnp::PnpEventRemovedCommonCode(this);
  return 309LL;
}
