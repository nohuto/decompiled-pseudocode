/*
 * XREFs of ?_CancelSkippedDepartures@MONITOR_MGR@@QEAAJI@Z @ 0x1403EEFB8
 * Callers:
 *     ?MonitorCancelSkippedDepartures@@YAJPEAXI@Z @ 0x1403EEEE4 (-MonitorCancelSkippedDepartures@@YAJPEAXI@Z.c)
 * Callees:
 *     ?CancelSkippedDepartures@MonitorUsb4State@DxgMonitor@@QEAAXXZ @ 0x140277DE4 (-CancelSkippedDepartures@MonitorUsb4State@DxgMonitor@@QEAAXXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z @ 0x1402CBB30 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ @ 0x1402CC034 (-AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402CC050 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 */

__int64 __fastcall MONITOR_MGR::_CancelSkippedDepartures(MONITOR_MGR *this, unsigned int a2)
{
  __int64 v2; // rbx
  int MonitorInstance; // edi
  DxgMonitor::MonitorUsb4State *v5; // rcx
  void *v7; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+28h] [rbp-10h]
  void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = a2;
  if ( a2 == -1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1054;
  }
  v7 = retaddr;
  v8 = 0LL;
  MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v7);
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(this, v2, 0, (struct MONITOR_REF_ACCESSOR *)&v7);
  if ( MonitorInstance < 0 )
  {
    WdLogSingleEntry2(2LL, v2, this);
    WdLogGlobalForLineNumber = 1060;
  }
  else
  {
    v5 = *(DxgMonitor::MonitorUsb4State **)(v8 + 264);
    if ( *((_BYTE *)v5 + 8) )
      DxgMonitor::MonitorUsb4State::CancelSkippedDepartures(v5);
  }
  MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v7);
  return (unsigned int)MonitorInstance;
}
