/*
 * XREFs of ?_SetLuminanceValuesToSDR@MonitorColorState@DxgMonitor@@AEAAXXZ @ 0x140416EE8
 * Callers:
 *     ?_ReevaluateColorAndLuminanceSources@MonitorColorState@DxgMonitor@@AEAA_NXZ @ 0x140362598 (-_ReevaluateColorAndLuminanceSources@MonitorColorState@DxgMonitor@@AEAA_NXZ.c)
 *     ?SendAdjustedHDRParamsToDriver@MonitorColorState@DxgMonitor@@QEAAJ_N@Z @ 0x1403633A8 (-SendAdjustedHDRParamsToDriver@MonitorColorState@DxgMonitor@@QEAAJ_N@Z.c)
 * Callees:
 *     ?SetLuminanceValuesWithBrightnessCompensation@MonitorColorState@DxgMonitor@@AEAAJK@Z @ 0x140416FA0 (-SetLuminanceValuesWithBrightnessCompensation@MonitorColorState@DxgMonitor@@AEAAJK@Z.c)
 */

void __fastcall DxgMonitor::MonitorColorState::_SetLuminanceValuesToSDR(DxgMonitor::MonitorColorState *this)
{
  __int128 v1; // xmm0

  *((_BYTE *)this + 360) = 1;
  *((_DWORD *)this + 92) = 2700000;
  *((_DWORD *)this + 93) = 2700000;
  *((_DWORD *)this + 91) = 5000;
  v1 = *(_OWORD *)((char *)this + 360);
  *((_DWORD *)this + 98) = 1;
  *(_OWORD *)((char *)this + 376) = v1;
  DxgMonitor::MonitorColorState::SetLuminanceValuesWithBrightnessCompensation(this, 0xFFFFFFFF);
}
