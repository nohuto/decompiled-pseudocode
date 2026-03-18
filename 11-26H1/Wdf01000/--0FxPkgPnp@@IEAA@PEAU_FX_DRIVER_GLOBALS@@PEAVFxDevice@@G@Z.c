/*
 * XREFs of ??0FxPkgPnp@@IEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@G@Z @ 0x14001C850
 * Callers:
 *     ??0FxPkgPdo@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@@Z @ 0x14001DED8 (--0FxPkgPdo@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@@Z.c)
 *     ??0FxPkgFdo@@AEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@@Z @ 0x14007B6C4 (--0FxPkgFdo@@AEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@@Z.c)
 * Callees:
 *     ?IsVerificationEnabled@_FX_DRIVER_GLOBALS@@QEAAEKKW4FxVerifierDownlevelOption@@@Z @ 0x140008960 (-IsVerificationEnabled@_FX_DRIVER_GLOBALS@@QEAAEKKW4FxVerifierDownlevelOption@@@Z.c)
 *     ??0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x14001A574 (--0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ??0FxWaitLockInternal@@QEAA@XZ @ 0x14001CD08 (--0FxWaitLockInternal@@QEAA@XZ.c)
 *     ??0FxPowerMachine@@QEAA@XZ @ 0x14001CD48 (--0FxPowerMachine@@QEAA@XZ.c)
 *     ??0FxPnpMachine@@QEAA@XZ @ 0x14001CDC0 (--0FxPnpMachine@@QEAA@XZ.c)
 *     ??0FxPowerPolicyMachine@@QEAA@XZ @ 0x14001CE24 (--0FxPowerPolicyMachine@@QEAA@XZ.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140025E70 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     memset @ 0x1400ACFC0 (memset.c)
 */

