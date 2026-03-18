/*
 * XREFs of ?_CreateMonitorModeEnumerator@MonitorModes@DxgMonitor@@QEAAJPEBUDMMMONITORSOURCEMODE@12@PEAPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1403E6ED8
 * Callers:
 *     ?_AcquireFirstModeInfo@MonitorModes@DxgMonitor@@QEAAJPEAPEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x14027B90C (-_AcquireFirstModeInfo@MonitorModes@DxgMonitor@@QEAAJPEAPEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z.c)
 *     ?_AcquirePreferredModeInfo@MonitorModes@DxgMonitor@@QEAAJPEAPEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x14027B9FC (-_AcquirePreferredModeInfo@MonitorModes@DxgMonitor@@QEAAJPEAPEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z.c)
 *     ?_GetNextMonitorModeEnumerator@MonitorModes@DxgMonitor@@QEAAJQEBU_D3DKMDT_MONITOR_SOURCE_MODE@@PEAPEBU3@@Z @ 0x1403E6B20 (-_GetNextMonitorModeEnumerator@MonitorModes@DxgMonitor@@QEAAJQEBU_D3DKMDT_MONITOR_SOURCE_MODE@@P.c)
 *     ?CreateNewModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMODESET__@@PEAPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1403E6C90 (-CreateNewModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMOD.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

__int64 __fastcall DxgMonitor::MonitorModes::_CreateMonitorModeEnumerator(
        DxgMonitor::MonitorModes *this,
        const struct DxgMonitor::MonitorModes::DMMMONITORSOURCEMODE *a2,
        struct _D3DKMDT_MONITOR_SOURCE_MODE **a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 result; // rax
  int v9; // ecx
  DxgMonitor::MonitorModes **v10; // r8
  DxgMonitor::MonitorModes *v11; // rax

  if ( !a3 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2111;
  }
  v6 = operator new(0x78uLL, 0x4D677844u, 256LL);
  v7 = v6;
  if ( v6 )
  {
    if ( a2 )
    {
      *(_OWORD *)v6 = *(_OWORD *)a2;
      *(_OWORD *)(v6 + 16) = *((_OWORD *)a2 + 1);
      *(_OWORD *)(v6 + 32) = *((_OWORD *)a2 + 2);
      *(_OWORD *)(v6 + 48) = *((_OWORD *)a2 + 3);
      *(_OWORD *)(v6 + 64) = *((_OWORD *)a2 + 4);
      *(_OWORD *)(v6 + 80) = *((_OWORD *)a2 + 5);
    }
    else
    {
      v9 = *((_DWORD *)this + 31);
      *((_DWORD *)this + 31) = v9 + 1;
      *(_QWORD *)(v6 + 48) = 0xFFFFFFFFLL;
      *(_DWORD *)v6 = v9;
      *(_DWORD *)(v6 + 88) = 0;
      *(_DWORD *)(v6 + 8) = 0;
      *(_QWORD *)(v6 + 12) = -1LL;
      *(_QWORD *)(v6 + 20) = -1LL;
      *(_QWORD *)(v6 + 28) = -1LL;
      *(_DWORD *)(v6 + 56) = 8;
    }
    *(_QWORD *)(v6 + 112) = a2;
    v10 = (DxgMonitor::MonitorModes **)*((_QWORD *)this + 20);
    v11 = (DxgMonitor::MonitorModes *)(v6 + 96);
    if ( *v10 != (DxgMonitor::MonitorModes *)((char *)this + 152) )
      __fastfail(3u);
    *(_QWORD *)v11 = (char *)this + 152;
    *(_QWORD *)(v7 + 104) = v10;
    *v10 = v11;
    *((_QWORD *)this + 20) = v11;
    result = 0LL;
    *a3 = (struct _D3DKMDT_MONITOR_SOURCE_MODE *)v7;
  }
  else
  {
    WdLogSingleEntry0(2LL);
    result = 3221225495LL;
    WdLogGlobalForLineNumber = 2121;
  }
  return result;
}
