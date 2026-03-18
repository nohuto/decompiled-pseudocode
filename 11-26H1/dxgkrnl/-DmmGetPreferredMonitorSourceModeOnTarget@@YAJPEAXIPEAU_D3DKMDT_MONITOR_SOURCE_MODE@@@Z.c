/*
 * XREFs of ?DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x140349074
 * Callers:
 *     ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z @ 0x1402D77B8 (--ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z.c)
 *     ??ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x14034A3DC (--ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHIPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x140381104 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHIPEAU_GDIINFO@@PEAU_DPI_INFORMATIO.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14000CEB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x140031B50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1400381A8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z @ 0x140348E64 (-GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z.c)
 *     ?ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z @ 0x14034901C (-ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z.c)
 *     ?MonitorGetPreferredMonitorSourceMode@@YAJPEAUHDXGMONITOR__@@PEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x14034A20C (-MonitorGetPreferredMonitorSourceMode@@YAJPEAUHDXGMONITOR__@@PEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@.c)
 */

__int64 __fastcall DmmGetPreferredMonitorSourceModeOnTarget(
        DXGADAPTER *a1,
        unsigned int a2,
        struct _D3DKMDT_MONITOR_SOURCE_MODE *a3)
{
  __int64 v4; // rdi
  char *v5; // rbx
  VIDPN_MGR *v6; // rsi
  int ConnectedMonitorHandle; // eax
  unsigned int PreferredMonitorSourceMode; // ebx
  struct HDXGMONITOR__ *v10; // rdi
  struct HDXGMONITOR__ *v11; // [rsp+40h] [rbp+8h] BYREF
  __int64 v12; // [rsp+58h] [rbp+20h] BYREF

  v4 = a2;
  v5 = (char *)a1 + 3160;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) || !*(_QWORD *)v5 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 14818;
  }
  v6 = *(VIDPN_MGR **)(*(_QWORD *)v5 + 104LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v12, (__int64)v6);
  v11 = 0LL;
  ConnectedMonitorHandle = VIDPN_MGR::GetConnectedMonitorHandle(v6, v4, &v11);
  PreferredMonitorSourceMode = ConnectedMonitorHandle;
  if ( ConnectedMonitorHandle >= 0 )
  {
    v10 = v11;
    if ( !v11 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 14846;
    }
    PreferredMonitorSourceMode = MonitorGetPreferredMonitorSourceMode(v10, a3);
    VIDPN_MGR::ReleaseMonitorHandle(v6, v10);
  }
  else
  {
    WdLogSingleEntry2(2LL, v4, ConnectedMonitorHandle);
    WdLogGlobalForLineNumber = 14841;
  }
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v12 + 40));
  return PreferredMonitorSourceMode;
}
