/*
 * XREFs of ?_SetLuminanceValuesToHDR@MonitorColorState@DxgMonitor@@AEAAXXZ @ 0x14027E094
 * Callers:
 *     ?_ReevaluateColorAndLuminanceSources@MonitorColorState@DxgMonitor@@AEAA_NXZ @ 0x140362598 (-_ReevaluateColorAndLuminanceSources@MonitorColorState@DxgMonitor@@AEAA_NXZ.c)
 * Callees:
 *     ?SetLuminanceValuesWithBrightnessCompensation@MonitorColorState@DxgMonitor@@AEAAJK@Z @ 0x140416FA0 (-SetLuminanceValuesWithBrightnessCompensation@MonitorColorState@DxgMonitor@@AEAAJK@Z.c)
 */

void __fastcall DxgMonitor::MonitorColorState::_SetLuminanceValuesToHDR(DxgMonitor::MonitorColorState *this)
{
  __int128 v1; // xmm0

  *((_BYTE *)this + 360) = 1;
  *((_DWORD *)this + 91) = 100;
  *((_DWORD *)this + 92) = 14990000;
  *((_DWORD *)this + 93) = 7990000;
  v1 = *(_OWORD *)((char *)this + 360);
  *((_DWORD *)this + 98) = 3;
  *(_OWORD *)((char *)this + 376) = v1;
  DxgMonitor::MonitorColorState::SetLuminanceValuesWithBrightnessCompensation(this, 0xFFFFFFFF);
}
