/*
 * XREFs of ?MonitorSetSDRWhiteLevel@@YAJPEAUHDXGMONITOR__@@K@Z @ 0x14026FE6C
 * Callers:
 *     DxgkDisplayConfigDeviceInfoForAdapter @ 0x140435B30 (DxgkDisplayConfigDeviceInfoForAdapter.c)
 * Callees:
 *     ?AcquireMonitorExclusive@MONITOR_MGR@@SA?AVMONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z @ 0x1400354BC (-AcquireMonitorExclusive@MONITOR_MGR@@SA-AVMONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z.c)
 *     ??1MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x14003CD00 (--1MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     ?SetSDRWhiteLevel@MonitorColorState@DxgMonitor@@QEAAJK@Z @ 0x14027D6E0 (-SetSDRWhiteLevel@MonitorColorState@DxgMonitor@@QEAAJK@Z.c)
 *     ?EdidSupportsHDR@MonitorColorState@DxgMonitor@@QEBA_NXZ @ 0x140363204 (-EdidSupportsHDR@MonitorColorState@DxgMonitor@@QEBA_NXZ.c)
 */

__int64 __fastcall MonitorSetSDRWhiteLevel(struct HDXGMONITOR__ *a1, unsigned int a2)
{
  int v3; // ebx
  DxgMonitor::MonitorColorState *v4; // rcx
  _QWORD v6[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( a1 )
  {
    MONITOR_MGR::AcquireMonitorExclusive(v6, (__int64)a1);
    if ( v6[0] )
    {
      if ( DxgMonitor::MonitorColorState::EdidSupportsHDR(*(DxgMonitor::MonitorColorState **)(v6[0] + 224LL)) )
      {
        v3 = DxgMonitor::MonitorColorState::SetSDRWhiteLevel(v4, a2);
        if ( v3 >= 0 )
        {
          v3 = 0;
        }
        else
        {
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 6118;
        }
      }
      else
      {
        v3 = -1073741637;
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 6116;
      }
    }
    else
    {
      v3 = -1073741275;
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 6114;
    }
    MONITOR_REF_LOCK_ACCESSOR::~MONITOR_REF_LOCK_ACCESSOR((MONITOR_REF_LOCK_ACCESSOR *)v6);
  }
  else
  {
    v3 = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 6111;
  }
  return (unsigned int)v3;
}
