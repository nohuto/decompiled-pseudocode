/*
 * XREFs of ?GetPowerFrameworkSettings@FxPoxInterface@@AEAAPEAU_POX_SETTINGS@@XZ @ 0x1400691F4
 * Callers:
 *     ?InitializeComponents@FxPoxInterface@@QEAAJXZ @ 0x140068CCC (-InitializeComponents@FxPoxInterface@@QEAAJXZ.c)
 *     ?StateCallback@FxPoxInterface@@CAXPEAXKK@Z @ 0x140068E90 (-StateCallback@FxPoxInterface@@CAXPEAXKK@Z.c)
 *     ?ComponentActiveCallback@FxPoxInterface@@CAXPEAXK@Z @ 0x140068FC0 (-ComponentActiveCallback@FxPoxInterface@@CAXPEAXK@Z.c)
 *     ?ComponentIdleCallback@FxPoxInterface@@CAXPEAXK@Z @ 0x1400690D0 (-ComponentIdleCallback@FxPoxInterface@@CAXPEAXK@Z.c)
 *     ?PoxRegisterDevice@FxPoxInterface@@AEAAJXZ @ 0x14006922C (-PoxRegisterDevice@FxPoxInterface@@AEAAJXZ.c)
 *     ?PowerPolStoppedRemoving@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x140081DD0 (-PowerPolStoppedRemoving@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerControlCallback@FxPoxInterface@@CAJPEAXPEBU_GUID@@0_K02PEA_K@Z @ 0x1400AB520 (-PowerControlCallback@FxPoxInterface@@CAJPEAXPEBU_GUID@@0_K02PEA_K@Z.c)
 * Callees:
 *     <none>
 */

_POX_SETTINGS *__fastcall FxPoxInterface::GetPowerFrameworkSettings(FxPoxInterface *this)
{
  __int64 v1; // r8

  v1 = 0LL;
  if ( (this->m_PkgPnp->m_PowerPolicyMachine.m_Owner->m_IdleSettings.m_TimeoutMgmt.m_IdleTimeoutStatus & 4) != 0 )
    return this->m_PkgPnp->m_PowerPolicyMachine.m_Owner->m_IdleSettings.m_TimeoutMgmt.m_PoxSettings;
  return (_POX_SETTINGS *)v1;
}
