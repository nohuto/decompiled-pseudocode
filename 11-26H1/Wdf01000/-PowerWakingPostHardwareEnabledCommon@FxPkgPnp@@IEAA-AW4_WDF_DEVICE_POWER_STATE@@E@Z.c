/*
 * XREFs of ?PowerWakingPostHardwareEnabledCommon@FxPkgPnp@@IEAA?AW4_WDF_DEVICE_POWER_STATE@@E@Z @ 0x1400462E8
 * Callers:
 *     ?PowerWakingPostHardwareEnabled@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1400462D0 (-PowerWakingPostHardwareEnabled@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerWakingPostHardwareEnabledNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x14007BC90 (-PowerWakingPostHardwareEnabledNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@@Z @ 0x1400461DC (-InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@.c)
 *     ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x1400475A8 (-PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z.c)
 *     WPP_IFR_SF_qqLd @ 0x14009D2BC (WPP_IFR_SF_qqLd.c)
 */

__int64 __fastcall FxPkgPnp::PowerWakingPostHardwareEnabledCommon(FxPkgPnp *this, unsigned __int8 NonPageable)
{
  FxPnpDeviceD0EntryPostHwEnabled *p_m_DeviceD0EntryPostHardwareEnabled; // rcx
  FxDeviceBase *m_DeviceBase; // r8
  unsigned __int16 m_ObjectSize; // ax
  unsigned __int64 v7; // r8
  unsigned __int8 v8; // r8
  int globals; // r10d
  FxDeviceBase *v11; // rax
  const void *_a2; // r8
  bool v13; // zf
  _DEVICE_OBJECT *_a3; // rax
  FxCxCallbackProgress progress; // [rsp+60h] [rbp+8h] BYREF

  p_m_DeviceD0EntryPostHardwareEnabled = &this->m_DeviceD0EntryPostHardwareEnabled;
  progress = FxCxCallbackProgressInitialized;
  m_DeviceBase = this->m_DeviceBase;
  m_ObjectSize = m_DeviceBase->m_ObjectSize;
  v7 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
  p_m_DeviceD0EntryPostHardwareEnabled->m_PreviousState = this->m_DevicePowerState;
  if ( !m_ObjectSize )
    v7 = 0LL;
  p_m_DeviceD0EntryPostHardwareEnabled->m_Device = (WDFDEVICE__ *)v7;
  globals = FxPrePostCallback::InvokeStateful(
              p_m_DeviceD0EntryPostHardwareEnabled,
              &progress,
              FxCxCleanupAfterPreFailure);
  if ( globals < 0 )
  {
    v11 = this->m_DeviceBase;
    _a2 = (const void *)((unsigned __int64)v11 ^ 0xFFFFFFFFFFFFFFF8uLL);
    v13 = v11->m_ObjectSize == 0;
    _a3 = v11->m_DeviceObject.m_DeviceObject;
    if ( v13 )
      _a2 = 0LL;
    WPP_IFR_SF_qqLd(
      this->m_Globals,
      this->m_DevicePowerState,
      0xCu,
      0x1Du,
      WPP_PowerStateMachine_cpp_Traceguids,
      _a2,
      _a3,
      this->m_DevicePowerState,
      globals);
    if ( progress )
      return NonPageable != 0 ? 33638 : 869;
    else
      return NonPageable != 0 ? 33596 : 827;
  }
  else
  {
    FxPkgPnp::PowerPolicyProcessEvent(this, PwrPolPowerUpHwStarted, v8);
    return 873LL;
  }
}
