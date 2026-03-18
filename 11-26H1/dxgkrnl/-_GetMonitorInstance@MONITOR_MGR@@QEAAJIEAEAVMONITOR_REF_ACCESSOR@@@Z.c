/*
 * XREFs of ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z @ 0x1402CBB30
 * Callers:
 *     ?AcquireMonitorExclusive@MONITOR_MGR@@SA?AVMONITOR_REF_LOCK_ACCESSOR@@PEAXI_N@Z @ 0x1400353BC (-AcquireMonitorExclusive@MONITOR_MGR@@SA-AVMONITOR_REF_LOCK_ACCESSOR@@PEAXI_N@Z.c)
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAXI_N@Z @ 0x140035738 (-AcquireMonitorShared@MONITOR_MGR@@SA-AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAXI_N@Z.c)
 *     DpiPdoDispatchIoctl @ 0x1402560E0 (DpiPdoDispatchIoctl.c)
 *     ?MonitorCreatePhysicalMonitor@@YAJPEAXIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_CONNECTION_USB4_INFO@@PEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14026DD30 (-MonitorCreatePhysicalMonitor@@YAJPEAXIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_CONNECTION_USB4_INFO@@PEA.c)
 *     ?GetMonitorDescriptor@DXGK_MONITOR_INTERFACE_V3_IMPL@@KAJQEAXIPEAU_DXGK_MONITOR_DESCRIPTOR@@@Z @ 0x140272160 (-GetMonitorDescriptor@DXGK_MONITOR_INTERFACE_V3_IMPL@@KAJQEAXIPEAU_DXGK_MONITOR_DESCRIPTOR@@@Z.c)
 *     ?ReleaseAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEBU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x140272ED0 (-ReleaseAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEBU_DXGK_TARGETMODE_DETAIL_TIM.c)
 *     ?_HandleMonitorPnPNotification@MONITOR_MGR@@SAJPEAX0@Z @ 0x140274780 (-_HandleMonitorPnPNotification@MONITOR_MGR@@SAJPEAX0@Z.c)
 *     ?_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140274CF8 (-_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_MigrateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@AEBVMONITOR_REF_ACCESSOR@@AEAV3@@Z @ 0x140275070 (-_MigrateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@AEBVMONITOR_REF_ACCESSOR.c)
 *     ?_QuerySkippedRemovalState@MONITOR_MGR@@QEAAJIPEAE@Z @ 0x140275674 (-_QuerySkippedRemovalState@MONITOR_MGR@@QEAAJIPEAE@Z.c)
 *     ?_PnPTargetDeviceChangeNotification@DXGMONITOR@@CAJPEAX0@Z @ 0x140276540 (-_PnPTargetDeviceChangeNotification@DXGMONITOR@@CAJPEAX0@Z.c)
 *     DxgkGetAdapterDeviceDesc @ 0x1402AD2E0 (DxgkGetAdapterDeviceDesc.c)
 *     ?SetPointerPositionForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEAVSESSION_VIEW@@PEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z @ 0x1402C7ED4 (-SetPointerPositionForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEAVSESSION_VIEW@@PEBU_DXGKARG_SETPO.c)
 *     ?MonitorIsMonitorVirtualModeDisabled@@YAJPEAXIPEAE@Z @ 0x1402CA15C (-MonitorIsMonitorVirtualModeDisabled@@YAJPEAXIPEAE@Z.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1402CA65C (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     IsVirtualizationDisabledForTarget @ 0x1402CACB0 (IsVirtualizationDisabledForTarget.c)
 *     ?AddingMonitorOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W42@I@Z @ 0x1402CAFA0 (-AddingMonitorOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W42@I@Z.c)
 *     ?MonitorGetMonitorOrientationsFromTarget@@YAJPEAXIPEAK1@Z @ 0x1402CC298 (-MonitorGetMonitorOrientationsFromTarget@@YAJPEAXIPEAK1@Z.c)
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N55@Z @ 0x1402CC94C (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
 *     ?GetSdrWhiteLevel@@YAJIPEAVADAPTER_DISPLAY@@AEAI@Z @ 0x1403003A0 (-GetSdrWhiteLevel@@YAJIPEAVADAPTER_DISPLAY@@AEAI@Z.c)
 *     ?PopulateHDRMetadataFromDisplay@@YAJIPEAVADAPTER_DISPLAY@@PEAU_D3DDDI_HDR_METADATA_HDR10@@PEAW4_D3DDDI_HDR_METADATA_TYPE@@@Z @ 0x140300640 (-PopulateHDRMetadataFromDisplay@@YAJIPEAVADAPTER_DISPLAY@@PEAU_D3DDDI_HDR_METADATA_HDR10@@PEAW4_.c)
 *     ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_CONNECTION_USB4_INFO@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14031DBE4 (-_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_CONNECTION_USB4.c)
 *     ?DxgkGetMonitorDescriptor@@YAJU_LUID@@IEIPEAIPEAE@Z @ 0x14031E890 (-DxgkGetMonitorDescriptor@@YAJU_LUID@@IEIPEAIPEAE@Z.c)
 *     ?CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x14031F060 (-CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     DxgkGetAllMonitorDevicesFromSessionView @ 0x14033F860 (DxgkGetAllMonitorDevicesFromSessionView.c)
 *     ?_GetMonitorInformationForTargets@MONITOR_MGR@@QEAAJP6AJPEAX0IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@Z @ 0x1403403F8 (-_GetMonitorInformationForTargets@MONITOR_MGR@@QEAAJP6AJPEAX0IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@.c)
 *     ?GetAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x14038CC00 (-GetAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_.c)
 *     ?MonitorNotifyDXGIGammaRampChange@@YAJPEAXI@Z @ 0x1403AA994 (-MonitorNotifyDXGIGammaRampChange@@YAJPEAXI@Z.c)
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@AEBVMONITOR_REF_ACCESSOR@@AEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403DFB64 (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@AEBVMONITOR_REF_ACC.c)
 *     ?_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEAEAVMONITOR_REF_ACCESSOR@@PEAU_DXGK_CONNECTION_USB4_INFO@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403E0E00 (-_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEAEAVMONITOR_REF_ACCESSOR@@PEAU_.c)
 *     ?MonitorNotifyDeviceNodeReady@@YAJPEAXIPEAU_DEVICE_OBJECT@@@Z @ 0x1403E17AC (-MonitorNotifyDeviceNodeReady@@YAJPEAXIPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403E8508 (-_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_CancelSkippedDepartures@MONITOR_MGR@@QEAAJI@Z @ 0x1403EEFB8 (-_CancelSkippedDepartures@MONITOR_MGR@@QEAAJI@Z.c)
 *     ?MonitorIsMonitorConnected@@YAJPEAXIEPEAE@Z @ 0x1403F1AB0 (-MonitorIsMonitorConnected@@YAJPEAXIEPEAE@Z.c)
 *     ?IsTargetEmergencySimulatedMonitor@@YAJPEAXIPEAE@Z @ 0x140400D58 (-IsTargetEmergencySimulatedMonitor@@YAJPEAXIPEAE@Z.c)
 *     ?_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIAEBVMONITOR_REF_ACCESSOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14042F0EC (-_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIAEBVMONITOR_REF_ACCESSOR@@0PEAU_DXGK_DISPLAY_SCENA.c)
 *     DpiPdoDispatchInternalIoctl @ 0x140442E60 (DpiPdoDispatchInternalIoctl.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ @ 0x1402CC034 (-AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402CC050 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 */

