/*
 * XREFs of ?OobeCompletedCallback@TouchKeyboardExperienceManager@@CAXPEAX@Z @ 0x1804634B0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateOobeRunningState@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1800EB7A0 (-UpdateOobeRunningState@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?UpdateSettingsLauncherAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1802A5C3C (-UpdateSettingsLauncherAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 */

void __fastcall TouchKeyboardExperienceManager::OobeCompletedCallback(TouchKeyboardExperienceManager *this)
{
  TouchKeyboardExperienceManager::UpdateSettingsLauncherAvailability(this);
  TouchKeyboardExperienceManager::UpdateOobeRunningState(this);
  if ( *((_QWORD *)this + 120) )
  {
    UnregisterWaitUntilOOBECompleted();
    *((_QWORD *)this + 120) = 0LL;
  }
}
