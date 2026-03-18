/*
 * XREFs of ?PnpEventFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x14006DCB0
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x1400475A8 (-PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z.c)
 *     ?PnpCleanupForRemove@FxPkgPnp@@AEAAXE@Z @ 0x14006DCE0 (-PnpCleanupForRemove@FxPkgPnp@@AEAAXE@Z.c)
 */

__int64 __fastcall FxPkgPnp::PnpEventFailed(FxPkgPnp *This)
{
  unsigned __int8 v2; // r8

  FxPkgPnp::PnpCleanupForRemove(This, 0);
  FxPkgPnp::PowerPolicyProcessEvent(This, PwrPolRemove, v2);
  return 314LL;
}
