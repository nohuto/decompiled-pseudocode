/*
 * XREFs of ?MonitorIsWcgEnabled@@YAJPEAUHDXGMONITOR__@@PEA_N@Z @ 0x1403D81E4
 * Callers:
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x140342C10 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     DxgkDisplayConfigDeviceInfoForAdapter @ 0x140435B30 (DxgkDisplayConfigDeviceInfoForAdapter.c)
 * Callees:
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z @ 0x140035638 (-AcquireMonitorShared@MONITOR_MGR@@SA-AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z.c)
 *     ??1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x14003C96C (--1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 */

__int64 __fastcall MonitorIsWcgEnabled(struct HDXGMONITOR__ *a1, bool *a2)
{
  unsigned int v3; // ebx
  _QWORD v5[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( a1 )
  {
    MONITOR_MGR::AcquireMonitorShared(v5, (__int64)a1);
    if ( v5[0] )
    {
      *a2 = *(_BYTE *)(*(_QWORD *)(v5[0] + 224LL) + 457LL);
      v3 = 0;
    }
    else
    {
      v3 = -1073741275;
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 5808;
    }
    CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v5);
  }
  else
  {
    v3 = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 5805;
  }
  return v3;
}
