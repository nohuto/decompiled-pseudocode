/*
 * XREFs of ?PowerPolStartingPoweredUp@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1400821F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InitializeComponents@FxPoxInterface@@QEAAJXZ @ 0x140068CCC (-InitializeComponents@FxPoxInterface@@QEAAJXZ.c)
 *     ?FreezeIdleTimeoutManagementStatus@IdleTimeoutManagement@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140082248 (-FreezeIdleTimeoutManagementStatus@IdleTimeoutManagement@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?SleepStudyEvaluateParticipation@FxPkgPnp@@QEAAXXZ @ 0x1400A7F14 (-SleepStudyEvaluateParticipation@FxPkgPnp@@QEAAXXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolStartingPoweredUp(FxPkgPnp *This)
{
  IdleTimeoutManagement::FreezeIdleTimeoutManagementStatus(
    &This->m_PowerPolicyMachine.m_Owner->m_IdleSettings.m_TimeoutMgmt,
    This->m_Globals);
  if ( (int)FxPoxInterface::InitializeComponents(&This->m_PowerPolicyMachine.m_Owner->m_PoxInterface) < 0 )
    return 1425LL;
  FxPkgPnp::SleepStudyEvaluateParticipation(This);
  return 1282LL;
}
