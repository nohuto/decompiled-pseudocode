/*
 * XREFs of ?PowerPolSleepingWakeWakeArrived@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1400757B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     ?PowerPolicyGetCurrentWakeReason@FxPkgPnp@@QEAAKXZ @ 0x140040588 (-PowerPolicyGetCurrentWakeReason@FxPkgPnp@@QEAAKXZ.c)
 *     ?IsPdo@FxDevice@@QEAAEXZ @ 0x1400417C0 (-IsPdo@FxDevice@@QEAAEXZ.c)
 *     ?InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@@Z @ 0x1400461DC (-InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@.c)
 *     ?PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z @ 0x1400464FC (-PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolSleepingWakeWakeArrived(FxPkgPnp *This)
{
  char CurrentWakeReason; // al
  FxDeviceBase *m_DeviceBase; // r8
  FxPowerDeviceArmWakeFromSx *p_m_DeviceArmWakeFromSx; // rcx
  unsigned __int16 m_ObjectSize; // dx
  WDFDEVICE__ *v6; // r8
  int _a2; // eax
  FxDevice *m_Device; // rcx
  unsigned __int16 *p_m_ObjectSize; // rdx
  const void *_a1; // rcx
  FxDeviceBase *v12; // rdx
  unsigned __int16 v13; // cx
  const void *v14; // rdx
  int v15; // eax
  FxCxCallbackProgress progress; // [rsp+50h] [rbp+8h] BYREF

  progress = FxCxCallbackProgressInitialized;
  CurrentWakeReason = FxPkgPnp::PowerPolicyGetCurrentWakeReason(This);
  m_DeviceBase = This->m_DeviceBase;
  p_m_DeviceArmWakeFromSx = &This->m_PowerPolicyMachine.m_Owner->m_DeviceArmWakeFromSx;
  m_ObjectSize = m_DeviceBase->m_ObjectSize;
  v6 = (WDFDEVICE__ *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !m_ObjectSize )
    v6 = 0LL;
  This->m_PowerPolicyMachine.m_Owner->m_DeviceArmWakeFromSx.m_Device = v6;
  p_m_DeviceArmWakeFromSx->m_DeviceWakeEnabled = CurrentWakeReason & 1;
  p_m_DeviceArmWakeFromSx->m_ChildrenArmedForWake = (CurrentWakeReason & 2) != 0;
  _a2 = FxPrePostCallback::InvokeStateful(p_m_DeviceArmWakeFromSx, &progress, FxCxCleanupAfterPreFailure);
  m_Device = This->m_Device;
  if ( _a2 >= 0 )
  {
    if ( !FxDevice::IsPdo(m_Device) || (v15 = This->PowerEnableWakeAtBusOverload(This), v15 >= 0) )
    {
      FxPkgPnp::PowerProcessEvent(This, 0x1000u, 0);
      return 1472LL;
    }
    v12 = This->m_DeviceBase;
    v13 = v12->m_ObjectSize;
    v14 = (const void *)((unsigned __int64)v12 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v13 )
      v14 = 0LL;
    WPP_IFR_SF_qd(This->m_Globals, 2u, 0xCu, 0x19u, WPP_PowerPolicyStateMachine_cpp_Traceguids, v14, v15);
    return 1298LL;
  }
  p_m_ObjectSize = &m_Device->m_ObjectSize;
  _a1 = (const void *)((unsigned __int64)m_Device ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( progress )
  {
    if ( !*p_m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qd(This->m_Globals, 2u, 0xCu, 0x18u, WPP_PowerPolicyStateMachine_cpp_Traceguids, _a1, _a2);
    return 1298LL;
  }
  if ( !*p_m_ObjectSize )
    _a1 = 0LL;
  WPP_IFR_SF_qd(This->m_Globals, 2u, 0xCu, 0x17u, WPP_PowerPolicyStateMachine_cpp_Traceguids, _a1, _a2);
  return 1468LL;
}
