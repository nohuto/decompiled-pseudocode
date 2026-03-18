/*
 * XREFs of ?MonitorDRTTest@@YAJPEAXPEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14026E0DC
 * Callers:
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x140439834 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x140031B50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?DmmEnableModeResetOnMonitorEvent@@YAJQEAXE@Z @ 0x1402599CC (-DmmEnableModeResetOnMonitorEvent@@YAJQEAXE@Z.c)
 *     ?MonitorCreateSimulatedMonitor@@YAJPEAXIW4_DMM_VIDPN_MONITOR_TYPE@@PEAUHDXGMONITOR__@@0EPEAPEAU2@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14026DF04 (-MonitorCreateSimulatedMonitor@@YAJPEAXIW4_DMM_VIDPN_MONITOR_TYPE@@PEAUHDXGMONITOR__@@0EPEAPEAU2.c)
 *     ?MonitorDestroySimulatedMonitor@@YAJPEAXIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14026E2BC (-MonitorDestroySimulatedMonitor@@YAJPEAXIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_DRTGetTargetInformation@MONITOR_MGR@@QEAAJPEAU_D3DKMT_DRT_MONITOR@@@Z @ 0x1402742B8 (-_DRTGetTargetInformation@MONITOR_MGR@@QEAAJPEAU_D3DKMT_DRT_MONITOR@@@Z.c)
 */

__int64 __fastcall MonitorDRTTest(
        DXGADAPTER *a1,
        struct _D3DKMT_DRT_ESCAPE_HEAD *a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  unsigned int v6; // eax
  __int64 result; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  unsigned int v10; // ebx
  unsigned int SimulatedMonitor; // eax
  __int64 v12; // r9
  MONITOR_MGR *v13; // rcx
  __int64 v14; // [rsp+20h] [rbp-28h]
  __int64 v15; // [rsp+30h] [rbp-18h]

  *(_QWORD *)(WdLogNewEntry5_WdTrace(a1, a2) + 24) = a1;
  WdLogGlobalForLineNumber = 4957;
  if ( !a1 || !a2 )
    return 3221225485LL;
  v6 = *((_DWORD *)a2 + 1);
  if ( v6 < 0x20 )
  {
    WdLogSingleEntry2(3LL, a2, v6);
    WdLogGlobalForLineNumber = 4973;
    return 3221225485LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4991;
  }
  v8 = *((_QWORD *)a1 + 395);
  if ( !v8 )
  {
    WdLogSingleEntry1(2LL);
    result = 3221225659LL;
    WdLogGlobalForLineNumber = 4995;
    return result;
  }
  v9 = *((unsigned int *)a2 + 3);
  switch ( (_DWORD)v9 )
  {
    case 0:
      v13 = *(MONITOR_MGR **)(v8 + 112);
      if ( !v13 )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 5013;
        return 3221225485LL;
      }
      return (unsigned int)MONITOR_MGR::_DRTGetTargetInformation(v13, a2);
    case 1:
      if ( (int)DmmEnableModeResetOnMonitorEvent((PERESOURCE *)a1, 0) < 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 5035;
      }
      SimulatedMonitor = MonitorCreateSimulatedMonitor(
                           (__int64)a1,
                           *((unsigned int *)a2 + 4),
                           *((_DWORD *)a2 + 5),
                           v12,
                           v14,
                           0,
                           v15,
                           (__int64)a3);
      goto LABEL_20;
    case 2:
      if ( (int)DmmEnableModeResetOnMonitorEvent((PERESOURCE *)a1, 0) < 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 5069;
      }
      SimulatedMonitor = MonitorDestroySimulatedMonitor(a1, *((_DWORD *)a2 + 4), a3);
LABEL_20:
      v10 = SimulatedMonitor;
      DmmEnableModeResetOnMonitorEvent((PERESOURCE *)a1, 1);
      return v10;
  }
  WdLogSingleEntry2(3LL, v9, a2);
  WdLogGlobalForLineNumber = 5092;
  return (unsigned int)-1073741811;
}
