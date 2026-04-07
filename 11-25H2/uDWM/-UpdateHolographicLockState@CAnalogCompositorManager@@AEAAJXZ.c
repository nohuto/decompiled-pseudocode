/*
 * XREFs of ?UpdateHolographicLockState@CAnalogCompositorManager@@AEAAJXZ @ 0x18007CA88
 * Callers:
 *     ?SignalDesktopModeSwitchImpl@CAnalogCompositorManager@@AEAAJ_K@Z @ 0x1800894B0 (-SignalDesktopModeSwitchImpl@CAnalogCompositorManager@@AEAAJ_K@Z.c)
 *     ?ToggleLockBackstopImpl@CAnalogCompositorManager@@AEAAJ_N@Z @ 0x1800978B8 (-ToggleLockBackstopImpl@CAnalogCompositorManager@@AEAAJ_N@Z.c)
 * Callees:
 *     ?IsLogonDesktop@CDesktopManager@@SA_N_K@Z @ 0x18001D434 (-IsLogonDesktop@CDesktopManager@@SA_N_K@Z.c)
 */

__int64 __fastcall CAnalogCompositorManager::UpdateHolographicLockState(CAnalogCompositorManager *this)
{
  bool v1; // bl
  __int64 v2; // rcx

  v1 = 0;
  if ( *((_BYTE *)this + 72) || (v2 = *((_QWORD *)this + 8)) != 0 && CDesktopManager::IsLogonDesktop(v2) )
    v1 = 1;
  return CCompositor::PartitionToggleHolographicSuspension(
           *((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6),
           v1);
}
