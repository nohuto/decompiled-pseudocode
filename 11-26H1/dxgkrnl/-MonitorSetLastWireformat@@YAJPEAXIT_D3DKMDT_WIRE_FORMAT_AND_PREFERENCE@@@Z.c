/*
 * XREFs of ?MonitorSetLastWireformat@@YAJPEAXIT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z @ 0x14026FD14
 * Callers:
 *     DxgkIddHandleSetDisplayConfig @ 0x1401C7910 (DxgkIddHandleSetDisplayConfig.c)
 * Callees:
 *     ?AcquireMonitorExclusive@MONITOR_MGR@@SA?AVMONITOR_REF_LOCK_ACCESSOR@@PEAXI_N@Z @ 0x1400353BC (-AcquireMonitorExclusive@MONITOR_MGR@@SA-AVMONITOR_REF_LOCK_ACCESSOR@@PEAXI_N@Z.c)
 *     ??1MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x14003CD00 (--1MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     ?SetLastWireformat@DXGMONITOR@@QEAAXT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z @ 0x1403632DC (-SetLastWireformat@DXGMONITOR@@QEAAXT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z.c)
 */

__int64 __fastcall MonitorSetLastWireformat(__int64 a1, unsigned int a2, union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE a3)
{
  DXGMONITOR *v5[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( !a1 || a2 == -1 )
    return 3221225485LL;
  MONITOR_MGR::AcquireMonitorExclusive(v5, a1, a2, 0);
  if ( v5[0] )
  {
    DXGMONITOR::SetLastWireformat(v5[0], a3);
    MONITOR_REF_LOCK_ACCESSOR::~MONITOR_REF_LOCK_ACCESSOR((MONITOR_REF_LOCK_ACCESSOR *)v5);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 6373;
    MONITOR_REF_LOCK_ACCESSOR::~MONITOR_REF_LOCK_ACCESSOR((MONITOR_REF_LOCK_ACCESSOR *)v5);
    return 3221226021LL;
  }
}
