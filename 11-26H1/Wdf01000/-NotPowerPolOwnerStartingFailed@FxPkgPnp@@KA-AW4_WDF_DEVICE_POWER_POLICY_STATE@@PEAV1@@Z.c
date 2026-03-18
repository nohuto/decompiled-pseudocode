/*
 * XREFs of ?NotPowerPolOwnerStartingFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1400AB250
 * Callers:
 *     <none>
 * Callees:
 *     ?PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z @ 0x1400216A4 (-PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z.c)
 */

__int64 __fastcall FxPkgPnp::NotPowerPolOwnerStartingFailed(FxPkgPnp *This, __int64 a2, unsigned __int8 a3)
{
  FxPkgPnp::PnpProcessEvent(This, PnpEventPwrPolStartFailed, a3);
  return 1472LL;
}
