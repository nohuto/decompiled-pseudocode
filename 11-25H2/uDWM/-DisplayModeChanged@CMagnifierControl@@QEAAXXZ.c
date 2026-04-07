/*
 * XREFs of ?DisplayModeChanged@CMagnifierControl@@QEAAXXZ @ 0x180082720
 * Callers:
 *     ?SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z @ 0x18001C540 (-SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CMagnifierControl::DisplayModeChanged(CMagnifierControl *this)
{
  MagnifierExperienceHelper *v1; // rcx

  v1 = (MagnifierExperienceHelper *)*((_QWORD *)this + 20);
  if ( v1 )
    MagnifierExperienceHelper::UpdateDesktopAndMonitorTopologyInformation(v1);
}
