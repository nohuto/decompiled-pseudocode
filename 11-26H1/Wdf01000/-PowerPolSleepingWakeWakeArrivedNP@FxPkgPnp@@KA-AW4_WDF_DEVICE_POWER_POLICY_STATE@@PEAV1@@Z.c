/*
 * XREFs of ?PowerPolSleepingWakeWakeArrivedNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1400A8C00
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

__int64 __fastcall FxPkgPnp::PowerPolSleepingWakeWakeArrivedNP(FxPkgPnp *This)
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
  int v12; // eax
  FxDeviceBase *v13; // rdx
  unsigned __int16 v14; // cx
  const void *v15; // rdx
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
    if ( !FxDevice::IsPdo(m_Device) || (v12 = This->PowerEnableWakeAtBusOverload(This), v12 >= 0) )
    {
      FxPkgPnp::PowerProcessEvent(This, 0x1000u, 0);
      return 1472LL;
    }
    v13 = This->m_DeviceBase;
    v14 = v13->m_ObjectSize;
    v15 = (const void *)((unsigned __int64)v13 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v14 )
      v15 = 0LL;
    WPP_IFR_SF_qd(This->m_Globals, 2u, 0xCu, 0x1Du, WPP_PowerPolicyStateMachine_cpp_Traceguids, v15, v12);
    return 34075LL;
  }
  p_m_ObjectSize = &m_Device->m_ObjectSize;
  _a1 = (const void *)((unsigned __int64)m_Device ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( progress )
  {
    if ( !*p_m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qd(This->m_Globals, 2u, 0xCu, 0x1Cu, WPP_PowerPolicyStateMachine_cpp_Traceguids, _a1, _a2);
    return 34075LL;
  }
  if ( !*p_m_ObjectSize )
    _a1 = 0LL;
  WPP_IFR_SF_qd(This->m_Globals, 2u, 0xCu, 0x1Bu, WPP_PowerPolicyStateMachine_cpp_Traceguids, _a1, _a2);
  return 34237LL;
}
