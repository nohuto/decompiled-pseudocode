/*
 * XREFs of ?reset@?$_Optional_destruct_base@VActivityThreadWatcher@wil@@$0A@@std@@QEAAXXZ @ 0x180332EB4
 * Callers:
 *     ??$emplace@VActivityThreadWatcher@wil@@@?$optional@VActivityThreadWatcher@wil@@@std@@QEAAAEAVActivityThreadWatcher@wil@@$$QEAV23@@Z @ 0x180326550 (--$emplace@VActivityThreadWatcher@wil@@@-$optional@VActivityThreadWatcher@wil@@@std@@QEAAAEAVAct.c)
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::SetGamingPostureStateAsync$_ResumeCoro$1 @ 0x18032DD20 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostureController--S.c)
 *     winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::InstallForCurrentUserAsync$_ResumeCoro$1 @ 0x1805F5640 (winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--InstallForCurrentUserAsync$.c)
 * Callees:
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800B32E8 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 */

void __fastcall std::_Optional_destruct_base<wil::ActivityThreadWatcher,0>::reset(wil::ActivityThreadWatcher *a1)
{
  if ( *((_BYTE *)a1 + 72) )
  {
    wil::ActivityThreadWatcher::~ActivityThreadWatcher(a1);
    *((_BYTE *)a1 + 72) = 0;
  }
}
