/*
 * XREFs of ?PowerPolicyCanIdlePowerDown@FxPkgPnp@@AEAAEW4_DEVICE_POWER_STATE@@@Z @ 0x140041C20
 * Callers:
 *     ?PowerPolTimerExpiredNoWake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x140040F90 (-PowerPolTimerExpiredNoWake@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolTimerExpiredWakeCapablePowerDown@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x140041BF0 (-PowerPolTimerExpiredWakeCapablePowerDown@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@.c)
 * Callees:
 *     WPP_IFR_SF_qqd @ 0x14000EA80 (WPP_IFR_SF_qqd.c)
 *     ?ReleaseLock@FxWaitLockInternal@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140041F90 (-ReleaseLock@FxWaitLockInternal@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x1400421F0 (-AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z.c)
 *     ?PowerPolicySendDevicePowerRequest@FxPkgPnp@@IEAAJW4_DEVICE_POWER_STATE@@W4SendDeviceRequestAction@@W4RequestDIrpReason@@@Z @ 0x14004243C (-PowerPolicySendDevicePowerRequest@FxPkgPnp@@IEAAJW4_DEVICE_POWER_STATE@@W4SendDeviceRequestActi.c)
 *     ?PowerPolicyChildrenCanPowerUp@FxPkgPnp@@AEAAXXZ @ 0x140042E94 (-PowerPolicyChildrenCanPowerUp@FxPkgPnp@@AEAAXXZ.c)
 */

char __fastcall FxPkgPnp::PowerPolicyCanIdlePowerDown(FxPkgPnp *this, _FX_DRIVER_GLOBALS *DxState)
{
  FxEnumerationInfo *m_EnumInfo; // rcx
  _DEVICE_POWER_STATE v4; // esi
  _FX_DRIVER_GLOBALS *v5; // rdx
  FxPowerPolicyOwnerSettings *m_Owner; // rax
  unsigned int _a3; // r8d
  char v8; // bl
  FxDeviceBase *m_DeviceBase; // rcx
  const void *_a1; // rdx

  m_EnumInfo = this->m_EnumInfo;
  v4 = (int)DxState;
  if ( !m_EnumInfo )
  {
    v8 = 1;
LABEL_5:
    if ( FxPkgPnp::PowerPolicySendDevicePowerRequest(this, v4, NoRetry, RequestDxForIdleOut) < 0 )
    {
      FxPkgPnp::PowerPolicyChildrenCanPowerUp(this);
      return 0;
    }
    return v8;
  }
  FxWaitLockInternal::AcquireLock(&m_EnumInfo->m_PowerStateLock, DxState, 0LL);
  m_Owner = this->m_PowerPolicyMachine.m_Owner;
  _a3 = m_Owner->m_ChildrenPoweredOnCount;
  if ( _a3 )
  {
    m_DeviceBase = this->m_DeviceBase;
    _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_DeviceBase->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qqd(
      this->m_Globals,
      4u,
      0xCu,
      0x34u,
      WPP_PowerPolicyStateMachine_cpp_Traceguids,
      _a1,
      m_DeviceBase->m_DeviceObject.m_DeviceObject,
      _a3);
    v8 = 0;
  }
  else
  {
    m_Owner->m_ChildrenCanPowerUp = 0;
    v8 = 1;
  }
  FxWaitLockInternal::ReleaseLock(&this->m_EnumInfo->m_PowerStateLock, v5);
  if ( v8 )
    goto LABEL_5;
  return v8;
}
