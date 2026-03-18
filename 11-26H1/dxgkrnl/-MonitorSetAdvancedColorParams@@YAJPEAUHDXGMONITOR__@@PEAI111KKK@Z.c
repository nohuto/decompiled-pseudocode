/*
 * XREFs of ?MonitorSetAdvancedColorParams@@YAJPEAUHDXGMONITOR__@@PEAI111KKK@Z @ 0x1404150BC
 * Callers:
 *     DxgkDisplayConfigDeviceInfoForAdapter @ 0x140435B30 (DxgkDisplayConfigDeviceInfoForAdapter.c)
 * Callees:
 *     ?AcquireMonitorExclusive@MONITOR_MGR@@SA?AVMONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z @ 0x1400354BC (-AcquireMonitorExclusive@MONITOR_MGR@@SA-AVMONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z.c)
 *     ??1MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x14003CD00 (--1MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     ?SetColorProfile@MonitorColorState@DxgMonitor@@QEAAJAEBUDISPLAY_COLOR_DATA_RAW@@KKK@Z @ 0x14027D480 (-SetColorProfile@MonitorColorState@DxgMonitor@@QEAAJAEBUDISPLAY_COLOR_DATA_RAW@@KKK@Z.c)
 */

__int64 __fastcall MonitorSetAdvancedColorParams(
        struct HDXGMONITOR__ *a1,
        unsigned int *a2,
        unsigned int *a3,
        unsigned int *a4,
        unsigned int *a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8)
{
  unsigned int v11; // ebx
  DxgMonitor::MonitorColorState *v13; // rcx
  _QWORD v14[3]; // [rsp+30h] [rbp-40h] BYREF
  _DWORD v15[10]; // [rsp+48h] [rbp-28h] BYREF

  if ( !a1
    || !a7
    || !a8
    || a8 > a7
    || a6 >= a7
    || a6 >= a8
    || !*a2 && !a2[1]
    || !*a3 && !a3[1]
    || !*a4 && !a4[1]
    || !*a5 && !a5[1]
    || (float)(int)(*a2 + a2[1]) > 1048576.0
    || (float)(int)(*a3 + a3[1]) > 1048576.0
    || (float)(int)(*a4 + a4[1]) > 1048576.0
    || (float)(int)(*a5 + a5[1]) > 1048576.0 )
  {
    return 3221225485LL;
  }
  MONITOR_MGR::AcquireMonitorExclusive(v14, (__int64)a1);
  if ( v14[0] )
  {
    v13 = *(DxgMonitor::MonitorColorState **)(v14[0] + 224LL);
    v15[0] = *a2;
    v15[1] = a2[1];
    v15[2] = *a3;
    v15[3] = a3[1];
    v15[4] = *a4;
    v15[5] = a4[1];
    v15[6] = *a5;
    v15[7] = a5[1];
    v11 = DxgMonitor::MonitorColorState::SetColorProfile(v13, (const struct DISPLAY_COLOR_DATA_RAW *)v15, a6, a7, a8);
  }
  else
  {
    v11 = -1073741275;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 4040;
  }
  MONITOR_REF_LOCK_ACCESSOR::~MONITOR_REF_LOCK_ACCESSOR((MONITOR_REF_LOCK_ACCESSOR *)v14);
  return v11;
}
