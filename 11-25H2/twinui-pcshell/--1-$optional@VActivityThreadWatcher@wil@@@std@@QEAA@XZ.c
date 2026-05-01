/*
 * XREFs of ??1?$optional@VActivityThreadWatcher@wil@@@std@@QEAA@XZ @ 0x18032BC04
 * Callers:
 *     _winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::SetGamingPostureStateAsync$_ResumeCoro$1_::_1_::dtor$1 @ 0x1806BB1A6 (_winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostur_ea_1806BB1A6.c)
 *     _winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::InstallForCurrentUserAsync$_ResumeCoro$1_::_1_::dtor$11 @ 0x1806D73AC (_winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--InstallForCur_ea_1806D73AC.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::optional<wil::ActivityThreadWatcher>::~optional<wil::ActivityThreadWatcher>(
        wil::ActivityThreadWatcher *a1)
{
  std::_Optional_destruct_base<wil::ActivityThreadWatcher,0>::~_Optional_destruct_base<wil::ActivityThreadWatcher,0>(a1);
}