__int64 __fastcall MONITOR_MGR::_GetMonitorInstance(
        MONITOR_MGR *this,
        unsigned int a2,
        char a3,
        struct MONITOR_REF_ACCESSOR *a4)
{
  __int64 v4; // rbp
  __int64 v8; // rcx
  MONITOR_MGR *v9; // rax
  char *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  bool v14; // zf
  void *v16; // [rsp+50h] [rbp-38h] BYREF
  char *v17; // [rsp+58h] [rbp-30h]
  void *retaddr; // [rsp+88h] [rbp+0h]

  v4 = a2;
  if ( a2 == -1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2703;
  }
  v16 = retaddr;
  v17 = 0LL;
  MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v16);
  if ( this == (MONITOR_MGR *)-104LL )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 108;
  }
  KeEnterCriticalRegion();
  if ( *((struct _KTHREAD **)this + 16) == KeGetCurrentThread() )
  {
    if ( *((int *)this + 34) <= 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 504;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 504LL, 0LL, 0LL, 0LL, 0LL);
    }
    ++*((_DWORD *)this + 34);
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)this + 112, 0LL) )
    {
      if ( bTracingEnabled && *((_DWORD *)this + 35) != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v8, (__int64)"g");
      _InterlockedIncrement64((volatile signed __int64 *)this + 15);
      ExAcquirePushLockExclusiveEx((char *)this + 112, 0LL);
    }
    if ( *((_QWORD *)this + 16) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 530;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NULL == m_OwningThread", 530LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( *((_DWORD *)this + 34) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 531;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"0 == m_OwnerAcquireCount", 531LL, 0LL, 0LL, 0LL, 0LL);
    }
    *((_QWORD *)this + 16) = KeGetCurrentThread();
    *((_DWORD *)this + 34) = 1;
  }
  v9 = (MONITOR_MGR *)*((_QWORD *)this + 5);
  if ( v9 == (MONITOR_MGR *)((char *)this + 40) )
  {
    v10 = 0LL;
    goto LABEL_20;
  }
