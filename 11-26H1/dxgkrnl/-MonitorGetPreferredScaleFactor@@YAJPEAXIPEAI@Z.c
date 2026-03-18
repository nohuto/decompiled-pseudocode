/*
 * XREFs of ?MonitorGetPreferredScaleFactor@@YAJPEAXIPEAI@Z @ 0x140400CA0
 * Callers:
 *     ?GetPreferredScaleFactorForMonitor@DpiInternal@@YA_NQEAXIHPEAI@Z @ 0x140400BC0 (-GetPreferredScaleFactorForMonitor@DpiInternal@@YA_NQEAXIHPEAI@Z.c)
 * Callees:
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAXI_N@Z @ 0x140035738 (-AcquireMonitorShared@MONITOR_MGR@@SA-AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAXI_N@Z.c)
 *     ??1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x14003C96C (--1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 */

__int64 __fastcall MonitorGetPreferredScaleFactor(__int64 a1, unsigned int a2, unsigned int *a3)
{
  unsigned int v4; // eax
  unsigned int v5; // ebx
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( !a1 || a2 == -1 )
  {
    v5 = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 6567;
  }
  else
  {
    MONITOR_MGR::AcquireMonitorShared(v7, a1, a2, 1u);
    if ( v7[0] )
    {
      v4 = *(_DWORD *)(v7[0] + 468LL);
      if ( !v4 )
        v4 = *(_DWORD *)(v7[0] + 464LL);
      *a3 = v4;
      v5 = v4 == 0 ? 0xC0000001 : 0;
    }
    else
    {
      v5 = -1073741275;
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 6573;
    }
    CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v7);
  }
  return v5;
}
