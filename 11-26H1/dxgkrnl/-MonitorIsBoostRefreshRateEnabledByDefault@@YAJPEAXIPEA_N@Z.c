/*
 * XREFs of ?MonitorIsBoostRefreshRateEnabledByDefault@@YAJPEAXIPEA_N@Z @ 0x1403F6F4C
 * Callers:
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x140342C10 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     DxgkDisplayConfigDeviceInfoForAdapter @ 0x140435B30 (DxgkDisplayConfigDeviceInfoForAdapter.c)
 * Callees:
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAXI_N@Z @ 0x140035738 (-AcquireMonitorShared@MONITOR_MGR@@SA-AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAXI_N@Z.c)
 *     ??1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x14003C96C (--1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 */

__int64 __fastcall MonitorIsBoostRefreshRateEnabledByDefault(__int64 a1, unsigned int a2, bool *a3)
{
  __int64 v4; // rbx
  _QWORD v6[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( !a1 || a2 == -1 || !a3 )
    return 3221225485LL;
  MONITOR_MGR::AcquireMonitorShared(v6, a1, a2, 1u);
  v4 = v6[0];
  if ( v6[0] )
  {
    if ( *(_DWORD *)(v6[0] + 280LL) != 1 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 5413;
    }
    *a3 = *(_DWORD *)(v4 + 328) != 0;
    CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v6);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 5407;
    CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v6);
    return 3221225664LL;
  }
}