LABEL_18:
  v10 = (char *)v9 - 152;
  if ( !v9 )
    v10 = 0LL;
  while ( 1 )
  {
LABEL_20:
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v16);
    v17 = v10;
    MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v16);
    if ( !v10 )
      goto LABEL_26;
    if ( *((_DWORD *)v10 + 45) == (_DWORD)v4 )
      break;
    v9 = (MONITOR_MGR *)*((_QWORD *)v10 + 19);
    if ( v9 != (MONITOR_MGR *)((char *)this + 40) )
      goto LABEL_18;
    v10 = 0LL;
  }
  if ( a3 && *((_DWORD *)v10 + 70) != 1 )
  {
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v16);
    v10 = (char *)*((_QWORD *)v10 + 37);
    v16 = retaddr;
    v17 = v10;
    MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v16);
  }
  if ( !v10 )
  {
LABEL_26:
    v13 = WdLogNewEntry5_WdTrace(v12, v11);
    *(_QWORD *)(v13 + 24) = v4;
    *(_QWORD *)(v13 + 32) = this;
    WdLogGlobalForLineNumber = 2734;
    if ( *((struct _KTHREAD **)this + 16) != KeGetCurrentThread() )
    {
      WdLogSingleEntry5(0LL, 275LL, 4LL, (char *)this + 104, 0LL, 0LL);
      WdLogGlobalForLineNumber = 553;
    }
    if ( *((int *)this + 34) <= 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 556;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 556LL, 0LL, 0LL, 0LL, 0LL);
    }
    v14 = (*((_DWORD *)this + 34))-- == 1;
    if ( v14 )
    {
      *((_QWORD *)this + 16) = 0LL;
      ExReleasePushLockExclusiveEx((char *)this + 112, 0LL);
    }
    KeLeaveCriticalRegion();
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v16);
    return 3221226021LL;
  }
  MONITOR_REF_ACCESSOR::Release(a4);
  *((_QWORD *)a4 + 1) = v10;
  MONITOR_REF_ACCESSOR::AddReference(a4);
  if ( *((struct _KTHREAD **)this + 16) != KeGetCurrentThread() )
  {
    WdLogSingleEntry5(0LL, 275LL, 4LL, (char *)this + 104, 0LL, 0LL);
    WdLogGlobalForLineNumber = 553;
  }
  if ( *((int *)this + 34) <= 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 556;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 556LL, 0LL, 0LL, 0LL, 0LL);
  }
  v14 = (*((_DWORD *)this + 34))-- == 1;
  if ( v14 )
  {
    *((_QWORD *)this + 16) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 112, 0LL);
  }
  KeLeaveCriticalRegion();
  MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v16);
  return 0LL;
}
