/*
 * XREFs of ?MonitorGetExternalBrightnessPolicy@@YAJPEAUHDXGMONITOR__@@PEA_N1PEAW4_DISPLAYCONFIG_HDR_BRIGHTNESS_MODE@@PEAW4_DISPLAYCONFIG_EXTERNAL_BRIGHTNESS_OEM_ENABLEMENT@@@Z @ 0x14026EF3C
 * Callers:
 *     DxgkDisplayConfigDeviceInfoForAdapter @ 0x140435B30 (DxgkDisplayConfigDeviceInfoForAdapter.c)
 * Callees:
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z @ 0x140035638 (-AcquireMonitorShared@MONITOR_MGR@@SA-AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z.c)
 *     ??1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x14003C96C (--1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     ?GetExternalBrightnessPolicy@MonitorColorState@DxgMonitor@@QEBAXAEA_N0AEAW4_DISPLAYCONFIG_EXTERNAL_BRIGHTNESS_OEM_ENABLEMENT@@@Z @ 0x14027C1F0 (-GetExternalBrightnessPolicy@MonitorColorState@DxgMonitor@@QEBAXAEA_N0AEAW4_DISPLAYCONFIG_EXTERN.c)
 */

__int64 __fastcall MonitorGetExternalBrightnessPolicy(
        struct HDXGMONITOR__ *a1,
        bool *a2,
        bool *a3,
        enum _DISPLAYCONFIG_HDR_BRIGHTNESS_MODE *a4,
        enum _DISPLAYCONFIG_EXTERNAL_BRIGHTNESS_OEM_ENABLEMENT *a5)
{
  unsigned int v8; // ebx
  __int64 v9; // rbx
  __int64 v10; // rdx
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( a1 )
  {
    MONITOR_MGR::AcquireMonitorShared(v12, (__int64)a1);
    v9 = v12[0];
    if ( v12[0] )
    {
      DxgMonitor::MonitorColorState::GetExternalBrightnessPolicy(
        *(DxgMonitor::MonitorColorState **)(v12[0] + 224LL),
        a2,
        a3,
        a5);
      v10 = *(_QWORD *)(v9 + 224);
      v8 = 0;
      *(_DWORD *)a4 = *(_DWORD *)(v10 + 524);
    }
    else
    {
      v8 = -1073741275;
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 6794;
    }
    CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v12);
  }
  else
  {
    v8 = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 6788;
  }
  return v8;
}
