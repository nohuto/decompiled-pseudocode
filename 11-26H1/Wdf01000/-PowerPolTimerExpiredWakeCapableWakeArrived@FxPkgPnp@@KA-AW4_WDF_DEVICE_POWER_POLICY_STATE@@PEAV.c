/*
 * XREFs of ?PowerPolTimerExpiredWakeCapableWakeArrived@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1400411F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     ?IsPdo@FxDevice@@QEAAEXZ @ 0x1400417C0 (-IsPdo@FxDevice@@QEAAEXZ.c)
 *     ?InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@@Z @ 0x1400461DC (-InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@.c)
 *     ?PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z @ 0x1400464FC (-PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolTimerExpiredWakeCapableWakeArrived(FxPkgPnp *This)
{
  FxPowerDeviceArmWakeFromS0 *p_m_DeviceArmWakeFromS0; // rcx
  FxDeviceBase *m_DeviceBase; // rdx
  unsigned __int16 m_ObjectSize; // ax
  unsigned __int64 v5; // rdx
  int _a2; // eax
  FxDevice *m_Device; // rcx
  unsigned __int16 *p_m_ObjectSize; // rdx
  const void *_a1; // rcx
  FxDeviceBase *v11; // rdx
  unsigned __int16 v12; // cx
  const void *v13; // rdx
  int v14; // eax
  FxCxCallbackProgress progress; // [rsp+50h] [rbp+8h] BYREF

  p_m_DeviceArmWakeFromS0 = &This->m_PowerPolicyMachine.m_Owner->m_DeviceArmWakeFromS0;
  progress = FxCxCallbackProgressInitialized;
  m_DeviceBase = This->m_DeviceBase;
  m_ObjectSize = m_DeviceBase->m_ObjectSize;
  v5 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
  if ( !m_ObjectSize )
    v5 = 0LL;
  p_m_DeviceArmWakeFromS0->m_Device = (WDFDEVICE__ *)v5;
  _a2 = FxPrePostCallback::InvokeStateful(p_m_DeviceArmWakeFromS0, &progress, FxCxCleanupAfterPreOrClientFailure);
  m_Device = This->m_Device;
  if ( _a2 >= 0 )
  {
    if ( !FxDevice::IsPdo(m_Device) || (v14 = This->PowerEnableWakeAtBusOverload(This), v14 >= 0) )
    {
      FxPkgPnp::PowerProcessEvent(This, PowerCompleteDx, 0);
      return 1472LL;
    }
    v11 = This->m_DeviceBase;
    v12 = v11->m_ObjectSize;
    v13 = (const void *)((unsigned __int64)v11 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v12 )
      v13 = 0LL;
    WPP_IFR_SF_qd(This->m_Globals, 2u, 0xCu, 0x24u, WPP_PowerPolicyStateMachine_cpp_Traceguids, v13, v14);
    return 1335LL;
  }
  p_m_ObjectSize = &m_Device->m_ObjectSize;
  _a1 = (const void *)((unsigned __int64)m_Device ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( progress != FxCxCallbackProgressClientSucceeded )
  {
    if ( !*p_m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qd(This->m_Globals, 2u, 0xCu, 0x23u, WPP_PowerPolicyStateMachine_cpp_Traceguids, _a1, _a2);
    return 1335LL;
  }
  if ( !*p_m_ObjectSize )
    _a1 = 0LL;
  WPP_IFR_SF_qd(This->m_Globals, 2u, 0xCu, 0x22u, WPP_PowerPolicyStateMachine_cpp_Traceguids, _a1, _a2);
  return 1467LL;
}
