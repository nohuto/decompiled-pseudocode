/*
 * XREFs of ?MonitorSetDefaultAdvancedColorParams@@YAJPEAUHDXGMONITOR__@@@Z @ 0x140361CE4
 * Callers:
 *     DxgkDisplayConfigDeviceInfoForAdapter @ 0x140435B30 (DxgkDisplayConfigDeviceInfoForAdapter.c)
 * Callees:
 *     ?AcquireMonitorExclusive@MONITOR_MGR@@SA?AVMONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z @ 0x1400354BC (-AcquireMonitorExclusive@MONITOR_MGR@@SA-AVMONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z.c)
 *     ??1MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x14003CD00 (--1MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402CC050 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 *     ?ClearColorProfile@MonitorColorState@DxgMonitor@@QEAAJXZ @ 0x140361DC0 (-ClearColorProfile@MonitorColorState@DxgMonitor@@QEAAJXZ.c)
 */

__int64 __fastcall MonitorSetDefaultAdvancedColorParams(struct HDXGMONITOR__ *a1)
{
  __int64 v2; // rbx
  unsigned int v3; // edi
  __int64 v4; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v5[32]; // [rsp+28h] [rbp-20h] BYREF

  if ( !a1 )
    return 3221225485LL;
  MONITOR_MGR::AcquireMonitorExclusive(&v4, (__int64)a1);
  v2 = v4;
  if ( v4 )
  {
    v3 = DxgMonitor::MonitorColorState::ClearColorProfile(*(DxgMonitor::MonitorColorState **)(v4 + 224));
    ExReleaseResourceLite((PERESOURCE)(v2 + 40));
    KeLeaveCriticalRegion();
    v4 = 0LL;
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)v5);
    if ( v4 )
    {
      ExReleaseResourceLite((PERESOURCE)(v4 + 40));
      KeLeaveCriticalRegion();
    }
    return v3;
  }
  else
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 4099;
    MONITOR_REF_LOCK_ACCESSOR::~MONITOR_REF_LOCK_ACCESSOR((MONITOR_REF_LOCK_ACCESSOR *)&v4);
    return 3221226021LL;
  }
}
