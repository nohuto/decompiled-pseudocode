/*
 * XREFs of ?MonitorSetSDRWhiteLevelOverride@@YAJPEAXIK@Z @ 0x14026FF60
 * Callers:
 *     DxgkIddHandleSetDisplayConfig @ 0x1401C7910 (DxgkIddHandleSetDisplayConfig.c)
 * Callees:
 *     ?AcquireMonitorExclusive@MONITOR_MGR@@SA?AVMONITOR_REF_LOCK_ACCESSOR@@PEAXI_N@Z @ 0x1400353BC (-AcquireMonitorExclusive@MONITOR_MGR@@SA-AVMONITOR_REF_LOCK_ACCESSOR@@PEAXI_N@Z.c)
 *     ??1MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x14003CD00 (--1MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     TriggerSDRWhiteLevelChangedWnf @ 0x1401D0690 (TriggerSDRWhiteLevelChangedWnf.c)
 *     ?HasDescriptor@DXGMONITOR@@UEBA_NXZ @ 0x140276130 (-HasDescriptor@DXGMONITOR@@UEBA_NXZ.c)
 *     ?SetSDRWhiteLevel@MonitorColorState@DxgMonitor@@QEAAJK@Z @ 0x14027D6E0 (-SetSDRWhiteLevel@MonitorColorState@DxgMonitor@@QEAAJK@Z.c)
 *     ?EdidSupportsHDR@MonitorColorState@DxgMonitor@@QEBA_NXZ @ 0x140363204 (-EdidSupportsHDR@MonitorColorState@DxgMonitor@@QEBA_NXZ.c)
 */

__int64 __fastcall MonitorSetSDRWhiteLevelOverride(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rbx
  __int64 v6; // rax
  __int64 v7; // rbx
  int v8; // ebx
  _QWORD v10[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = (unsigned int)a2;
  v6 = WdLogNewEntry5_WdTrace(a1, a2);
  *(_QWORD *)(v6 + 24) = v4;
  *(_QWORD *)(v6 + 32) = a1;
  WdLogGlobalForLineNumber = 6134;
  if ( !a1 || (_DWORD)v4 == -1 )
    return -1073741811LL;
  MONITOR_MGR::AcquireMonitorExclusive(v10, a1, v4, 0);
  v7 = v10[0];
  if ( !v10[0] )
  {
    v8 = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 6146;
LABEL_11:
    MONITOR_REF_LOCK_ACCESSOR::~MONITOR_REF_LOCK_ACCESSOR((MONITOR_REF_LOCK_ACCESSOR *)v10);
    return (unsigned int)v8;
  }
  if ( !DxgMonitor::MonitorColorState::EdidSupportsHDR(*(DxgMonitor::MonitorColorState **)(v10[0] + 224LL))
    && ((*(_BYTE *)(v7 + 177) & 0x20) == 0 || DXGMONITOR::HasDescriptor((DXGMONITOR *)(v7 + 16))) )
  {
    v8 = -1073741637;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 6152;
    goto LABEL_11;
  }
  v8 = DxgMonitor::MonitorColorState::SetSDRWhiteLevel(*(DxgMonitor::MonitorColorState **)(v7 + 224), 1000 * a3 / 0x50u);
  if ( v8 < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 6154;
    goto LABEL_11;
  }
  TriggerSDRWhiteLevelChangedWnf();
  MONITOR_REF_LOCK_ACCESSOR::~MONITOR_REF_LOCK_ACCESSOR((MONITOR_REF_LOCK_ACCESSOR *)v10);
  return 0LL;
}
