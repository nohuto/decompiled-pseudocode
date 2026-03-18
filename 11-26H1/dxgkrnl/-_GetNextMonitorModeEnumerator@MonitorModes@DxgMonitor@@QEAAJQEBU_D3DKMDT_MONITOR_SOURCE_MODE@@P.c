/*
 * XREFs of ?_GetNextMonitorModeEnumerator@MonitorModes@DxgMonitor@@QEAAJQEBU_D3DKMDT_MONITOR_SOURCE_MODE@@PEAPEBU3@@Z @ 0x1403E6B20
 * Callers:
 *     ?AcquireNextModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMODESET__@@QEBU_D3DKMDT_MONITOR_SOURCE_MODE@@PEAPEBU3@@Z @ 0x1403E6890 (-AcquireNextModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEM.c)
 * Callees:
 *     ?_CreateMonitorModeEnumerator@MonitorModes@DxgMonitor@@QEAAJPEBUDMMMONITORSOURCEMODE@12@PEAPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1403E6ED8 (-_CreateMonitorModeEnumerator@MonitorModes@DxgMonitor@@QEAAJPEBUDMMMONITORSOURCEMODE@12@PEAPEAU_.c)
 */

__int64 __fastcall DxgMonitor::MonitorModes::_GetNextMonitorModeEnumerator(
        DxgMonitor::MonitorModes *this,
        const struct _D3DKMDT_MONITOR_SOURCE_MODE *const a2,
        struct _D3DKMDT_MONITOR_SOURCE_MODE **a3)
{
  const struct _D3DKMDT_MONITOR_SOURCE_MODE **v6; // rcx
  const struct _D3DKMDT_MONITOR_SOURCE_MODE *v7; // rax
  __int64 v8; // rdx
  const struct DxgMonitor::MonitorModes::DMMMONITORSOURCEMODE **v9; // rcx
  const struct DxgMonitor::MonitorModes::DMMMONITORSOURCEMODE *v10; // rax
  const struct DxgMonitor::MonitorModes::DMMMONITORSOURCEMODE *v11; // rdx
  __int64 result; // rax
  __int64 v13; // rax
  struct _D3DKMDT_MONITOR_SOURCE_MODE *v14; // [rsp+30h] [rbp+8h] BYREF

  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2191;
  }
  if ( !a3 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2192;
  }
  v6 = (const struct _D3DKMDT_MONITOR_SOURCE_MODE **)((char *)this + 152);
  if ( !a2 )
    goto LABEL_14;
  v7 = *v6;
  if ( *v6 == (const struct _D3DKMDT_MONITOR_SOURCE_MODE *)v6 )
    goto LABEL_14;
  while ( v7 != &a2[1] )
  {
    if ( v6 == (const struct _D3DKMDT_MONITOR_SOURCE_MODE **)v7 )
      goto LABEL_14;
    v7 = *(const struct _D3DKMDT_MONITOR_SOURCE_MODE **)&v7->Id;
  }
  v8 = *(_QWORD *)&a2[1].VideoSignalInfo.TotalSize.cy;
  v9 = (const struct DxgMonitor::MonitorModes::DMMMONITORSOURCEMODE **)((char *)this + 128);
  if ( !v8 || (v10 = *v9, *v9 == (const struct DxgMonitor::MonitorModes::DMMMONITORSOURCEMODE *)v9) )
  {
LABEL_14:
    WdLogSingleEntry2(2LL, a2, this);
    result = 3223192368LL;
    WdLogGlobalForLineNumber = 2208;
  }
  else
  {
    v11 = (const struct DxgMonitor::MonitorModes::DMMMONITORSOURCEMODE *)(v8 + 96);
    while ( v10 != v11 )
    {
      if ( v9 == (const struct DxgMonitor::MonitorModes::DMMMONITORSOURCEMODE **)v10 )
        goto LABEL_14;
      v10 = *(const struct DxgMonitor::MonitorModes::DMMMONITORSOURCEMODE **)v10;
    }
    v13 = *(_QWORD *)v11;
    if ( *(const struct DxgMonitor::MonitorModes::DMMMONITORSOURCEMODE ***)v11 == v9 )
      goto LABEL_24;
    v11 = (const struct DxgMonitor::MonitorModes::DMMMONITORSOURCEMODE *)(v13 - 96);
    if ( !v13 )
      v11 = 0LL;
    if ( !v11 )
    {
LABEL_24:
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v9, v11) + 24) = this;
      result = 1075708748LL;
      WdLogGlobalForLineNumber = 2222;
    }
    else
    {
      v14 = 0LL;
      result = DxgMonitor::MonitorModes::_CreateMonitorModeEnumerator(this, v11, &v14);
      if ( (int)result >= 0 )
        *a3 = v14;
    }
  }
  return result;
}
