/*
 * XREFs of ?MonitorSetPhysicalSizeOverride@@YAJPEAXIII@Z @ 0x14026FDA0
 * Callers:
 *     DxgkIddHandleSetDisplayConfig @ 0x1401C7910 (DxgkIddHandleSetDisplayConfig.c)
 * Callees:
 *     ?AcquireMonitorExclusive@MONITOR_MGR@@SA?AVMONITOR_REF_LOCK_ACCESSOR@@PEAXI_N@Z @ 0x1400353BC (-AcquireMonitorExclusive@MONITOR_MGR@@SA-AVMONITOR_REF_LOCK_ACCESSOR@@PEAXI_N@Z.c)
 *     ??1MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x14003CD00 (--1MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 */

__int64 __fastcall MonitorSetPhysicalSizeOverride(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v5; // rbx
  __int64 v8; // rax
  __int64 v9; // rax
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF

  v5 = (unsigned int)a2;
  v8 = WdLogNewEntry5_WdTrace(a1, a2);
  *(_QWORD *)(v8 + 24) = v5;
  *(_QWORD *)(v8 + 32) = a1;
  WdLogGlobalForLineNumber = 6661;
  if ( !a1 || (_DWORD)v5 == -1 )
    return 3221225485LL;
  MONITOR_MGR::AcquireMonitorExclusive(v11, a1, v5, 0);
  v9 = v11[0];
  if ( !v11[0] )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 6673;
    MONITOR_REF_LOCK_ACCESSOR::~MONITOR_REF_LOCK_ACCESSOR((MONITOR_REF_LOCK_ACCESSOR *)v11);
    return 3221225485LL;
  }
  *(_DWORD *)(v11[0] + 472LL) = a3;
  *(_DWORD *)(v9 + 476) = a4;
  MONITOR_REF_LOCK_ACCESSOR::~MONITOR_REF_LOCK_ACCESSOR((MONITOR_REF_LOCK_ACCESSOR *)v11);
  return 0LL;
}
