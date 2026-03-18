/*
 * XREFs of ?MonitorSetScaleFactorOverride@@YAJPEAXII@Z @ 0x1402700C0
 * Callers:
 *     DxgkIddHandleSetDisplayConfig @ 0x1401C7910 (DxgkIddHandleSetDisplayConfig.c)
 * Callees:
 *     ?AcquireMonitorExclusive@MONITOR_MGR@@SA?AVMONITOR_REF_LOCK_ACCESSOR@@PEAXI_N@Z @ 0x1400353BC (-AcquireMonitorExclusive@MONITOR_MGR@@SA-AVMONITOR_REF_LOCK_ACCESSOR@@PEAXI_N@Z.c)
 *     ??1MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x14003CD00 (--1MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 */

__int64 __fastcall MonitorSetScaleFactorOverride(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rbx
  __int64 v6; // rax
  _QWORD v8[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = (unsigned int)a2;
  v6 = WdLogNewEntry5_WdTrace(a1, a2);
  *(_QWORD *)(v6 + 24) = v4;
  *(_QWORD *)(v6 + 32) = a1;
  WdLogGlobalForLineNumber = 6609;
  if ( !a1 || (_DWORD)v4 == -1 )
    return 3221225485LL;
  MONITOR_MGR::AcquireMonitorExclusive(v8, a1, v4, 1u);
  if ( !v8[0] )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 6621;
    MONITOR_REF_LOCK_ACCESSOR::~MONITOR_REF_LOCK_ACCESSOR((MONITOR_REF_LOCK_ACCESSOR *)v8);
    return 3221225485LL;
  }
  *(_DWORD *)(v8[0] + 468LL) = a3;
  MONITOR_REF_LOCK_ACCESSOR::~MONITOR_REF_LOCK_ACCESSOR((MONITOR_REF_LOCK_ACCESSOR *)v8);
  return 0LL;
}