void __fastcall FxPkgPnp::FxPkgPnp(
        FxPkgPnp *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxDevice *Device,
        unsigned __int16 Type)
{
  unsigned int v7; // r8d
  unsigned int v8; // ecx
  int v9; // eax
  int v10; // edx
  unsigned int v11; // edx
  FxVerifierDownlevelOption v12; // r9d
  unsigned int Tag; // ecx
  void *v14; // rax
  _QWORD *v15; // rax
  FxPoolTypeOrPoolFlags v16; // [rsp+30h] [rbp-18h] BYREF
  void *retaddr; // [rsp+48h] [rbp+0h]

  FxNonPagedObject::FxNonPagedObject(this, (_FX_DRIVER_GLOBALS *)Type, 0, FxDriverGlobals);
  this->m_DeviceBase = Device;
  this->__vftable = (FxPkgPnp_vtbl *)FxPkgPnp::`vftable';
  FxWaitLockInternal::FxWaitLockInternal(&this->m_QueryInterfaceLock);
  FxWaitLockInternal::FxWaitLockInternal(&this->m_DeviceInterfaceLock);
  FxPnpMachine::FxPnpMachine(&this->m_PnpMachine);
  FxPowerMachine::FxPowerMachine(&this->m_PowerMachine);
  FxPowerPolicyMachine::FxPowerPolicyMachine(&this->m_PowerPolicyMachine);
  this->m_DeviceUsageNotification.m_Method = 0LL;
  this->m_DeviceUsageNotificationEx.m_Method = 0LL;
  v7 = 0;
  this->m_DeviceRelationsQuery.m_Method = 0LL;
  this->m_DeviceD0Entry.__vftable = (FxPnpDeviceD0Entry_vtbl *)FxPnpDeviceD0Entry::`vftable';
  this->m_DeviceD0Entry.m_Method = 0LL;
  this->m_DeviceD0EntryPostInterruptsEnabled.m_Method = 0LL;
  this->m_DeviceD0ExitPreInterruptsDisabled.m_Method = 0LL;
  this->m_DeviceD0Exit.__vftable = (FxPnpDeviceD0Exit_vtbl *)FxPnpDeviceD0Exit::`vftable';
  this->m_DeviceD0Exit.m_Method = 0LL;
  this->m_DeviceD0EntryPostHardwareEnabled.__vftable = (FxPnpDeviceD0EntryPostHwEnabled_vtbl *)FxPnpDeviceD0EntryPostHwEnabled::`vftable';
  this->m_DeviceD0ExitPreHardwareDisabled.__vftable = (FxPnpDeviceD0ExitPreHwDisabled_vtbl *)FxPnpDeviceD0ExitPreHwDisabled::`vftable';
  this->m_DevicePrepareHardware.__vftable = (FxPnpDevicePrepareHardware_vtbl *)FxPnpDevicePrepareHardware::`vftable';
  this->m_DevicePrepareHardware.m_Method = 0LL;
  this->m_DeviceReleaseHardware.__vftable = (FxPnpDeviceReleaseHardware_vtbl *)FxPnpDeviceReleaseHardware::`vftable';
  this->m_DeviceReleaseHardware.m_Method = 0LL;
  this->m_DeviceQueryStop.m_Method = 0LL;
  this->m_DeviceQueryRemove.m_Method = 0LL;
  this->m_DeviceSurpriseRemoval.__vftable = (FxPnpDeviceSurpriseRemoval_vtbl *)FxPnpDeviceSurpriseRemoval::`vftable';
  this->m_DeviceSurpriseRemoval.m_Method = 0LL;
  this->m_PnpCapsAddress = -1;
  this->m_PnpCapsUINumber = -1;
  this->m_PowerCaps.D1Latency = -1;
  this->m_PowerCaps.D2Latency = -1;
  this->m_PowerCaps.D3Latency = -1;
  v8 = 0;
  this->m_DmaEnablerList = 0LL;
  this->m_RemovalDeviceList = 0LL;
  this->m_UsageDependentDeviceList = 0LL;
  this->m_PnpState.Value = 10922;
  this->m_PnpCaps.Value = 174762;
  *(_DWORD *)&this->m_PowerCaps.Caps = 117770922;
  do
  {
    v9 = 5 << v8;
    v10 = ~(15 << v8);
    v8 += 4;
    v7 = v9 | v10 & v7;
  }
  while ( v8 < 0x1C );
  this->m_PowerCaps.States = v7;
  memset(&this->m_D3ColdInterface, 0, sizeof(this->m_D3ColdInterface));
  *(_DWORD *)this->m_SpecialSupport = 0;
  *(_WORD *)&this->m_SpecialSupport[4] = 0;
  this->m_SpecialSupport[6] = 0;
  *(_OWORD *)this->m_SpecialFileCount = 0LL;
  *(_QWORD *)&this->m_SpecialFileCount[4] = 0LL;
  *(_QWORD *)&this->m_SpecialFileCount[6] = 0LL;
  *(_DWORD *)&this->m_PowerThreadInterface.Interface.Size = 65576;
  this->m_PowerThreadInterface.Interface.InterfaceReference = FxPkgPnp::_PowerThreadInterfaceReference;
  this->m_PowerThreadInterface.Interface.InterfaceDereference = FxPkgPnp::_PowerThreadInterfaceDereference;
  this->m_PowerThreadInterface.PowerThreadEnqueue = FxPkgPnp::_PowerThreadEnqueue;
  this->m_PowerThreadInterface.Interface.Context = this;
  this->m_PowerThread = 0LL;
  *(_DWORD *)&this->m_SystemPowerAction = 0;
  this->m_PowerThreadInterfaceReferenceCount = 1;
  this->m_PowerThreadEvent = 0LL;
  *(_WORD *)&this->m_FailedAction = 0;
  this->m_PendingChildCount = 0;
  this->m_QueryInterfaceHead.Next = 0LL;
  this->m_DeviceInterfaceHead.Next = 0LL;
  this->m_DeviceInterfacesCanBeEnabled = 0;
  *(_DWORD *)&this->m_Failed = 84214016;
  this->m_PendingPnPIrp = 0LL;
  this->m_PendingSystemPowerIrp = 0LL;
  this->m_PendingDevicePowerIrp = 0LL;
  this->m_PnpStateCallbacks = 0LL;
  this->m_PowerStateCallbacks = 0LL;
  this->m_PowerPolicyStateCallbacks = 0LL;
  this->m_SelfManagedIoMachine = 0LL;
  this->m_StateMachineBreak = 0LL;
  if ( _FX_DRIVER_GLOBALS::IsVerificationEnabled(FxDriverGlobals, v11, 0xBu, v12) )
  {
    Tag = FxDriverGlobals->Tag;
    v14 = retaddr;
    *(_QWORD *)&v16.UsePoolType = 0LL;
    v16.u.PoolFlags = 64LL;
    if ( !FxDriverGlobals->FxPoolTrackingOn )
      v14 = 0LL;
    v15 = FxPoolAllocator(FxDriverGlobals, &FxDriverGlobals->FxPoolFrameworks, &v16, 0x1CuLL, Tag, v14);
    if ( v15 )
    {
      *(_OWORD *)v15 = 0LL;
      v15[2] = 0LL;
      *((_DWORD *)v15 + 6) = 0;
    }
    else
    {
      v15 = 0LL;
    }
    this->m_StateMachineBreak = (FxStateMachineBreak *)v15;
  }
  this->m_EnumInfo = 0LL;
  this->m_BusEnumRetries = 0;
  this->m_BusInformation.BusTypeGuid = 0LL;
  *(_QWORD *)&this->m_BusInformation.LegacyBusType = 0LL;
  this->m_Resources = 0LL;
  this->m_ResourcesRaw = 0LL;
  this->m_InterruptListHead.Blink = &this->m_InterruptListHead;
  this->m_InterruptListHead.Flink = &this->m_InterruptListHead;
  this->m_InterruptObjectCount = 0;
  *(_QWORD *)&this->m_WakeInterruptCount = 0LL;
  *(_DWORD *)&this->m_SystemWokenByWakeInterrupt = 0;
  this->m_SharedPower.m_WaitWakeIrp = 0LL;
  *(_WORD *)&this->m_SharedPower.m_WaitWakeOwner = 0;
  this->m_DeviceRemoveProcessed = 0LL;
  this->m_IoConnectInterruptEx = (int (__fastcall *)(_IO_CONNECT_INTERRUPT_PARAMETERS *))WPP_GLOBAL_WDF_Control.Reserved;
  this->m_IoDisconnectInterruptEx = (int (__fastcall *)(_IO_DISCONNECT_INTERRUPT_PARAMETERS *))*((_QWORD *)&WPP_GLOBAL_WDF_Control.Reserved
                                                                                               + 1);
  this->m_IoReportInterruptActive = (void (__fastcall *)(_IO_REPORT_INTERRUPT_ACTIVE_STATE_PARAMETERS *))unk_1400C8ED0;
  this->m_IoReportInterruptInactive = (void (__fastcall *)(_IO_REPORT_INTERRUPT_ACTIVE_STATE_PARAMETERS *))unk_1400C8ED8;
  this->m_ObjectFlags |= 0x800u;
  this->m_ReleaseHardwareAfterDescendantsOnFailure = 0;
  this->m_SleepStudy = 0LL;
  this->m_SleepStudyPowerRefIoCount = 0;
  this->m_SleepStudyTrackReferences = 1;
  this->m_CompanionTarget = 0LL;
  this->m_SetDeviceFailedAttemptRestartWorkItem = 0LL;
  this->m_CompanionTargetStatus = -1073741275;
}
