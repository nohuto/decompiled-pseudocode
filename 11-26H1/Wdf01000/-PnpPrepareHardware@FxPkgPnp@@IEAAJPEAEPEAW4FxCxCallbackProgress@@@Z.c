/*
 * XREFs of ?PnpPrepareHardware@FxPkgPnp@@IEAAJPEAEPEAW4FxCxCallbackProgress@@@Z @ 0x1400397FC
 * Callers:
 *     ?PnpEventHardwareAvailable@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x140039710 (-PnpEventHardwareAvailable@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventRestartHardwareAvailable@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1400A4140 (-PnpEventRestartHardwareAvailable@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventStartingFromStopped@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1400A4240 (-PnpEventStartingFromStopped@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?IsVerificationEnabled@_FX_DRIVER_GLOBALS@@QEAAEKKW4FxVerifierDownlevelOption@@@Z @ 0x140008960 (-IsVerificationEnabled@_FX_DRIVER_GLOBALS@@QEAAEKKW4FxVerifierDownlevelOption@@@Z.c)
 *     ?SetCallbackFlags@FxDevice@@QEAAXE@Z @ 0x140038D64 (-SetCallbackFlags@FxDevice@@QEAAXE@Z.c)
 *     ?PnpAssignInterruptsSyncIrql@FxPkgPnp@@IEAAXXZ @ 0x140038DC4 (-PnpAssignInterruptsSyncIrql@FxPkgPnp@@IEAAXXZ.c)
 *     ?ClearCallbackFlags@FxDevice@@QEAAXE@Z @ 0x140038E78 (-ClearCallbackFlags@FxDevice@@QEAAXE@Z.c)
 *     ?PnpMatchResources@FxPkgPnp@@IEAAJXZ @ 0x14003A9E4 (-PnpMatchResources@FxPkgPnp@@IEAAJXZ.c)
 *     ?InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@@Z @ 0x1400461DC (-InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@.c)
 *     WPP_IFR_SF_ @ 0x14004B128 (WPP_IFR_SF_.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083568 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?SetInternalFailure@FxPkgPnp@@IEAAXXZ @ 0x140084630 (-SetInternalFailure@FxPkgPnp@@IEAAXXZ.c)
 */

__int64 __fastcall FxPkgPnp::PnpPrepareHardware(
        FxPkgPnp *this,
        unsigned __int8 *ResourcesMatched,
        FxCxCallbackProgress *Progress)
{
  unsigned int v3; // eax
  unsigned __int8 v7; // dl
  int matched; // ebx
  unsigned __int8 v9; // r8
  FxDevice *m_Device; // rcx
  FxDeviceBase *m_DeviceBase; // rcx
  FxCmResList *m_ResourcesRaw; // r9
  FxCmResList *m_Resources; // r11
  unsigned __int16 m_ObjectSize; // ax
  WDFDEVICE__ *v16; // rcx
  unsigned __int16 v17; // dx
  unsigned __int16 v18; // r10
  WDFCMRESLIST__ *v19; // r9
  WDFCMRESLIST__ *v20; // r11
  unsigned __int8 v21; // dl
  unsigned __int8 v22; // r8
  unsigned int v23; // edx
  FxVerifierDownlevelOption v24; // r9d
  _FX_DRIVER_GLOBALS *v25; // rcx

  v3 = this->m_PnpState.Value & 0xFFFFFAEF;
  *ResourcesMatched = 0;
  *Progress = FxCxCallbackProgressInitialized;
  this->m_PnpState.Value = v3 | 0xA20;
  matched = FxPkgPnp::PnpMatchResources(this);
  if ( matched >= 0 )
  {
    m_Device = this->m_Device;
    *ResourcesMatched = 1;
    FxDevice::SetCallbackFlags(m_Device, v7, v9);
    m_DeviceBase = this->m_DeviceBase;
    m_ResourcesRaw = this->m_ResourcesRaw;
    m_Resources = this->m_Resources;
    m_ObjectSize = m_DeviceBase->m_ObjectSize;
    v16 = (WDFDEVICE__ *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    v17 = m_ResourcesRaw->m_ObjectSize;
    v18 = m_Resources->m_ObjectSize;
    if ( !m_ObjectSize )
      v16 = 0LL;
    v19 = (WDFCMRESLIST__ *)((unsigned __int64)m_ResourcesRaw ^ 0xFFFFFFFFFFFFFFF8uLL);
    this->m_DevicePrepareHardware.m_Device = v16;
    if ( !v17 )
      v19 = 0LL;
    v20 = (WDFCMRESLIST__ *)((unsigned __int64)m_Resources ^ 0xFFFFFFFFFFFFFFF8uLL);
    this->m_DevicePrepareHardware.m_ResourcesRaw = v19;
    if ( !v18 )
      v20 = 0LL;
    this->m_DevicePrepareHardware.m_ResourcesTranslated = v20;
    matched = FxPrePostCallback::InvokeStateful(&this->m_DevicePrepareHardware, Progress, FxCxCleanupAfterPreFailure);
    FxDevice::ClearCallbackFlags(this->m_Device, v21, v22);
    if ( matched < 0 )
    {
      if ( matched == -1073741637 )
      {
        WPP_IFR_SF_(this->m_Globals, 2u, 0xCu, 0x1Au, WPP_PnpStateMachine_cpp_Traceguids);
        if ( _FX_DRIVER_GLOBALS::IsVerificationEnabled(this->m_Globals, v23, 0xBu, v24) )
          FxVerifierDbgBreakPoint(v25);
      }
      FxPkgPnp::SetInternalFailure(this);
      this->m_PendingPnPIrp->IoStatus.Status = matched;
    }
    else
    {
      FxPkgPnp::PnpAssignInterruptsSyncIrql(this);
      return 0;
    }
  }
  else
  {
    *ResourcesMatched = 0;
    FxPkgPnp::SetInternalFailure(this);
    this->m_PendingPnPIrp->IoStatus.Status = matched;
  }
  return (unsigned int)matched;
}
