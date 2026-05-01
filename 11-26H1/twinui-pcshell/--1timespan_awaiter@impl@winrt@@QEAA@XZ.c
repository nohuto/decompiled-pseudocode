/*
 * XREFs of ??1timespan_awaiter@impl@winrt@@QEAA@XZ @ 0x180329228
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::WindowTabHost::DelayedUpdateActivationTimestamp$_ResumeCoro$1 @ 0x180265020 (winrt--Windows--Internal--Shell--implementation--WindowTabHost--DelayedUpdateActivationTimestamp.c)
 *     _lambda_97aaaf7ef36fcdfc72e8e00c3e4f3247_$_ResumeCoro$1::operator() @ 0x180265950 (_lambda_97aaaf7ef36fcdfc72e8e00c3e4f3247_$_ResumeCoro$1--operator().c)
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowThumbnailAsync$_ResumeCoro$1 @ 0x1802668B0 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowThumbnailAsync$_Resume.c)
 *     winrt::Windows::Internal::Shell::implementation::WaitConfigurableDurationAsync$_ResumeCoro$1 @ 0x18027A580 (winrt--Windows--Internal--Shell--implementation--WaitConfigurableDurationAsync$_ResumeCoro$1.c)
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::SetGamingPostureStateAsync$_ResumeCoro$1 @ 0x18032DD20 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostureController--S.c)
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureSystemDialog::ShowAsync$_ResumeCoro$1 @ 0x1803391B0 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostureSystemDialog-.c)
 *     _lambda_939cc389e5d3bee984e430b9134c7b2f_$_ResumeCoro$1::operator() @ 0x180344000 (_lambda_939cc389e5d3bee984e430b9134c7b2f_$_ResumeCoro$1--operator().c)
 *     _lambda_9d9c0f7c90154d0f8adafe78b5b5a9cf_$_ResumeCoro$1::operator() @ 0x180344270 (_lambda_9d9c0f7c90154d0f8adafe78b5b5a9cf_$_ResumeCoro$1--operator().c)
 *     GamingOverlayExperienceManager::GameBarFseWarmLaunch$_ResumeCoro$1 @ 0x180347020 (GamingOverlayExperienceManager--GameBarFseWarmLaunch$_ResumeCoro$1.c)
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::DropDataOnUwpEndPointAsync$_ResumeCoro$1 @ 0x180579460 (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulatorComponent--.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::UpdateWidgetsTelemetryAsync$_ResumeCoro$1 @ 0x1805D9670 (winrt--Windows--Internal--Shell--implementation--DashboardManager--UpdateWidgetsTelemetryAsync$_.c)
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsyncWithRetry$_ResumeCoro$1 @ 0x180613180 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--BackupAppAsyncWithRetry$_Res.c)
 *     _lambda_a1bf07eabb51e841d7b59a4e813e5668_$_ResumeCoro$1::operator() @ 0x18063F280 (_lambda_a1bf07eabb51e841d7b59a4e813e5668_$_ResumeCoro$1--operator().c)
 *     winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::CloseCloudPCConnection$_ResumeCoro$1 @ 0x18066CF40 (winrt--Windows--Internal--Shell--implementation--SwitchConnectionHandler--CloseCloudPCConnection.c)
 *     _winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::SetGamingPostureStateAsync$_ResumeCoro$1_::_1_::dtor$42 @ 0x1806E2511 (_winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostur_ea_1806E2511.c)
 *     _winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::SetGamingPostureStateAsync$_ResumeCoro$1_::_1_::dtor$45 @ 0x1806E2543 (_winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostur_ea_1806E2543.c)
 *     _winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureSystemDialog::ShowAsync$_ResumeCoro$1_::_1_::dtor$10 @ 0x1806E34AF (_winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostur_ea_1806E34AF.c)
 *     __lambda_9d9c0f7c90154d0f8adafe78b5b5a9cf_$_ResumeCoro$1::operator()_::_1_::dtor$0 @ 0x1806E40A6 (__lambda_9d9c0f7c90154d0f8adafe78b5b5a9cf_$_ResumeCoro$1--operator()_--_1_--dtor$0.c)
 *     _GamingOverlayExperienceManager::GameBarFseWarmLaunch$_ResumeCoro$1_::_1_::dtor$1 @ 0x1806E41EA (_GamingOverlayExperienceManager--GameBarFseWarmLaunch$_ResumeCoro$1_--_1_--dtor$1.c)
 *     _winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::DropDataOnUwpEndPointAsync$_ResumeCoro$1_::_1_::dtor$2 @ 0x1806F5441 (_winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimula_ea_1806F5441.c)
 *     _winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::DropDataOnUwpEndPointAsync$_ResumeCoro$1_::_1_::dtor$3 @ 0x1806F5470 (_winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimula_ea_1806F5470.c)
 *     _winrt::Windows::Internal::Shell::implementation::WindowTabHost::DelayedUpdateActivationTimestamp$_ResumeCoro$1_::_1_::dtor$1 @ 0x1806F5B45 (_winrt--Windows--Internal--Shell--implementation--WindowTabHost--DelayedUpdateActiv_ea_1806F5B45.c)
 *     __lambda_97aaaf7ef36fcdfc72e8e00c3e4f3247_$_ResumeCoro$1::operator()_::_1_::dtor$0 @ 0x1806F5ECD (__lambda_97aaaf7ef36fcdfc72e8e00c3e4f3247_$_ResumeCoro$1--operator()_--_1_--dtor$0.c)
 *     _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowThumbnailAsync$_ResumeCoro$1_::_1_::dtor$4 @ 0x1806F6AE0 (_winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowThumbnai_ea_1806F6AE0.c)
 *     _winrt::Windows::Internal::Shell::implementation::DashboardManager::UpdateWidgetsTelemetryAsync$_ResumeCoro$1_::_1_::dtor$1 @ 0x1806FD38F (_winrt--Windows--Internal--Shell--implementation--DashboardManager--UpdateWidgetsTe_ea_1806FD38F.c)
 *     _winrt::Windows::Internal::Shell::implementation::WaitConfigurableDurationAsync$_ResumeCoro$1_::_1_::dtor$0 @ 0x1806FD812 (_winrt--Windows--Internal--Shell--implementation--WaitConfigurableDurationAsync$_ResumeCoro$1_--.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsyncWithRetry$_ResumeCoro$1_::_1_::dtor$4 @ 0x180701437 (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--BackupAppAsync_ea_180701437.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsyncWithRetry$_ResumeCoro$1_::_1_::dtor$8 @ 0x1807014E0 (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--BackupAppAsync_ea_1807014E0.c)
 *     __lambda_a1bf07eabb51e841d7b59a4e813e5668_$_ResumeCoro$1::operator()_::_1_::dtor$5 @ 0x1807036E0 (__lambda_a1bf07eabb51e841d7b59a4e813e5668_$_ResumeCoro$1--operator()_--_1_--dtor$5.c)
 *     _winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::CloseCloudPCConnection$_ResumeCoro$1_::_1_::dtor$7 @ 0x180705360 (_winrt--Windows--Internal--Shell--implementation--SwitchConnectionHandler--CloseClo_ea_180705360.c)
 * Callees:
 *     ?close@?$handle_type@Utimer_traits@timespan_awaiter@impl@winrt@@@winrt@@QEAAXXZ @ 0x180330C7C (-close@-$handle_type@Utimer_traits@timespan_awaiter@impl@winrt@@@winrt@@QEAAXXZ.c)
 */

void __fastcall winrt::impl::timespan_awaiter::~timespan_awaiter(winrt::cancellable_promise **this)
{
  winrt::handle_type<winrt::impl::timespan_awaiter::timer_traits>::close(this + 1);
  winrt::cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>::~cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>(this);
}
