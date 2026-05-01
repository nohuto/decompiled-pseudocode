/*
 * XREFs of ?reset@?$_Optional_destruct_base@VActivityThreadWatcher@wil@@$0A@@std@@QEAAXXZ @ 0x180333778
 * Callers:
 *     ??$emplace@VActivityThreadWatcher@wil@@@?$optional@VActivityThreadWatcher@wil@@@std@@QEAAAEAVActivityThreadWatcher@wil@@$$QEAV23@@Z @ 0x180329BD0 (--$emplace@VActivityThreadWatcher@wil@@@-$optional@VActivityThreadWatcher@wil@@@std@@QEAAAEAVAct.c)
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::SetGamingPostureStateAsync$_ResumeCoro$1 @ 0x18032F7A0 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPosture_ea_18032F7A0.c)
 *     winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::InstallForCurrentUserAsync$_ResumeCoro$1 @ 0x1805D1010 (winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--InstallForCurr_ea_1805D1010.c)
 * Callees:
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800D48C8 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 */

void __fastcall std::_Optional_destruct_base<wil::ActivityThreadWatcher,0>::reset(wil::ActivityThreadWatcher *a1)
{
  if ( *((_BYTE *)a1 + 72) )
  {
    wil::ActivityThreadWatcher::~ActivityThreadWatcher(a1);
    *((_BYTE *)a1 + 72) = 0;
  }
}
