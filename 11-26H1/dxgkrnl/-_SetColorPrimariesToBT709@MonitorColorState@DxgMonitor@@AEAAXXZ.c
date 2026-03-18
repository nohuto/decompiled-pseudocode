/*
 * XREFs of ?_SetColorPrimariesToBT709@MonitorColorState@DxgMonitor@@AEAAXXZ @ 0x1404309CC
 * Callers:
 *     ?_ReevaluateColorAndLuminanceSources@MonitorColorState@DxgMonitor@@AEAA_NXZ @ 0x140362598 (-_ReevaluateColorAndLuminanceSources@MonitorColorState@DxgMonitor@@AEAA_NXZ.c)
 *     ?SendAdjustedHDRParamsToDriver@MonitorColorState@DxgMonitor@@QEAAJ_N@Z @ 0x1403633A8 (-SendAdjustedHDRParamsToDriver@MonitorColorState@DxgMonitor@@QEAAJ_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DxgMonitor::MonitorColorState::_SetColorPrimariesToBT709(DxgMonitor::MonitorColorState *this)
{
  *((_DWORD *)this + 60) = 670720;
  *((_DWORD *)this + 61) = 346112;
  *((_DWORD *)this + 62) = 314368;
  *((_DWORD *)this + 63) = 628736;
  *((_DWORD *)this + 64) = 157696;
  *((_DWORD *)this + 65) = 62464;
  *((_DWORD *)this + 66) = 327680;
  *((_DWORD *)this + 67) = 345088;
  *((_DWORD *)this + 68) = 1;
}
