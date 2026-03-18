/*
 * XREFs of ?_OnMonitorFunctionDriverDeparture@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14027648C
 * Callers:
 *     ?_PnPTargetDeviceChangeNotification@DXGMONITOR@@CAJPEAX0@Z @ 0x140276540 (-_PnPTargetDeviceChangeNotification@DXGMONITOR@@CAJPEAX0@Z.c)
 * Callees:
 *     ?UnregisterPnPTargetDeviceNotification@MonitorPnpState@DxgMonitor@@QEAAJXZ @ 0x14018F3E0 (-UnregisterPnPTargetDeviceNotification@MonitorPnpState@DxgMonitor@@QEAAJXZ.c)
 */

__int64 __fastcall DXGMONITOR::_OnMonitorFunctionDriverDeparture(
        DxgMonitor::MonitorPnpState **this,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2)
{
  __int64 v3; // rdx
  bool v4; // zf

  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2) + 24) = this;
  v4 = ((_BYTE)this[22] & 1) == 0;
  WdLogGlobalForLineNumber = 1500;
  if ( v4 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1509;
  }
  if ( !*((_QWORD *)this[25] + 1) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1510;
  }
  if ( *((_DWORD *)this + 70) != 1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1511;
  }
  return DxgMonitor::MonitorPnpState::UnregisterPnPTargetDeviceNotification(this[25], v3);
}
