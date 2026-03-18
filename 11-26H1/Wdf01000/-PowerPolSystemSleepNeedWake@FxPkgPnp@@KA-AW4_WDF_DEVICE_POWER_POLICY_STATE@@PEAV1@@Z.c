/*
 * XREFs of ?PowerPolSystemSleepNeedWake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1400A9180
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_D @ 0x140026890 (WPP_IFR_SF_D.c)
 *     ?PowerPolicySendDevicePowerRequest@FxPkgPnp@@IEAAJW4_DEVICE_POWER_STATE@@W4SendDeviceRequestAction@@W4RequestDIrpReason@@@Z @ 0x14004243C (-PowerPolicySendDevicePowerRequest@FxPkgPnp@@IEAAJW4_DEVICE_POWER_STATE@@W4SendDeviceRequestActi.c)
 *     ?DisableTimer@FxPowerIdleMachine@@QEAAEXZ @ 0x140060C28 (-DisableTimer@FxPowerIdleMachine@@QEAAEXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolSystemSleepNeedWake(FxPkgPnp *This)
{
  signed int _a1; // eax

  FxPowerIdleMachine::DisableTimer(&This->m_PowerPolicyMachine.m_Owner->m_PowerIdleMachine);
  _a1 = FxPkgPnp::PowerPolicySendDevicePowerRequest(This, (POWER_STATE)1, Retry, RequestD0ForSx);
  if ( _a1 >= 0 )
    return 1472LL;
  WPP_IFR_SF_D(This->m_Globals, 3u, 0xCu, 0x16u, WPP_PowerPolicyStateMachine_cpp_Traceguids, _a1);
  return 1324LL;
}
