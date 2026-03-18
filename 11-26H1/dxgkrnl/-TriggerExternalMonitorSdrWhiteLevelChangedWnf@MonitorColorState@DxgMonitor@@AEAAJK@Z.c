/*
 * XREFs of ?TriggerExternalMonitorSdrWhiteLevelChangedWnf@MonitorColorState@DxgMonitor@@AEAAJK@Z @ 0x14027D894
 * Callers:
 *     ?SetLuminanceValuesWithBrightnessCompensation@MonitorColorState@DxgMonitor@@AEAAJK@Z @ 0x140416FA0 (-SetLuminanceValuesWithBrightnessCompensation@MonitorColorState@DxgMonitor@@AEAAJK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgMonitor::MonitorColorState::TriggerExternalMonitorSdrWhiteLevelChangedWnf(
        DxgMonitor::MonitorColorState *this)
{
  int updated; // ebx

  updated = ZwUpdateWnfStateData(&WNF_DX_SDR_WHITE_LEVEL_CHANGED, 0LL, 0LL);
  if ( updated < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 2086;
  }
  return (unsigned int)updated;
}
