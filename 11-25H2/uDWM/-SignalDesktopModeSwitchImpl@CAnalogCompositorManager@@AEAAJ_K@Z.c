/*
 * XREFs of ?SignalDesktopModeSwitchImpl@CAnalogCompositorManager@@AEAAJ_K@Z @ 0x1800894B0
 * Callers:
 *     ?SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z @ 0x180029EA8 (-SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAnalogCompositorManager::SignalDesktopModeSwitchImpl(CAnalogCompositorManager *this, __int64 a2)
{
  *((_QWORD *)this + 8) = a2;
  return CAnalogCompositorManager::UpdateHolographicLockState(this);
}
