/*
 * XREFs of ?MonitorGetSupportedHDRFlavors@@YAJPEAUHDXGMONITOR__@@PEAW4_DISPLAYCONFIG_HDR_FLAVOR@@@Z @ 0x14026F308
 * Callers:
 *     ?MonitorGetAdvancedColorParams@@YAJPEAUHDXGMONITOR__@@PEAUDISPLAY_COLORIMETRY_FLAGS_INTERNAL_IN@@PEAUDISPLAY_COLORIMETRY_INTERNAL@@PEAUDISPLAY_COLORIMETRY_FLAGS_INTERNAL_OUT@@@Z @ 0x1403D3F84 (-MonitorGetAdvancedColorParams@@YAJPEAUHDXGMONITOR__@@PEAUDISPLAY_COLORIMETRY_FLAGS_INTERNAL_IN@.c)
 * Callees:
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z @ 0x140035638 (-AcquireMonitorShared@MONITOR_MGR@@SA-AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z.c)
 *     ??1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x14003C96C (--1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 */

__int64 __fastcall MonitorGetSupportedHDRFlavors(struct HDXGMONITOR__ *a1, enum _DISPLAYCONFIG_HDR_FLAVOR *a2)
{
  unsigned int v3; // ebx
  _QWORD v5[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( a1 )
  {
    MONITOR_MGR::AcquireMonitorShared(v5, (__int64)a1);
    if ( v5[0] )
    {
      if ( a2 )
      {
        *(_DWORD *)a2 = *(_DWORD *)(*(_QWORD *)(v5[0] + 224LL) + 460LL);
        v3 = 0;
      }
      else
      {
        v3 = -1073741811;
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 5766;
      }
    }
    else
    {
      v3 = -1073741275;
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 5765;
    }
    CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v5);
  }
  else
  {
    v3 = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 5762;
  }
  return v3;
}
