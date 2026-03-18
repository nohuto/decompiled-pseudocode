/*
 * XREFs of ?PowerPolSleepingSendWake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x14006D930
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_D @ 0x140026890 (WPP_IFR_SF_D.c)
 *     ?PowerPolicySendWaitWakeRequest@FxPkgPnp@@IEAAJW4_SYSTEM_POWER_STATE@@@Z @ 0x14006D9FC (-PowerPolicySendWaitWakeRequest@FxPkgPnp@@IEAAJW4_SYSTEM_POWER_STATE@@@Z.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolSleepingSendWake(FxPkgPnp *This)
{
  bool v1; // zf
  _SYSTEM_POWER_STATE m_SystemWake; // edx
  signed int _a1; // eax

  v1 = This->m_WakeFromShutdownOptIn == 0;
  This->m_WakeInterruptsKeepConnected = 1;
  m_SystemWake = PowerSystemShutdown;
  if ( v1 )
    m_SystemWake = This->m_SystemWake;
  _a1 = FxPkgPnp::PowerPolicySendWaitWakeRequest(This, m_SystemWake);
  if ( _a1 >= 0 )
    return 1472LL;
  WPP_IFR_SF_D(This->m_Globals, 2u, 0xCu, 0x20u, WPP_PowerPolicyStateMachine_cpp_Traceguids, _a1);
  return 1320LL;
}
