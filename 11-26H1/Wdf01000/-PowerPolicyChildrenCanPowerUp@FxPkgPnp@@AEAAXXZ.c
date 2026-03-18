/*
 * XREFs of ?PowerPolicyChildrenCanPowerUp@FxPkgPnp@@AEAAXXZ @ 0x140042E94
 * Callers:
 *     ?PowerPolicyCanIdlePowerDown@FxPkgPnp@@AEAAEW4_DEVICE_POWER_STATE@@@Z @ 0x140041C20 (-PowerPolicyCanIdlePowerDown@FxPkgPnp@@AEAAEW4_DEVICE_POWER_STATE@@@Z.c)
 *     ?PowerPolStartingDecideS0Wake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x140042E20 (-PowerPolStartingDecideS0Wake@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolDevicePowerRequestFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1400A8810 (-PowerPolDevicePowerRequestFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?PowerPolicyPostParentToD0ToChildren@FxPkgPnp@@AEAAXXZ @ 0x1400431B8 (-PowerPolicyPostParentToD0ToChildren@FxPkgPnp@@AEAAXXZ.c)
 */

void __fastcall FxPkgPnp::PowerPolicyChildrenCanPowerUp(FxPkgPnp *this)
{
  FxEnumerationInfo *m_EnumInfo; // rdi
  FxEnumerationInfo *v3; // rcx

  m_EnumInfo = this->m_EnumInfo;
  if ( m_EnumInfo && this->m_PowerPolicyMachine.m_Owner )
  {
    KeEnterCriticalRegion();
    if ( KeWaitForSingleObject(m_EnumInfo, Executive, 0, 0, 0LL) == 258 )
      KeLeaveCriticalRegion();
    else
      m_EnumInfo->m_PowerStateLock.m_OwningThread = KeGetCurrentThread();
    this->m_PowerPolicyMachine.m_Owner->m_ChildrenCanPowerUp = 1;
    v3 = this->m_EnumInfo;
    v3->m_PowerStateLock.m_OwningThread = 0LL;
    KeSetEvent(&v3->m_PowerStateLock.m_Event.m_Event, 0, 0);
    KeLeaveCriticalRegion();
    FxPkgPnp::PowerPolicyPostParentToD0ToChildren(this);
  }
}
