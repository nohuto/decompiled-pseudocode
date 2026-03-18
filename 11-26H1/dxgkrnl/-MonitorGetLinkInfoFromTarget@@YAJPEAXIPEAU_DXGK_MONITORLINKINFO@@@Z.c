/*
 * XREFs of ?MonitorGetLinkInfoFromTarget@@YAJPEAXIPEAU_DXGK_MONITORLINKINFO@@@Z @ 0x1403C0298
 * Callers:
 *     ?DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z @ 0x1401CE964 (-DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z.c)
 *     ?SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJI_NPEBU_DXGK_DISPLAYMODE_INFO@@00@Z @ 0x1402CF610 (-SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJI_NPEBU_DXGK_DISPLAYMODE_INFO@@00@Z.c)
 *     ?DxgkpCopyMonitorLinkInfoToFlags@@YAJPEAXPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z @ 0x1403C01D0 (-DxgkpCopyMonitorLinkInfoToFlags@@YAJPEAXPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z.c)
 * Callees:
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAXI_N@Z @ 0x140035738 (-AcquireMonitorShared@MONITOR_MGR@@SA-AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAXI_N@Z.c)
 *     ??1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x14003C96C (--1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     ?_GetLinkInfo@DXGMONITOR@@QEBAJPEAU_DXGK_MONITORLINKINFO@@@Z @ 0x1403C0348 (-_GetLinkInfo@DXGMONITOR@@QEBAJPEAU_DXGK_MONITORLINKINFO@@@Z.c)
 */

__int64 __fastcall MonitorGetLinkInfoFromTarget(__int64 a1, unsigned int a2, struct _DXGK_MONITORLINKINFO *a3)
{
  unsigned int LinkInfo; // ebx
  DXGMONITOR *v6[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( !a1 )
  {
    LinkInfo = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 6722;
    return LinkInfo;
  }
  if ( a2 != -1 )
  {
    MONITOR_MGR::AcquireMonitorShared(v6, a1, a2, 1u);
    if ( v6[0] )
    {
      LinkInfo = DXGMONITOR::_GetLinkInfo(v6[0], a3);
    }
    else
    {
      LinkInfo = -1073741275;
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 6733;
    }
    CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v6);
    return LinkInfo;
  }
  return -1073741275LL;
}
