/*
 * XREFs of ?PowerNotRequiredD0@FxDevicePwrRequirementMachine@@CA?AW4FxDevicePwrRequirementStates@@PEAV1@@Z @ 0x14006ED50
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x1400475A8 (-PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z.c)
 */

__int64 __fastcall FxDevicePwrRequirementMachine::PowerNotRequiredD0(FxDevicePwrRequirementMachine *This)
{
  FxPkgPnp::PowerPolicyProcessEvent(
    This->m_PoxInterface->m_PkgPnp,
    (FxPowerPolicyEvent)(_InterlockedCompareExchange(&This->m_PoxInterface->m_DirectedTransitionActive, 0, 0) != 0
                       ? PwrPolDevicePowerNotRequiredDirected
                       : PwrPolDevicePowerNotRequired),
    0);
  return 15LL;
}
