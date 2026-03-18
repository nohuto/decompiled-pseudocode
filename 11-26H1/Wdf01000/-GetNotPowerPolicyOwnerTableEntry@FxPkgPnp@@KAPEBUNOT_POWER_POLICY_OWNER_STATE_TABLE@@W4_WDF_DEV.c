/*
 * XREFs of ?GetNotPowerPolicyOwnerTableEntry@FxPkgPnp@@KAPEBUNOT_POWER_POLICY_OWNER_STATE_TABLE@@W4_WDF_DEVICE_POWER_POLICY_STATE@@@Z @ 0x1400654C4
 * Callers:
 *     ?PowerPolicyProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x140031790 (-PowerPolicyProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z.c)
 *     ?NotPowerPolicyOwnerEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_POWER_POLICY_STATE@@@Z @ 0x1400652C0 (-NotPowerPolicyOwnerEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_POWER_POLICY_STATE@@@Z.c)
 * Callees:
 *     <none>
 */

const NOT_POWER_POLICY_OWNER_STATE_TABLE *__fastcall FxPkgPnp::GetNotPowerPolicyOwnerTableEntry(
        _WDF_DEVICE_POWER_POLICY_STATE State)
{
  int i; // edx
  const NOT_POWER_POLICY_OWNER_STATE_TABLE *result; // rax

  for ( i = 0; ; ++i )
  {
    result = &FxPkgPnp::m_WdfNotPowerPolicyOwnerStates[i];
    if ( result->CurrentTargetState == WdfDevStatePwrPolNull )
      break;
    if ( result->CurrentTargetState == State )
      return result;
  }
  return 0LL;
}
