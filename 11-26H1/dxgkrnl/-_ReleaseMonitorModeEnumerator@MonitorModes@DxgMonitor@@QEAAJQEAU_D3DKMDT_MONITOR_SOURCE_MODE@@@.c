/*
 * XREFs of ?_ReleaseMonitorModeEnumerator@MonitorModes@DxgMonitor@@QEAAJQEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1403FAF60
 * Callers:
 *     ?ReleaseModeInfo@DXGDMM_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMODESET__@@QEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x140273450 (-ReleaseModeInfo@DXGDMM_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMOD.c)
 *     ?ReleaseModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMODESET__@@QEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1403FAD50 (-ReleaseModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMODES.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 */

__int64 __fastcall DxgMonitor::MonitorModes::_ReleaseMonitorModeEnumerator(
        DxgMonitor::MonitorModes *this,
        struct _D3DKMDT_MONITOR_SOURCE_MODE *const a2)
{
  __int64 result; // rax
  DxgMonitor::MonitorModes *v5; // rdx
  DxgMonitor::MonitorModes *v6; // rax
  struct _D3DKMDT_MONITOR_SOURCE_MODE *v7; // rcx
  __int64 v8; // rdx
  struct _D3DKMDT_MONITOR_SOURCE_MODE **v9; // rax

  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2375;
LABEL_3:
    WdLogSingleEntry2(2LL, a2, this);
    result = 3223192368LL;
    WdLogGlobalForLineNumber = 2390;
    return result;
  }
  v5 = (DxgMonitor::MonitorModes *)((char *)this + 152);
  v6 = (DxgMonitor::MonitorModes *)*((_QWORD *)this + 19);
  if ( v6 == (DxgMonitor::MonitorModes *)((char *)this + 152) )
    goto LABEL_3;
  v7 = a2 + 1;
  while ( v6 != (DxgMonitor::MonitorModes *)v7 )
  {
    if ( v5 == v6 )
      goto LABEL_3;
    v6 = *(DxgMonitor::MonitorModes **)v6;
  }
  v8 = *(_QWORD *)&v7->Id;
  if ( *(struct _D3DKMDT_MONITOR_SOURCE_MODE **)(*(_QWORD *)&v7->Id + 8LL) != v7
    || (v9 = *(struct _D3DKMDT_MONITOR_SOURCE_MODE ***)&a2[1].VideoSignalInfo.VideoStandard, *v9 != v7) )
  {
    __fastfail(3u);
  }
  *v9 = (struct _D3DKMDT_MONITOR_SOURCE_MODE *)v8;
  *(_QWORD *)(v8 + 8) = v9;
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(a2);
  return 0LL;
}
