/*
 * XREFs of ?PowerStartSelfManagedIo@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1400435D0
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerSendPowerUpEvents@FxPkgPnp@@IEAAXXZ @ 0x140043690 (-PowerSendPowerUpEvents@FxPkgPnp@@IEAAXXZ.c)
 *     ?ResumeProcessingForPower@FxPkgIo@@QEAAJXZ @ 0x1400436CC (-ResumeProcessingForPower@FxPkgIo@@QEAAJXZ.c)
 *     ?ProcessEvent@FxSelfManagedIoMachine@@IEAAJW4FxSelfManagedIoEvents@@PEAW4FxCxCallbackProgress@@@Z @ 0x140043980 (-ProcessEvent@FxSelfManagedIoMachine@@IEAAJW4FxSelfManagedIoEvents@@PEAW4FxCxCallbackProgress@@@.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxPkgPnp::PowerStartSelfManagedIo(FxPkgPnp *This)
{
  FxSelfManagedIoMachine *m_SelfManagedIoMachine; // rcx
  FxDeviceBase *m_DeviceBase; // rcx
  __int64 v4; // rdx
  FxCxCallbackProgress progress; // [rsp+30h] [rbp+8h] BYREF

  FxPkgIo::ResumeProcessingForPower((FxPkgIo *)This->m_DeviceBase[3].m_ChildListHead.Blink);
  m_SelfManagedIoMachine = This->m_SelfManagedIoMachine;
  if ( m_SelfManagedIoMachine )
  {
    progress = FxCxCallbackProgressInitialized;
    if ( FxSelfManagedIoMachine::ProcessEvent(m_SelfManagedIoMachine, SelfManagedIoEventStart, &progress) < 0 )
      return (unsigned __int8)progress < FxCxCallbackProgressClientSucceeded ? 813 : 865;
  }
  m_DeviceBase = This->m_DeviceBase;
  This->m_DevicePowerStateOld = This->m_DevicePowerState;
  This->m_DevicePowerState = 1;
  This->m_SystemPowerAction = 0;
  PoSetPowerState(m_DeviceBase->m_DeviceObject.m_DeviceObject, DevicePowerState, (POWER_STATE)1);
  FxPkgPnp::PowerSendPowerUpEvents(This);
  LOBYTE(v4) = 1;
  This->PowerReleasePendingDeviceIrp(This, v4);
  return This->m_SharedPower.m_WaitWakeOwner != 0 ? 777 : 775;
}
