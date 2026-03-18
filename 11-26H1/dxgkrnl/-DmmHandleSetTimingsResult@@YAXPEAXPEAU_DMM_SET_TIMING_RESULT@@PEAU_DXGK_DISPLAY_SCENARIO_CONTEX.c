/*
 * XREFs of ?DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1402D4AF8
 * Callers:
 *     ?_HandlePowerOnInternal@USB4_POWERON_WORK_QUEUE@@QEAAXPEAUUSB4_POWERON_WORK_CONTEXT@@@Z @ 0x140278EC8 (-_HandlePowerOnInternal@USB4_POWERON_WORK_QUEUE@@QEAAXPEAUUSB4_POWERON_WORK_CONTEXT@@@Z.c)
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1402D2DA8 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 *     ?DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1402D3CBC (-DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCEN.c)
 *     ?PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIW4MONITOR_EVENT@@W4MONITOR_POWER_EVENT_PARAM@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1402D4150 (-PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIW4MONITOR_EVENT@@W4MONITOR_POWER_EVENT_PARAM@@PEAU_DXGK_.c)
 *     ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140366154 (-ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x140031B50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DpIndicateConnectorChange @ 0x1400566C0 (DpIndicateConnectorChange.c)
 *     Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline @ 0x14005AA24 (Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline.c)
 *     ?OnPathFailedOrInvalidate@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401A3BC0 (-OnPathFailedOrInvalidate@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402C6C90 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?DriverSupportSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x14037AAC0 (-DriverSupportSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14042C10C (-RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_D.c)
 */

void __fastcall DmmHandleSetTimingsResult(DXGADAPTER ***this, struct _DMM_SET_TIMING_RESULT *a2, GUID *a3)
{
  int v6; // eax
  DXGGLOBAL *Global; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  struct DXGSESSIONDATA *SessionData; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  struct _DEVICE_OBJECT *v16; // rdx
  struct _DEVICE_OBJECT *v17; // rcx

  if ( !DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4362;
  }
  if ( *((_DWORD *)this + 50) == 1 && !*((_BYTE *)this + 3057) )
  {
    if ( (*(_BYTE *)a2 & 2) != 0 )
    {
      if ( (unsigned int)Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline() )
      {
        v6 = ADAPTER_DISPLAY::OnPathFailedOrInvalidate(this[395], (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)a3);
        if ( v6 < 0 )
        {
          WdLogSingleEntry2(2LL, this, v6);
          WdLogGlobalForLineNumber = 4388;
        }
      }
      else
      {
        Global = DXGGLOBAL::GetGlobal();
        SessionData = DXGGLOBAL::GetSessionData(Global, v8, v9, v10);
        if ( SessionData && *((_BYTE *)SessionData + 18499) )
        {
          PsGetCurrentProcessSessionId(v13, v12, v14, v15);
          if ( !a3 )
            a3 = &GUID_NULL;
          if ( (int)ZwUpdateWnfStateData(&WNF_DXGK_PATH_FAILED_OR_INVALIDATED, a3, 16LL) < 0 )
          {
            WdLogSingleEntry1(2LL);
            WdLogGlobalForLineNumber = 4412;
          }
        }
        else if ( ADAPTER_DISPLAY::RequestAsyncDisplaySwitchCallout(
                    (ADAPTER_DISPLAY *)this[395],
                    0LL,
                    (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)a3) < 0 )
        {
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 4400;
        }
      }
    }
    if ( (*(_BYTE *)a2 & 1) != 0 )
    {
      if ( DXGADAPTER::DriverSupportSetTimingsFromVidPn((DXGADAPTER *)this) )
      {
        DpIndicateConnectorChange(v16);
      }
      else
      {
        v17 = (struct _DEVICE_OBJECT *)*((_QWORD *)v16->DeviceExtension + 19);
        if ( v17 )
          IoInvalidateDeviceRelations(v17, BusRelations);
      }
    }
  }
}
