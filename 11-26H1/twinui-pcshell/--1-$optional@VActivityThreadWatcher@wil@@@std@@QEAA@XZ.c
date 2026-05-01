/*
 * XREFs of ??1?$optional@VActivityThreadWatcher@wil@@@std@@QEAA@XZ @ 0x180328F68
 * Callers:
 *     _winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::SetGamingPostureStateAsync$_ResumeCoro$1_::_1_::dtor$1 @ 0x1806E21F1 (_winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostur_ea_1806E21F1.c)
 *     _GamingPosturePositioner::HandleViewRecovery_::_1_::dtor$7 @ 0x1806F23ED (_GamingPosturePositioner--HandleViewRecovery_--_1_--dtor$7.c)
 *     _GamingPosturePositioner::unsubscribe_from_services_::_1_::dtor$0 @ 0x1806F2682 (_GamingPosturePositioner--unsubscribe_from_services_--_1_--dtor$0.c)
 *     _GamingPosturePositioner::subscribe_to_services_::_1_::dtor$0 @ 0x1806F26BB (_GamingPosturePositioner--subscribe_to_services_--_1_--dtor$0.c)
 *     _GamingPosturePositioner::InitializePosition_::_1_::dtor$1 @ 0x1806F26CD (_GamingPosturePositioner--InitializePosition_--_1_--dtor$1.c)
 *     __lambda_ab57ea0a18b59054314f7ae3775d9ac6_::operator()_::_1_::dtor$2 @ 0x1806F2752 (__lambda_ab57ea0a18b59054314f7ae3775d9ac6_--operator()_--_1_--dtor$2.c)
 *     _GamingPosturePositioner::SetUwpViewFullScreen_::_1_::dtor$0 @ 0x1806F287B (_GamingPosturePositioner--SetUwpViewFullScreen_--_1_--dtor$0.c)
 *     _GamingPosturePositioner::OnShellTrackedWindowPosChanged_::_1_::dtor$0 @ 0x1806F28CA (_GamingPosturePositioner--OnShellTrackedWindowPosChanged_--_1_--dtor$0.c)
 *     _GamingPosturePositioner::ControlLost_::_1_::dtor$0 @ 0x1806F29A0 (_GamingPosturePositioner--ControlLost_--_1_--dtor$0.c)
 *     _GamingPosturePositioner::OnShowWindowPolicy_::_1_::dtor$1 @ 0x1806F29C4 (_GamingPosturePositioner--OnShowWindowPolicy_--_1_--dtor$1.c)
 *     _GamingPosturePositioner::HandleUwpApplicationView_::_1_::dtor$0 @ 0x1806F2C83 (_GamingPosturePositioner--HandleUwpApplicationView_--_1_--dtor$0.c)
 *     _GamingPosturePositioner::HandleViewRecovery_::_1_::dtor$0 @ 0x1806F2CD2 (_GamingPosturePositioner--HandleViewRecovery_--_1_--dtor$0.c)
 *     _GamingPosturePositioner::OnGamingPostureChanged_::_1_::dtor$0 @ 0x1806F2EC0 (_GamingPosturePositioner--OnGamingPostureChanged_--_1_--dtor$0.c)
 *     _winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::InstallForCurrentUserAsync$_ResumeCoro$1_::_1_::dtor$11 @ 0x1806FF679 (_winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--InstallForCur_ea_1806FF679.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::optional<wil::ActivityThreadWatcher>::~optional<wil::ActivityThreadWatcher>(
        wil::ActivityThreadWatcher *a1)
{
  std::_Optional_destruct_base<wil::ActivityThreadWatcher,0>::~_Optional_destruct_base<wil::ActivityThreadWatcher,0>(a1);
}
