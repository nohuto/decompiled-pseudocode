/*
 * XREFs of ?_AcquireFirstModeInfo@MonitorModes@DxgMonitor@@QEAAJPEAPEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x14027B90C
 * Callers:
 *     ?AcquireFirstModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMODESET__@@PEAPEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x140271330 (-AcquireFirstModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCE.c)
 * Callees:
 *     ?_CreateMonitorModeEnumerator@MonitorModes@DxgMonitor@@QEAAJPEBUDMMMONITORSOURCEMODE@12@PEAPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1403E6ED8 (-_CreateMonitorModeEnumerator@MonitorModes@DxgMonitor@@QEAAJPEBUDMMMONITORSOURCEMODE@12@PEAPEAU_.c)
 */

__int64 __fastcall DxgMonitor::MonitorModes::_AcquireFirstModeInfo(
        DxgMonitor::MonitorModes *this,
        struct _D3DKMDT_MONITOR_SOURCE_MODE **a2)
{
  __int64 result; // rax
  _QWORD *v5; // rbx
  _QWORD *v6; // rcx
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  const struct DxgMonitor::MonitorModes::DMMMONITORSOURCEMODE *v9; // rdx
  int v10; // edi
  struct _D3DKMDT_MONITOR_SOURCE_MODE *v11; // rbx
  struct _D3DKMDT_MONITOR_SOURCE_MODE *v12; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 30) )
  {
    v5 = (_QWORD *)((char *)this + 128);
    v12 = 0LL;
    v6 = (_QWORD *)*((_QWORD *)this + 16);
    if ( v6 == v5 )
      goto LABEL_7;
    v7 = v6 - 12;
    if ( !v6 )
      v7 = 0LL;
    if ( !v7 )
    {
LABEL_7:
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2419;
    }
    v8 = (_QWORD *)*v5;
    if ( (_QWORD *)*v5 == v5 )
    {
      v9 = 0LL;
    }
    else
    {
      v9 = (const struct DxgMonitor::MonitorModes::DMMMONITORSOURCEMODE *)(v8 - 12);
      if ( !v8 )
        v9 = 0LL;
    }
    v10 = DxgMonitor::MonitorModes::_CreateMonitorModeEnumerator(this, v9, &v12);
    if ( v10 >= 0 )
    {
      v11 = v12;
      if ( !v12 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 2424;
      }
      *a2 = v11;
    }
    return (unsigned int)v10;
  }
  else
  {
    WdLogNewEntry5_WdTrace(this, a2);
    result = 1075708747LL;
    WdLogGlobalForLineNumber = 2407;
  }
  return result;
}
