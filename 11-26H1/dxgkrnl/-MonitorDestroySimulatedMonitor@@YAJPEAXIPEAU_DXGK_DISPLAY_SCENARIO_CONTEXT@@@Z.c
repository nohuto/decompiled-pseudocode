/*
 * XREFs of ?MonitorDestroySimulatedMonitor@@YAJPEAXIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14026E2BC
 * Callers:
 *     DxgkHandleForceProjectionMonitor @ 0x1401CFE80 (DxgkHandleForceProjectionMonitor.c)
 *     ?MonitorDRTTest@@YAJPEAXPEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14026E0DC (-MonitorDRTTest@@YAJPEAXPEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1400319C0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140274CF8 (-_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x14031D68C (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 */

__int64 __fastcall MonitorDestroySimulatedMonitor(
        PERESOURCE *this,
        __int64 a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  __int64 v4; // rdi
  __int64 v6; // rax
  PERESOURCE v7; // rax
  struct _LIST_ENTRY *Blink; // rsi
  unsigned int v10; // ebx

  v4 = (unsigned int)a2;
  v6 = WdLogNewEntry5_WdTrace(this, a2);
  *(_QWORD *)(v6 + 24) = v4;
  *(_QWORD *)(v6 + 32) = this;
  WdLogGlobalForLineNumber = 1159;
  if ( !this || (_DWORD)v4 == -1 )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1177;
  }
  v7 = this[395];
  if ( !v7 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 1181;
    return 3221225485LL;
  }
  Blink = v7[1].SystemResourcesList.Blink;
  if ( !Blink )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 1194;
    return 3221225485LL;
  }
  v10 = MONITOR_MGR::_HandleRemoveSimulatedMonitor((MONITOR_MGR *)v7[1].SystemResourcesList.Blink, v4, a3);
  MONITOR_MGR::_LogMonitorPresentEvent(Blink, 1073741826LL, (unsigned int)v4, v10, 0LL);
  return v10;
}
