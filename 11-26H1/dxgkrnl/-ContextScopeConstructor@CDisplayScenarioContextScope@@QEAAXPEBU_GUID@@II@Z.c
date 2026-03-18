/*
 * XREFs of ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x14003BC9C
 * Callers:
 *     DxgkQueryConnectionChanges @ 0x140015450 (DxgkQueryConnectionChanges.c)
 *     ??0CDisplayScenarioContextScope@@QEAA@AEAVCDisplayScenarioContextCarrier@@@Z @ 0x14003BC64 (--0CDisplayScenarioContextScope@@QEAA@AEAVCDisplayScenarioContextCarrier@@@Z.c)
 *     ?SwitchCanceled@DISPLAY_MUX_SWTICH_DDI_TRACKING@@QEAAX_N@Z @ 0x14008F734 (-SwitchCanceled@DISPLAY_MUX_SWTICH_DDI_TRACKING@@QEAAX_N@Z.c)
 *     ?MonitorSetAppOverride@@YAJPEAUHDXGMONITOR__@@U_GUID@@1I_K_NPEBU_UNICODE_STRING@@@Z @ 0x140194F34 (-MonitorSetAppOverride@@YAJPEAUHDXGMONITOR__@@U_GUID@@1I_K_NPEBU_UNICODE_STRING@@@Z.c)
 *     ??1DXGADAPTER@@QEAA@XZ @ 0x140196D84 (--1DXGADAPTER@@QEAA@XZ.c)
 *     ?DisconnectFromDisplayAdapters@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTER@@PEAPEAV2@@Z @ 0x1401A6D40 (-DisconnectFromDisplayAdapters@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTER@@PEAPEAV2@@Z.c)
 *     ?DisconnectFromDisplayAdaptersWorkItem@@YAXPEAX0PEAU_IO_WORKITEM@@@Z @ 0x1401A7130 (-DisconnectFromDisplayAdaptersWorkItem@@YAXPEAX0PEAU_IO_WORKITEM@@@Z.c)
 *     ?DisableDWMVirtualModeOnVidPnSource@@YAJII@Z @ 0x1401C2094 (-DisableDWMVirtualModeOnVidPnSource@@YAJII@Z.c)
 *     ?DxgkRequestDisplayRecoveryToBroker@@YAJXZ @ 0x1401C74F4 (-DxgkRequestDisplayRecoveryToBroker@@YAJXZ.c)
 *     ?DxgkSendDisplayDiagnosticsToBroker@@YAJIPEAU_DXGK_DIAG_BLACK_SCREEN_PACKET2@@PEA_N@Z @ 0x1401C7600 (-DxgkSendDisplayDiagnosticsToBroker@@YAJIPEAU_DXGK_DIAG_BLACK_SCREEN_PACKET2@@PEA_N@Z.c)
 *     DxgkIddHandleSetDisplayConfig @ 0x1401C7910 (DxgkIddHandleSetDisplayConfig.c)
 *     DxgkHandleForceProjectionMonitor @ 0x1401CFE80 (DxgkHandleForceProjectionMonitor.c)
 *     DxgkInvalidateActiveVidPn @ 0x1401D3EB0 (DxgkInvalidateActiveVidPn.c)
 *     ?GdiCalloutLoop@CTDR_GDI_RESET_THREAD@@IEAAJAEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@@Z @ 0x1401D8898 (-GdiCalloutLoop@CTDR_GDI_RESET_THREAD@@IEAAJAEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@@Z.c)
 *     ?HdrPowerPolicyChangeCallout@DXGGLOBAL@@QEAAXXZ @ 0x1401DD818 (-HdrPowerPolicyChangeCallout@DXGGLOBAL@@QEAAXXZ.c)
 *     ?SetVirtualRenderAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1401DFF84 (-SetVirtualRenderAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?DxgkWslProcessCleanup@@YAXPEAU_EPROCESS@@@Z @ 0x1401F5A30 (-DxgkWslProcessCleanup@@YAXPEAU_EPROCESS@@@Z.c)
 *     DxgkReleaseProcessVidPnSourceOwners @ 0x1401F8A30 (DxgkReleaseProcessVidPnSourceOwners.c)
 *     ?SetDisplayStateCallback@CTTMDEVICE@@CAJ_KW4_TERMINAL_DISPLAY_STATE@@K@Z @ 0x140203610 (-SetDisplayStateCallback@CTTMDEVICE@@CAJ_KW4_TERMINAL_DISPLAY_STATE@@K@Z.c)
 *     DpiFdoExcludeAdapterAccess @ 0x140241720 (DpiFdoExcludeAdapterAccess.c)
 *     DpiFdoHandleStopDevice @ 0x140242E80 (DpiFdoHandleStopDevice.c)
 *     DpiFdoHandleTargetConnectionState @ 0x140243508 (DpiFdoHandleTargetConnectionState.c)
 *     DpiFdoStartAdapterThreadImpl @ 0x14024809C (DpiFdoStartAdapterThreadImpl.c)
 *     DpiDisableMsBddFallbackDriverWorkItem @ 0x14024B2A0 (DpiDisableMsBddFallbackDriverWorkItem.c)
 *     DpiIndirectCbForceDisplaySwitch @ 0x1402505B0 (DpiIndirectCbForceDisplaySwitch.c)
 *     DpiKsrStopAdapter @ 0x140252AB0 (DpiKsrStopAdapter.c)
 *     DpiPdoPollingWorkItem @ 0x140256B00 (DpiPdoPollingWorkItem.c)
 *     DpiGdoDispatchInternalIoctl @ 0x140257550 (DpiGdoDispatchInternalIoctl.c)
 *     ?HandleLinkTrainingTimeout@VIDPN_MGR@@QEAAXIEPEAE0@Z @ 0x14025EE00 (-HandleLinkTrainingTimeout@VIDPN_MGR@@QEAAXIEPEAE0@Z.c)
 *     ?LinkTrainingTimeoutWorkItem@DMMVIDEOPRESENTTARGET@@SAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1402604F0 (-LinkTrainingTimeoutWorkItem@DMMVIDEOPRESENTTARGET@@SAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@.c)
 *     ??1MONITOR_MGR@@UEAA@XZ @ 0x1402737EC (--1MONITOR_MGR@@UEAA@XZ.c)
 *     ?_HandleMonitorPnPNotification@MONITOR_MGR@@SAJPEAX0@Z @ 0x140274780 (-_HandleMonitorPnPNotification@MONITOR_MGR@@SAJPEAX0@Z.c)
 *     ?_PnPTargetDeviceChangeNotification@DXGMONITOR@@CAJPEAX0@Z @ 0x140276540 (-_PnPTargetDeviceChangeNotification@DXGMONITOR@@CAJPEAX0@Z.c)
 *     ?DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@@Z @ 0x1403ABC4C (-DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION.c)
 *     DxgkSessionConnected @ 0x1403B4AB0 (DxgkSessionConnected.c)
 *     DxgkSessionReconnected @ 0x1403B4E10 (DxgkSessionReconnected.c)
 *     DpiFdoHandleDevicePower @ 0x1403B9A00 (DpiFdoHandleDevicePower.c)
 *     DpiAcpiHandleAcpiEvent @ 0x140411414 (DpiAcpiHandleAcpiEvent.c)
 *     DxgkSetVidPnSourceOwner @ 0x140435750 (DxgkSetVidPnSourceOwner.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x140439834 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 *     DxgkEscape @ 0x14043CE60 (DxgkEscape.c)
 * Callees:
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 */

void __fastcall CDisplayScenarioContextScope::ContextScopeConstructor(
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT **this,
        const struct _GUID *a2,
        unsigned int a3,
        unsigned int a4)
{
  __int64 v7; // rax
  GUID ActivityId; // [rsp+30h] [rbp-38h] BYREF

  ActivityId = 0LL;
  if ( !a2 )
    goto LABEL_2;
  v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&ActivityId.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&ActivityId.Data1 )
    v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)ActivityId.Data4;
  if ( v7 )
    ActivityId = *a2;
  else
LABEL_2:
    EtwActivityIdControl(3u, &ActivityId);
  DisplayScenarioContextEnsureAndAssociate(&ActivityId, a3, a4, this + 1, (unsigned __int8 *)this);
}
