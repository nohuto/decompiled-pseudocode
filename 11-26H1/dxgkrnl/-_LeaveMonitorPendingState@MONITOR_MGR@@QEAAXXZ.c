/*
 * XREFs of ?_LeaveMonitorPendingState@MONITOR_MGR@@QEAAXXZ @ 0x14009886C
 * Callers:
 *     ?_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403E8810 (-_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@PEAU_DXGK_DISPLAY_SCENARIO_.c)
 *     ?_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIAEBVMONITOR_REF_ACCESSOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14042F0EC (-_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIAEBVMONITOR_REF_ACCESSOR@@0PEAU_DXGK_DISPLAY_SCENA.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1400319C0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 */

void __fastcall MONITOR_MGR::_LeaveMonitorPendingState(MONITOR_MGR *this)
{
  __int64 v2; // rax

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 3) + 16LL)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 908;
  }
  v2 = *((_QWORD *)this + 86);
  if ( v2 )
  {
    if ( (*(_DWORD *)(v2 + 20))-- == 1 )
      KeSetEvent((PRKEVENT)(*((_QWORD *)this + 86) + 24LL), 0, 0);
  }
}
