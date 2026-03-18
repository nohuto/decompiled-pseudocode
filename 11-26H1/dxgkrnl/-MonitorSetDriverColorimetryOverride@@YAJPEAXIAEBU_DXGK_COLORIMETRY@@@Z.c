/*
 * XREFs of ?MonitorSetDriverColorimetryOverride@@YAJPEAXIAEBU_DXGK_COLORIMETRY@@@Z @ 0x14026FA38
 * Callers:
 *     DxgkIddHandleSetDisplayConfig @ 0x1401C7910 (DxgkIddHandleSetDisplayConfig.c)
 * Callees:
 *     ?AcquireMonitorExclusive@MONITOR_MGR@@SA?AVMONITOR_REF_LOCK_ACCESSOR@@PEAXI_N@Z @ 0x1400353BC (-AcquireMonitorExclusive@MONITOR_MGR@@SA-AVMONITOR_REF_LOCK_ACCESSOR@@PEAXI_N@Z.c)
 *     ??1MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x14003CD00 (--1MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     ?_SaveHDRParamDriverOverrides@MonitorColorState@DxgMonitor@@AEAAJAEBU_DXGK_COLORIMETRY@@@Z @ 0x14027DF74 (-_SaveHDRParamDriverOverrides@MonitorColorState@DxgMonitor@@AEAAJAEBU_DXGK_COLORIMETRY@@@Z.c)
 *     ?EdidSupportsHDR@MonitorColorState@DxgMonitor@@QEBA_NXZ @ 0x140363204 (-EdidSupportsHDR@MonitorColorState@DxgMonitor@@QEBA_NXZ.c)
 *     ?TriggerMonitorColorimetryChangedWnf@MonitorColorState@DxgMonitor@@AEAAJXZ @ 0x1403635A4 (-TriggerMonitorColorimetryChangedWnf@MonitorColorState@DxgMonitor@@AEAAJXZ.c)
 */

__int64 __fastcall MonitorSetDriverColorimetryOverride(__int64 a1, __int64 a2, const struct _DXGK_COLORIMETRY *a3)
{
  __int64 v4; // rbx
  __int64 v6; // rax
  unsigned int v7; // ebx
  DxgMonitor::MonitorColorState *v8; // rcx
  __int64 v9; // r9
  DxgMonitor::MonitorColorState *v11; // rcx
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = (unsigned int)a2;
  v6 = WdLogNewEntry5_WdTrace(a1, a2);
  *(_QWORD *)(v6 + 24) = v4;
  *(_QWORD *)(v6 + 32) = a1;
  WdLogGlobalForLineNumber = 6172;
  if ( !a1 || (_DWORD)v4 == -1 )
    return -1073741811LL;
  MONITOR_MGR::AcquireMonitorExclusive(v12, a1, v4, 0);
  if ( !v12[0] )
  {
    v7 = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 6184;
LABEL_8:
    MONITOR_REF_LOCK_ACCESSOR::~MONITOR_REF_LOCK_ACCESSOR((MONITOR_REF_LOCK_ACCESSOR *)v12);
    return v7;
  }
  if ( !DxgMonitor::MonitorColorState::EdidSupportsHDR(*(DxgMonitor::MonitorColorState **)(v12[0] + 224LL))
    && (*(_BYTE *)(v9 + 177) & 0x20) == 0 )
  {
    v7 = -1073741637;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 6186;
    goto LABEL_8;
  }
  DxgMonitor::MonitorColorState::_SaveHDRParamDriverOverrides(v8, a3);
  DxgMonitor::MonitorColorState::TriggerMonitorColorimetryChangedWnf(v11);
  MONITOR_REF_LOCK_ACCESSOR::~MONITOR_REF_LOCK_ACCESSOR((MONITOR_REF_LOCK_ACCESSOR *)v12);
  return 0LL;
}
