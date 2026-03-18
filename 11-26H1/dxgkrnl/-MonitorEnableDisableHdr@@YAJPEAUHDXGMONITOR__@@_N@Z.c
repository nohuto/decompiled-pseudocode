/*
 * XREFs of ?MonitorEnableDisableHdr@@YAJPEAUHDXGMONITOR__@@_N@Z @ 0x14026E63C
 * Callers:
 *     DxgkIddHandleSetDisplayConfig @ 0x1401C7910 (DxgkIddHandleSetDisplayConfig.c)
 *     DxgkDisplayConfigDeviceInfoForAdapter @ 0x140435B30 (DxgkDisplayConfigDeviceInfoForAdapter.c)
 * Callees:
 *     ?AcquireMonitorExclusive@MONITOR_MGR@@SA?AVMONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z @ 0x1400354BC (-AcquireMonitorExclusive@MONITOR_MGR@@SA-AVMONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z.c)
 *     ??1MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x14003CD00 (--1MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     ?SetHdrEnabled@MonitorColorState@DxgMonitor@@QEAAJ_N@Z @ 0x14027D500 (-SetHdrEnabled@MonitorColorState@DxgMonitor@@QEAAJ_N@Z.c)
 */

__int64 __fastcall MonitorEnableDisableHdr(struct HDXGMONITOR__ *a1, char a2)
{
  unsigned int v3; // ebx
  DxgMonitor::MonitorColorState *v5; // rcx
  _QWORD v6[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( !a1 )
  {
    v3 = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 5675;
    return v3;
  }
  MONITOR_MGR::AcquireMonitorExclusive(v6, (__int64)a1);
  if ( !v6[0] )
  {
    v3 = -1073741275;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 5678;
LABEL_6:
    MONITOR_REF_LOCK_ACCESSOR::~MONITOR_REF_LOCK_ACCESSOR((MONITOR_REF_LOCK_ACCESSOR *)v6);
    return v3;
  }
  v5 = *(DxgMonitor::MonitorColorState **)(v6[0] + 224LL);
  if ( *((_BYTE *)v5 + 456) != a2 )
  {
    v3 = DxgMonitor::MonitorColorState::SetHdrEnabled(v5, a2);
    goto LABEL_6;
  }
  MONITOR_REF_LOCK_ACCESSOR::~MONITOR_REF_LOCK_ACCESSOR((MONITOR_REF_LOCK_ACCESSOR *)v6);
  return 255LL;
}
