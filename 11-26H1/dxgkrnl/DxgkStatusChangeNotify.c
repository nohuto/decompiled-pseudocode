/*
 * XREFs of DxgkStatusChangeNotify @ 0x1402D4620
 * Callers:
 *     ?NotifyStatusChange@?$DXGK_AUTO_STATUS_CHANGE_NOTIFY@$08$09@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@Z @ 0x140055890 (-NotifyStatusChange@-$DXGK_AUTO_STATUS_CHANGE_NOTIFY@$08$09@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TY.c)
 *     ?NotifyStatusChange@?$DXGK_AUTO_STATUS_CHANGE_NOTIFY@$05$07@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@Z @ 0x1400585B0 (-NotifyStatusChange@-$DXGK_AUTO_STATUS_CHANGE_NOTIFY@$05$07@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TY.c)
 *     DxgkNotifyMonitorChange @ 0x1401933F4 (DxgkNotifyMonitorChange.c)
 *     ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1401C25AC (-DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 *     ?SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJI_NPEBU_DXGK_DISPLAYMODE_INFO@@00@Z @ 0x1402CF610 (-SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJI_NPEBU_DXGK_DISPLAYMODE_INFO@@00@Z.c)
 *     DxgkSetDisplayMode @ 0x1402D1030 (DxgkSetDisplayMode.c)
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1402D2DA8 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 *     ?PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIW4MONITOR_EVENT@@W4MONITOR_POWER_EVENT_PARAM@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1402D4150 (-PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIW4MONITOR_EVENT@@W4MONITOR_POWER_EVENT_PARAM@@PEAU_DXGK_.c)
 *     ?SetTargetOwnership@VIDPN_MGR@@QEAAJIW4_DMM_VIDEO_PRESENT_TARGET_OWNERSHIP@@@Z @ 0x1402D44F8 (-SetTargetOwnership@VIDPN_MGR@@QEAAJIW4_DMM_VIDEO_PRESENT_TARGET_OWNERSHIP@@@Z.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1402D4EF8 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140367688 (-ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1404348A4 (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0qp_EtwWriteTransfer @ 0x140013B24 (McTemplateK0qp_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DxgkStatusChangeNotify(int *a1)
{
  __int64 v2; // rcx
  __int64 CurrentProcess; // rax
  __int64 CurrentServerSilo; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // edx
  unsigned int updated; // esi
  __int64 v10; // rcx
  int v12; // eax
  __int64 v13; // rbx
  int v14; // eax
  __int64 v15; // rax
  const wchar_t *v16; // r9
  int v17; // eax
  __int64 v18; // [rsp+20h] [rbp-50h]
  int v19; // [rsp+50h] [rbp-20h] BYREF
  __int64 v20; // [rsp+58h] [rbp-18h]
  char v21; // [rsp+60h] [rbp-10h]
  unsigned int ProcessSessionId; // [rsp+A0h] [rbp+30h]
  unsigned int ActiveConsoleId; // [rsp+A8h] [rbp+38h]
  unsigned int ServerSiloServiceSessionId; // [rsp+B0h] [rbp+40h]

  v19 = -1;
  v20 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v21 = 1;
    v19 = 2195;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v21 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v19, 2195);
  CurrentProcess = PsGetCurrentProcess(v2);
  ProcessSessionId = PsGetProcessSessionId(CurrentProcess);
  CurrentServerSilo = PsGetCurrentServerSilo();
  ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId(CurrentServerSilo);
  ActiveConsoleId = RtlGetActiveConsoleId();
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10) != 0 )
    McTemplateK0qp_EtwWriteTransfer(v6, v5, v7, *a1);
  v8 = *a1;
  if ( *a1 <= 7 )
  {
    if ( v8 == 7 )
      goto LABEL_23;
    if ( v8 == 1 )
    {
      WdLogSingleEntry1(4LL);
      WdLogGlobalForLineNumber = 4990;
      updated = ZwUpdateWnfStateData(&WNF_DX_OCCLUSION_CHANGE_NOTIFICATION, 0LL, 0LL);
      if ( ProcessSessionId != ServerSiloServiceSessionId )
        goto LABEL_12;
      if ( ActiveConsoleId == -1 )
        goto LABEL_12;
      WdLogSingleEntry1(4LL);
      WdLogGlobalForLineNumber = 5006;
      v12 = ZwUpdateWnfStateData(&WNF_DX_OCCLUSION_CHANGE_NOTIFICATION, 0LL, 0LL);
      if ( v12 >= 0 )
        goto LABEL_12;
      v13 = v12;
      WdLogSingleEntry2(2LL, ActiveConsoleId, v12);
      WdLogGlobalForLineNumber = 5018;
LABEL_33:
      v15 = ActiveConsoleId;
      v16 = L"Failed to send OCCLUSION WNF notification to active session %u, status = 0x%I64x.";
      goto LABEL_34;
    }
    if ( v8 == 2 || v8 == 3 || v8 == 4 || (unsigned int)(v8 - 5) < 2 )
      goto LABEL_11;
LABEL_39:
    WdLogSingleEntry1(1LL);
    v18 = *a1;
    WdLogGlobalForLineNumber = 5073;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"Unsupported state change notification type. (pNotification->Type = 0x%I64x)",
      v18,
      0LL,
      0LL,
      0LL,
      0LL);
    updated = -1073741637;
    goto LABEL_12;
  }
  if ( v8 == 8 || v8 == 9 || v8 == 10 )
  {
LABEL_11:
    updated = 0;
    goto LABEL_12;
  }
  if ( v8 != 11 )
  {
    if ( v8 == 12 )
    {
      WdLogSingleEntry1(4LL);
      WdLogGlobalForLineNumber = 5026;
      updated = ZwUpdateWnfStateData(&WNF_DX_MONITOR_CHANGE_NOTIFICATION, a1 + 4, 16LL);
      if ( ProcessSessionId == ActiveConsoleId )
        goto LABEL_12;
      if ( ActiveConsoleId == -1 )
        goto LABEL_12;
      WdLogSingleEntry1(4LL);
      WdLogGlobalForLineNumber = 5042;
      v17 = ZwUpdateWnfStateData(&WNF_DX_MONITOR_CHANGE_NOTIFICATION, a1 + 4, 16LL);
      if ( v17 >= 0 )
        goto LABEL_12;
      v13 = v17;
      WdLogSingleEntry2(2LL, ActiveConsoleId, v17);
      WdLogGlobalForLineNumber = 5054;
      goto LABEL_33;
    }
    goto LABEL_39;
  }
LABEL_23:
  WdLogSingleEntry1(4LL);
  WdLogGlobalForLineNumber = 4946;
  updated = ZwUpdateWnfStateData(&WNF_DX_MODE_CHANGE_NOTIFICATION, 0LL, 0LL);
  if ( ServerSiloServiceSessionId == -1 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 4959;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to get service session ID from server silo of current session %u.",
      ProcessSessionId,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_12;
  }
  if ( ServerSiloServiceSessionId != ProcessSessionId )
  {
    v14 = ZwUpdateWnfStateData(&WNF_DX_MODE_CHANGE_NOTIFICATION, 0LL, 0LL);
    if ( v14 < 0 )
    {
      v13 = v14;
      WdLogSingleEntry2(2LL, ServerSiloServiceSessionId, v14);
      v15 = ServerSiloServiceSessionId;
      v16 = L"Failed to send MODE_CHANGE WNF notification to service session %u, status = 0x%I64x.";
      WdLogGlobalForLineNumber = 4982;
LABEL_34:
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v16, v15, v13, 0LL, 0LL, 0LL);
    }
  }
LABEL_12:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v19);
  if ( v21 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v10, (__int64)&EventProfilerExit);
  return updated;
}
