/*
 * XREFs of ?CleanupStateMachines@FxPkgPnp@@QEAAXE@Z @ 0x14003915C
 * Callers:
 *     ?ProcessRemoveDeviceOverload@FxPkgFdo@@EEAAJPEAVFxIrp@@@Z @ 0x140039540 (-ProcessRemoveDeviceOverload@FxPkgFdo@@EEAAJPEAVFxIrp@@@Z.c)
 *     ?DeleteDeviceFromFailedCreateNoDelete@FxDevice@@AEAAJJE@Z @ 0x1400399C8 (-DeleteDeviceFromFailedCreateNoDelete@FxDevice@@AEAAJJE@Z.c)
 *     ?ProcessRemoveDeviceOverload@FxPkgPdo@@EEAAJPEAVFxIrp@@@Z @ 0x14007E080 (-ProcessRemoveDeviceOverload@FxPkgPdo@@EEAAJPEAVFxIrp@@@Z.c)
 *     ?ProcessDelayedDeletion@FxPkgPnp@@QEAAXXZ @ 0x1400A6DB8 (-ProcessDelayedDeletion@FxPkgPnp@@QEAAXXZ.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x14000642C (WPP_IFR_SF_qq.c)
 *     ?EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ @ 0x140007B28 (-EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ.c)
 *     ?SetFinished@FxEventQueue@@QEAAEPEAUFxCREvent@@@Z @ 0x1400393F0 (-SetFinished@FxEventQueue@@QEAAEPEAUFxCREvent@@@Z.c)
 *     ?ReleasePowerThread@FxPkgPnp@@AEAAXXZ @ 0x140039488 (-ReleasePowerThread@FxPkgPnp@@AEAAXXZ.c)
 *     ?CleanupPowerCallback@FxPowerPolicyOwnerSettings@@QEAAXXZ @ 0x14003C48C (-CleanupPowerCallback@FxPowerPolicyOwnerSettings@@QEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall FxPkgPnp::CleanupStateMachines(FxPkgPnp *this, unsigned __int8 CleanupPnp)
{
  FxDevicePwrRequirementMachine *m_DevicePowerRequirementMachine; // rcx
  FxDeviceBase *m_DeviceBase; // rcx
  const void *_a1; // rdx
  FxDeviceBase *v7; // rdx
  const void *v8; // rcx
  FxDeviceBase *v9; // rcx
  const void *v10; // rdx
  FxDeviceBase *v11; // rcx
  const void *v12; // r10
  FxCREvent eventOnStack; // [rsp+40h] [rbp-20h] BYREF

  eventOnStack.m_Event.m_DbgFlagIsInitialized = 0;
  KeInitializeEvent(&eventOnStack.m_Event.m_Event, SynchronizationEvent, 0);
  eventOnStack.m_Event.m_DbgFlagIsInitialized = 1;
  KeInitializeEvent(&eventOnStack.m_Event.m_Event, SynchronizationEvent, 0);
  eventOnStack.m_Event.m_DbgFlagIsInitialized = 1;
  if ( CleanupPnp && !FxEventQueue::SetFinished(&this->m_PnpMachine, &eventOnStack) )
  {
    m_DeviceBase = this->m_DeviceBase;
    _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_DeviceBase->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qq(
      this->m_Globals,
      4u,
      0xCu,
      0x26u,
      WPP_FxPkgPnp_cpp_Traceguids,
      _a1,
      m_DeviceBase->m_DeviceObject.m_DeviceObject);
    FxCREvent::EnterCRAndWaitAndLeave(&eventOnStack);
  }
  KeClearEvent(&eventOnStack.m_Event.m_Event);
  if ( !FxEventQueue::SetFinished(&this->m_PowerPolicyMachine, &eventOnStack) )
  {
    v7 = this->m_DeviceBase;
    v8 = (const void *)((unsigned __int64)v7 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v7->m_ObjectSize )
      v8 = 0LL;
    WPP_IFR_SF_qq(this->m_Globals, 4u, 0xCu, 0x27u, WPP_FxPkgPnp_cpp_Traceguids, v8, v7->m_DeviceObject.m_DeviceObject);
    FxCREvent::EnterCRAndWaitAndLeave(&eventOnStack);
  }
  KeClearEvent(&eventOnStack.m_Event.m_Event);
  if ( !FxEventQueue::SetFinished(&this->m_PowerMachine, &eventOnStack) )
  {
    v9 = this->m_DeviceBase;
    v10 = (const void *)((unsigned __int64)v9 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v9->m_ObjectSize )
      v10 = 0LL;
    WPP_IFR_SF_qq(this->m_Globals, 4u, 0xCu, 0x28u, WPP_FxPkgPnp_cpp_Traceguids, v10, v9->m_DeviceObject.m_DeviceObject);
    FxCREvent::EnterCRAndWaitAndLeave(&eventOnStack);
  }
  if ( this->m_PowerPolicyMachine.m_Owner )
  {
    KeClearEvent(&eventOnStack.m_Event.m_Event);
    m_DevicePowerRequirementMachine = this->m_PowerPolicyMachine.m_Owner->m_PoxInterface.m_DevicePowerRequirementMachine;
    if ( m_DevicePowerRequirementMachine && !FxEventQueue::SetFinished(m_DevicePowerRequirementMachine, &eventOnStack) )
    {
      v11 = this->m_DeviceBase;
      v12 = (const void *)((unsigned __int64)v11 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v11->m_ObjectSize )
        v12 = 0LL;
      WPP_IFR_SF_qq(
        this->m_Globals,
        4u,
        0xCu,
        0x29u,
        WPP_FxPkgPnp_cpp_Traceguids,
        v12,
        v11->m_DeviceObject.m_DeviceObject);
      FxCREvent::EnterCRAndWaitAndLeave(&eventOnStack);
    }
    FxPowerPolicyOwnerSettings::CleanupPowerCallback(this->m_PowerPolicyMachine.m_Owner);
  }
  FxPkgPnp::ReleasePowerThread(this);
  this->ReleaseReenumerationInterface(this);
}
