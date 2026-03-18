/*
 * XREFs of ?MonitorRemovePhysicalMonitor@@YAJPEAXIEPEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14042C640
 * Callers:
 *     DxgkPowerOnOffMonitor @ 0x14024A2EC (DxgkPowerOnOffMonitor.c)
 *     DpiPdoHandleChildConnectionChange @ 0x140443F48 (DpiPdoHandleChildConnectionChange.c)
 *     DpiPdoRemovePdo @ 0x140444378 (DpiPdoRemovePdo.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1400319C0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x14031D68C (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403E8508 (-_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     _anonymous_namespace_::DetermineIfNeedToChangeActivity @ 0x14042C784 (_anonymous_namespace_--DetermineIfNeedToChangeActivity.c)
 */

__int64 __fastcall MonitorRemovePhysicalMonitor(
        char *a1,
        __int64 a2,
        char a3,
        unsigned __int8 *a4,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a5)
{
  __int64 v5; // rsi
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v11; // rbp
  unsigned int v12; // ebx

  v5 = (unsigned int)a2;
  v8 = WdLogNewEntry5_WdTrace(a1, a2);
  *(_QWORD *)(v8 + 24) = v5;
  *(_QWORD *)(v8 + 32) = a1;
  WdLogGlobalForLineNumber = 724;
  if ( !a1 || (_DWORD)v5 == -1 )
    return 3221225485LL;
  if ( a5 )
  {
    *((_DWORD *)a5 + 6) = v5;
    *(_QWORD *)((char *)a5 + 36) = *(_QWORD *)(a1 + 412);
    *((_DWORD *)a5 + 7) = 0;
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)a1) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 749;
  }
  v9 = *((_QWORD *)a1 + 395);
  if ( !v9 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 753;
    return 3221225485LL;
  }
  v11 = *(_QWORD *)(v9 + 112);
  if ( !v11 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 766;
    return 3221225485LL;
  }
  v12 = MONITOR_MGR::_HandleRemovePhysicalMonitor(*(MONITOR_MGR **)(v9 + 112), v5, a3, (GUID *)a5);
  MONITOR_MGR::_LogMonitorPresentEvent(v11, 2, v5, v12, 0LL);
  anonymous_namespace_::DetermineIfNeedToChangeActivity(a1, v5);
  return v12;
}
