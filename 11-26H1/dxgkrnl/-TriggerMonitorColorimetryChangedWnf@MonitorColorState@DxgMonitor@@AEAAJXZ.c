/*
 * XREFs of ?TriggerMonitorColorimetryChangedWnf@MonitorColorState@DxgMonitor@@AEAAJXZ @ 0x1403635A4
 * Callers:
 *     ?MonitorSetDriverColorimetryOverride@@YAJPEAXIAEBU_DXGK_COLORIMETRY@@@Z @ 0x14026FA38 (-MonitorSetDriverColorimetryOverride@@YAJPEAXIAEBU_DXGK_COLORIMETRY@@@Z.c)
 *     ?OnExternalBrightnessNitsUpdated@MonitorColorState@DxgMonitor@@QEAAXIK@Z @ 0x14027CE9C (-OnExternalBrightnessNitsUpdated@MonitorColorState@DxgMonitor@@QEAAXIK@Z.c)
 *     ?SetSDRWhiteLevel@MonitorColorState@DxgMonitor@@QEAAJK@Z @ 0x14027D6E0 (-SetSDRWhiteLevel@MonitorColorState@DxgMonitor@@QEAAJK@Z.c)
 *     ?_ReevaluateColorAndLuminanceSources@MonitorColorState@DxgMonitor@@AEAA_NXZ @ 0x140362598 (-_ReevaluateColorAndLuminanceSources@MonitorColorState@DxgMonitor@@AEAA_NXZ.c)
 *     ?OnOutputColorspaceUpdated@MonitorColorState@DxgMonitor@@QEAAXXZ @ 0x14036338C (-OnOutputColorspaceUpdated@MonitorColorState@DxgMonitor@@QEAAXXZ.c)
 *     ?OnBrightnessNitsUpdated@MonitorColorState@DxgMonitor@@QEAAXIK@Z @ 0x140416F3C (-OnBrightnessNitsUpdated@MonitorColorState@DxgMonitor@@QEAAXIK@Z.c)
 *     ?SetLuminanceValuesWithBrightnessCompensation@MonitorColorState@DxgMonitor@@AEAAJK@Z @ 0x140416FA0 (-SetLuminanceValuesWithBrightnessCompensation@MonitorColorState@DxgMonitor@@AEAAJK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgMonitor::MonitorColorState::TriggerMonitorColorimetryChangedWnf(
        DxgMonitor::MonitorColorState *this)
{
  int updated; // ebx

  updated = ZwUpdateWnfStateData(&WNF_DX_DISPLAY_COLORIMETRY_DATA_CHANGED, 0LL, 0LL);
  if ( updated < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 2049;
  }
  return (unsigned int)updated;
}
