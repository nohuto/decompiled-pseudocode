/*
 * XREFs of ?_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403E8810
 * Callers:
 *     ??1MONITOR_MGR@@UEAA@XZ @ 0x1402737EC (--1MONITOR_MGR@@UEAA@XZ.c)
 *     ?_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403E8508 (-_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIAEBVMONITOR_REF_ACCESSOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14042F0EC (-_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIAEBVMONITOR_REF_ACCESSOR@@0PEAU_DXGK_DISPLAY_SCENA.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??0MONITOR_REF_ACCESSOR@@QEAA@PEAVDXGMONITOR@@@Z @ 0x14003CDDC (--0MONITOR_REF_ACCESSOR@@QEAA@PEAVDXGMONITOR@@@Z.c)
 *     ?_InsertMonitorToPendingList@MONITOR_MGR@@QEAAXPEAVDXGMONITOR@@@Z @ 0x14006ABF0 (-_InsertMonitorToPendingList@MONITOR_MGR@@QEAAXPEAVDXGMONITOR@@@Z.c)
 *     ?_LeaveMonitorPendingState@MONITOR_MGR@@QEAAXXZ @ 0x14009886C (-_LeaveMonitorPendingState@MONITOR_MGR@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?_IsMonitorInMonitorList@MONITOR_MGR@@QEAAEAEBVMONITOR_REF_ACCESSOR@@@Z @ 0x14018F288 (-_IsMonitorInMonitorList@MONITOR_MGR@@QEAAEAEBVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?UnregisterPnPTargetDeviceNotification@MonitorPnpState@DxgMonitor@@QEAAJXZ @ 0x14018F3E0 (-UnregisterPnPTargetDeviceNotification@MonitorPnpState@DxgMonitor@@QEAAJXZ.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402CC050 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 *     ?_CleanupMonitorCCDName@DXGMONITOR@@AEAAXXZ @ 0x1403E8994 (-_CleanupMonitorCCDName@DXGMONITOR@@AEAAXXZ.c)
 *     ?_DestroyTtmDevice@DXGMONITOR@@QEAAXXZ @ 0x1403E8AB0 (-_DestroyTtmDevice@DXGMONITOR@@QEAAXXZ.c)
 *     ?LogMonitorObjectOnOffState@DXGMONITOR@@QEAAXAEBU_GUID@@IW4Enum@MONITOR_ON_OFF_CALLER_ORIGIN@@@Z @ 0x1403E8EAC (-LogMonitorObjectOnOffState@DXGMONITOR@@QEAAXAEBU_GUID@@IW4Enum@MONITOR_ON_OFF_CALLER_ORIGIN@@@Z.c)
 *     ?_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIAEBVMONITOR_REF_ACCESSOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14042F0EC (-_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIAEBVMONITOR_REF_ACCESSOR@@0PEAU_DXGK_DISPLAY_SCENA.c)
 */

__int64 __fastcall MONITOR_MGR::_DestroyPhysicalMonitor(
        MONITOR_MGR *this,
        const struct MONITOR_REF_ACCESSOR *a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  __int64 v6; // rax
  __int64 v7; // r9
  _BYTE v9[16]; // [rsp+30h] [rbp-48h] BYREF
  GUID ActivityId; // [rsp+40h] [rbp-38h] BYREF

  if ( !*((_QWORD *)a2 + 1) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1834;
  }
  if ( *(_DWORD *)(*((_QWORD *)a2 + 1) + 280LL) != 1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1835;
  }
  v6 = *((_QWORD *)a2 + 1);
  if ( *(_BYTE *)(v6 + 360) )
  {
    if ( *(_QWORD *)(v6 + 376) )
    {
      MONITOR_REF_ACCESSOR::MONITOR_REF_ACCESSOR((MONITOR_REF_ACCESSOR *)v9, 0LL);
      MONITOR_MGR::_HandleCreateMonitorStep2(
        this,
        *(_DWORD *)(*((_QWORD *)a2 + 1) + 180LL),
        (const struct MONITOR_REF_ACCESSOR *)(*((_QWORD *)a2 + 1) + 368LL),
        (const struct MONITOR_REF_ACCESSOR *)v9,
        a3);
      MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)(*((_QWORD *)a2 + 1) + 368LL));
      MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)v9);
    }
    MONITOR_MGR::_LeaveMonitorPendingState(this);
  }
  DxgMonitor::MonitorPnpState::UnregisterPnPTargetDeviceNotification(
    *(DxgMonitor::MonitorPnpState **)(*((_QWORD *)a2 + 1) + 200LL),
    (__int64)a2);
  DXGMONITOR::_DestroyTtmDevice(*((DXGMONITOR **)a2 + 1));
  DXGMONITOR::_CleanupMonitorCCDName(*((DXGMONITOR **)a2 + 1));
  ActivityId = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  LOBYTE(v7) = 1;
  DXGMONITOR::LogMonitorObjectOnOffState(*((_QWORD *)a2 + 1), &ActivityId, 0LL, v7);
  if ( MONITOR_MGR::_IsMonitorInMonitorList(this, a2) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1897;
  }
  MONITOR_MGR::_InsertMonitorToPendingList(this, *((struct DXGMONITOR **)a2 + 1));
  ReferenceCounted::Release(*((ReferenceCounted **)a2 + 1));
  return 0LL;
}
