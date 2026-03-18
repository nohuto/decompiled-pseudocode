/*
 * XREFs of ?MonitorGetUsageClass@@YAJPEAUHDXGMONITOR__@@PEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@PEA_N@Z @ 0x140348F54
 * Callers:
 *     DxgkIsMonitorConnected @ 0x1401B6B20 (DxgkIsMonitorConnected.c)
 *     ?_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z @ 0x140348B08 (-_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z.c)
 *     ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z @ 0x1403F22B4 (-OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z.c)
 * Callees:
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z @ 0x140035638 (-AcquireMonitorShared@MONITOR_MGR@@SA-AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z.c)
 *     ??1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x14003C96C (--1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 */

__int64 __fastcall MonitorGetUsageClass(struct HDXGMONITOR__ *a1, enum _D3DKMT_DISPLAY_TARGET_USAGE *a2, bool *a3)
{
  __int64 v6; // rbx
  unsigned int v7; // ebx
  __int64 v8; // rcx
  _QWORD v9[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( !a1 )
    return 3221225485LL;
  MONITOR_MGR::AcquireMonitorShared(v9, (__int64)a1);
  v6 = v9[0];
  if ( v9[0] )
  {
    if ( *(_DWORD *)(v9[0] + 280LL) != 1 )
    {
      if ( *(_DWORD *)(*(_QWORD *)(v9[0] + 240LL) + 16LL) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 5535;
      }
    }
    v8 = *(_QWORD *)(v6 + 240);
    v7 = 0;
    *(_DWORD *)a2 = *(_DWORD *)(v8 + 16);
    *a3 = *(_BYTE *)(v8 + 20);
  }
  else
  {
    v7 = -1073741275;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 5527;
  }
  CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v9);
  return v7;
}
