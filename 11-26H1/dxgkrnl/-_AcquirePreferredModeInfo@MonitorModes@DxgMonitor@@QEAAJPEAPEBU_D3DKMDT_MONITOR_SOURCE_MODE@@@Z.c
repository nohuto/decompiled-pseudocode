/*
 * XREFs of ?_AcquirePreferredModeInfo@MonitorModes@DxgMonitor@@QEAAJPEAPEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x14027B9FC
 * Callers:
 *     ?AcquirePreferredModeInfo@DXGDMM_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMODESET__@@PEAPEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x140271AC0 (-AcquirePreferredModeInfo@DXGDMM_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITOR.c)
 *     ?AcquirePreferredModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMODESET__@@PEAPEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x140271C80 (-AcquirePreferredModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSO.c)
 * Callees:
 *     ?_CreateMonitorModeEnumerator@MonitorModes@DxgMonitor@@QEAAJPEBUDMMMONITORSOURCEMODE@12@PEAPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1403E6ED8 (-_CreateMonitorModeEnumerator@MonitorModes@DxgMonitor@@QEAAJPEBUDMMMONITORSOURCEMODE@12@PEAPEAU_.c)
 */

__int64 __fastcall DxgMonitor::MonitorModes::_AcquirePreferredModeInfo(
        DxgMonitor::MonitorModes *this,
        struct _D3DKMDT_MONITOR_SOURCE_MODE **a2)
{
  const struct DxgMonitor::MonitorModes::DMMMONITORSOURCEMODE *v3; // rdx
  __int64 result; // rax
  int v5; // edi
  struct _D3DKMDT_MONITOR_SOURCE_MODE *v6; // rbx
  struct _D3DKMDT_MONITOR_SOURCE_MODE *v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = (const struct DxgMonitor::MonitorModes::DMMMONITORSOURCEMODE *)*((_QWORD *)this + 18);
  if ( v3 )
  {
    v7 = 0LL;
    v5 = DxgMonitor::MonitorModes::_CreateMonitorModeEnumerator(this, v3, &v7);
    if ( v5 >= 0 )
    {
      v6 = v7;
      if ( !v7 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 2452;
      }
      *a2 = v6;
    }
    return (unsigned int)v5;
  }
  else
  {
    WdLogNewEntry5_WdTrace(this, 0LL);
    result = 1075708702LL;
    WdLogGlobalForLineNumber = 2436;
  }
  return result;
}
