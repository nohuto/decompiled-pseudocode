/*
 * XREFs of ?_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@@Z @ 0x140274514
 * Callers:
 *     ??1MONITOR_MGR@@UEAA@XZ @ 0x1402737EC (--1MONITOR_MGR@@UEAA@XZ.c)
 *     ?_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140274CF8 (-_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1402CDC34 (-_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@EPEAU_DXGK_DIS.c)
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@AEBVMONITOR_REF_ACCESSOR@@AEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403DFB64 (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@AEBVMONITOR_REF_ACC.c)
 *     ?_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIAEBVMONITOR_REF_ACCESSOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14042F0EC (-_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIAEBVMONITOR_REF_ACCESSOR@@0PEAU_DXGK_DISPLAY_SCENA.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?_InsertMonitorToPendingList@MONITOR_MGR@@QEAAXPEAVDXGMONITOR@@@Z @ 0x14006ABF0 (-_InsertMonitorToPendingList@MONITOR_MGR@@QEAAXPEAVDXGMONITOR@@@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?_IsMonitorInMonitorList@MONITOR_MGR@@QEAAEAEBVMONITOR_REF_ACCESSOR@@@Z @ 0x14018F288 (-_IsMonitorInMonitorList@MONITOR_MGR@@QEAAEAEBVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?_CleanupMonitorCCDName@DXGMONITOR@@AEAAXXZ @ 0x1403E8994 (-_CleanupMonitorCCDName@DXGMONITOR@@AEAAXXZ.c)
 *     ?_DestroyTtmDevice@DXGMONITOR@@QEAAXXZ @ 0x1403E8AB0 (-_DestroyTtmDevice@DXGMONITOR@@QEAAXXZ.c)
 *     ?LogMonitorObjectOnOffState@DXGMONITOR@@QEAAXAEBU_GUID@@IW4Enum@MONITOR_ON_OFF_CALLER_ORIGIN@@@Z @ 0x1403E8EAC (-LogMonitorObjectOnOffState@DXGMONITOR@@QEAAXAEBU_GUID@@IW4Enum@MONITOR_ON_OFF_CALLER_ORIGIN@@@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_DestroySimulatedMonitor(MONITOR_MGR *this, const struct MONITOR_REF_ACCESSOR *a2)
{
  __int64 v4; // r9
  GUID ActivityId; // [rsp+20h] [rbp-28h] BYREF

  if ( !*((_QWORD *)a2 + 1) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2099;
  }
  if ( *(_DWORD *)(*((_QWORD *)a2 + 1) + 280LL) == 1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2100;
  }
  if ( *(_BYTE *)(*((_QWORD *)a2 + 1) + 360LL) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2111;
  }
  if ( *(_QWORD *)(*((_QWORD *)a2 + 1) + 296LL) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2112;
  }
  DXGMONITOR::_DestroyTtmDevice(*((DXGMONITOR **)a2 + 1));
  DXGMONITOR::_CleanupMonitorCCDName(*((DXGMONITOR **)a2 + 1));
  ActivityId = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  LOBYTE(v4) = 1;
  DXGMONITOR::LogMonitorObjectOnOffState(*((_QWORD *)a2 + 1), &ActivityId, 0LL, v4);
  if ( MONITOR_MGR::_IsMonitorInMonitorList(this, a2) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2134;
  }
  MONITOR_MGR::_InsertMonitorToPendingList(this, *((struct DXGMONITOR **)a2 + 1));
  ReferenceCounted::Release(*((ReferenceCounted **)a2 + 1));
  return 0LL;
}
