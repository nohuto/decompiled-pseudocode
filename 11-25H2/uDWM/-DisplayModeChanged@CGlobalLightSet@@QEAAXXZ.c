/*
 * XREFs of ?DisplayModeChanged@CGlobalLightSet@@QEAAXXZ @ 0x180035138
 * Callers:
 *     ?SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z @ 0x18001C540 (-SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z.c)
 * Callees:
 *     ?PositionCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ @ 0x18003518C (-PositionCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CGlobalLightSet::DisplayModeChanged(CGlobalLightSet *this)
{
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  CGlobalLightSet::PositionCoordinateSpaceVisual(this);
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
}
