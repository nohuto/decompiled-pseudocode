/*
 * XREFs of ?PowerGotoDxStopped@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x14006B360
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x1400475A8 (-PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z.c)
 *     ?PowerSendIdlePowerEvent@FxPkgPnp@@IEAAXW4FxPowerIdleEvents@@@Z @ 0x14006B65C (-PowerSendIdlePowerEvent@FxPkgPnp@@IEAAXW4FxPowerIdleEvents@@@Z.c)
 */

__int64 __fastcall FxPkgPnp::PowerGotoDxStopped(FxPkgPnp *This)
{
  unsigned __int8 v2; // r8

  FxPkgPnp::PowerSendIdlePowerEvent(This, PowerIdleEventPowerDown);
  FxPkgPnp::PowerPolicyProcessEvent(
    This,
    (FxPowerPolicyEvent)(This->m_PowerPolicyMachine.m_Owner != 0LL ? PwrPolPowerDown : PwrPolImplicitPowerDown),
    v2);
  return 789LL;
}
