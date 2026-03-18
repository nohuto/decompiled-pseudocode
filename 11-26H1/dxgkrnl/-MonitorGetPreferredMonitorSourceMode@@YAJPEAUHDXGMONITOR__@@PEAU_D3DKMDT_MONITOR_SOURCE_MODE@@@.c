/*
 * XREFs of ?MonitorGetPreferredMonitorSourceMode@@YAJPEAUHDXGMONITOR__@@PEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x14034A20C
 * Callers:
 *     ?DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x140349074 (-DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z.c)
 * Callees:
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z @ 0x140035638 (-AcquireMonitorShared@MONITOR_MGR@@SA-AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z.c)
 *     ??1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x14003C96C (--1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     ?_GetPreferredMonitorSourceMode@MonitorModes@DxgMonitor@@QEBAJPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x14034A290 (-_GetPreferredMonitorSourceMode@MonitorModes@DxgMonitor@@QEBAJPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@.c)
 */

__int64 __fastcall MonitorGetPreferredMonitorSourceMode(
        struct HDXGMONITOR__ *a1,
        struct _D3DKMDT_MONITOR_SOURCE_MODE *a2)
{
  unsigned int PreferredMonitorSourceMode; // ebx
  _QWORD v5[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( !a1 || !a2 )
    return 3221225485LL;
  MONITOR_MGR::AcquireMonitorShared(v5, (__int64)a1);
  if ( v5[0] )
  {
    PreferredMonitorSourceMode = DxgMonitor::MonitorModes::_GetPreferredMonitorSourceMode(
                                   *(DxgMonitor::MonitorModes **)(v5[0] + 232LL),
                                   a2);
  }
  else
  {
    PreferredMonitorSourceMode = -1073741275;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 3171;
  }
  CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v5);
  return PreferredMonitorSourceMode;
}
