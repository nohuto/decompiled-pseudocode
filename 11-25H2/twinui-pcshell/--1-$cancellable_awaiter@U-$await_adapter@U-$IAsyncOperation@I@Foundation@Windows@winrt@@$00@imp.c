/*
 * XREFs of ??1?$cancellable_awaiter@U?$await_adapter@U?$IAsyncOperation@I@Foundation@Windows@winrt@@$00@impl@winrt@@@winrt@@QEAA@XZ @ 0x18032BAD8
 * Callers:
 *     CActionCenterExperienceManager::CreateDisplayMonitorInfoCollectionAsync$_ResumeCoro$1 @ 0x180246E60 (CActionCenterExperienceManager--CreateDisplayMonitorInfoCollectionAsync$_ResumeCoro$1.c)
 *     CToastCenterExperienceManager::RegisterForDisplayMonitorInfoChangedAsync$_ResumeCoro$1 @ 0x1802474E0 (CToastCenterExperienceManager--RegisterForDisplayMonitorInfoChangedAsync$_ResumeCoro$1.c)
 *     MultitaskingViewGestureHandler::CacheMonitorInfoCollectionAsync$_ResumeCoro$1 @ 0x18025A540 (MultitaskingViewGestureHandler--CacheMonitorInfoCollectionAsync$_ResumeCoro$1.c)
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowIconAsync$_ResumeCoro$1 @ 0x18026E2C0 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowIconAsync$_ResumeCoro$.c)
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowThumbnailAsync$_ResumeCoro$1 @ 0x18026EAC0 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowThumbnailAsync$_Resume.c)
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::TrySetWindowThumbnailAsync$_ResumeCoro$1 @ 0x18026EF70 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--TrySetWindowThumbnailAsync$_Res.c)
 *     winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::ShowFlyoutAsync$_ResumeCoro$1 @ 0x180274760 (winrt--Windows--Internal--Shell--SnapComponent--implementation--SnapFlyoutInstance-_ea_180274760.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::VerifyAndActivateAppAsync$_ResumeCoro$1 @ 0x180282C70 (winrt--Windows--Internal--Shell--implementation--DashboardManager--VerifyAndActivateAppAsync$_Re.c)
 *     TaskViewFrame::UpdateWorkAreaAsync$_ResumeCoro$1 @ 0x180285B50 (TaskViewFrame--UpdateWorkAreaAsync$_ResumeCoro$1.c)
 *     ??1?$await_adapter@U?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@QEAA@XZ @ 0x18032BACC (--1-$await_adapter@U-$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Window.c)
 *     ??1signal_awaiter@impl@winrt@@QEAA@XZ @ 0x18032BE28 (--1signal_awaiter@impl@winrt@@QEAA@XZ.c)
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::EnterGamingPostureAsync$_ResumeCoro$1 @ 0x18032D390 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPosture_ea_18032D390.c)
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::ExitGamingPostureAsync$_ResumeCoro$1 @ 0x18032D7D0 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPosture_ea_18032D7D0.c)
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::InitializeGamingPostureStateAsync$_ResumeCoro$1 @ 0x18032E5A0 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPosture_ea_18032E5A0.c)
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::SetGamingPostureStateAsync$_ResumeCoro$1 @ 0x18032F7A0 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPosture_ea_18032F7A0.c)
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::TryLaunchGamingAppAsync$_ResumeCoro$1 @ 0x180330A10 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPosture_ea_180330A10.c)
 *     ??1timespan_awaiter@impl@winrt@@QEAA@XZ @ 0x1803386D0 (--1timespan_awaiter@impl@winrt@@QEAA@XZ.c)
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureSystemDialog::ShowAsync$_ResumeCoro$1 @ 0x180339690 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPosture_ea_180339690.c)
 *     GamingOverlayExperienceManager::LaunchForResultsAsyncInternal$_ResumeCoro$1 @ 0x180348DF0 (GamingOverlayExperienceManager--LaunchForResultsAsyncInternal$_ResumeCoro$1.c)
 *     CStartExperienceManager::CreateDisplayMonitorInfoCollectionAsync$_ResumeCoro$1 @ 0x18037FF90 (CStartExperienceManager--CreateDisplayMonitorInfoCollectionAsync$_ResumeCoro$1.c)
 *     winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager::UpdateMonitorInfoCollectionAsync$_ResumeCoro$1 @ 0x1803E1000 (winrt--Windows--Internal--Shell--implementation--PenMenuSystemTrayManager--UpdateMo_ea_1803E1000.c)
 *     MultitaskingViewGestureHandler::InitiateSwipeDownAsync$_ResumeCoro$1 @ 0x18048B3C0 (MultitaskingViewGestureHandler--InitiateSwipeDownAsync$_ResumeCoro$1.c)
 *     _lambda_2b601edba18b4fdf43345f97c13ddcab_$_ResumeCoro$1::operator() @ 0x18048F410 (_lambda_2b601edba18b4fdf43345f97c13ddcab_$_ResumeCoro$1--operator().c)
 *     CAppThumbnailWindow::StartSwitchGestureOperationAsync$_ResumeCoro$1 @ 0x1804982C0 (CAppThumbnailWindow--StartSwitchGestureOperationAsync$_ResumeCoro$1.c)
 *     JointResize::EnsureTileCollectionAsync$_ResumeCoro$1 @ 0x1805159A0 (JointResize--EnsureTileCollectionAsync$_ResumeCoro$1.c)
 *     JointResize::TagViewWithLogoAsync$_ResumeCoro$1 @ 0x1805176A0 (JointResize--TagViewWithLogoAsync$_ResumeCoro$1.c)
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::InsertAsync$_ResumeCoro$1 @ 0x1805562C0 (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulat_ea_1805562C0.c)
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::IsSupportedAsync$_ResumeCoro$1 @ 0x180556620 (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulat_ea_180556620.c)
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::SimulateDrop$_ResumeCoro$1 @ 0x180556E70 (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulat_ea_180556E70.c)
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowLivePreviewAsync$_ResumeCoro$1 @ 0x18055E3A0 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowLivePreviewAsync$_Resu.c)
 *     winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::CalculateFlyoutBoundsAsync$_ResumeCoro$1 @ 0x18059D0C0 (winrt--Windows--Internal--Shell--SnapComponent--implementation--SnapFlyoutInstance-_ea_18059D0C0.c)
 *     LockScreenWidgetPackageHelperBase::GetVolumeToInstallPackageAsync$_ResumeCoro$1 @ 0x1805AEE70 (LockScreenWidgetPackageHelperBase--GetVolumeToInstallPackageAsync$_ResumeCoro$1.c)
 *     LockScreenWidgetPackageHelperBase::InstallInboxedPackageAsync$_ResumeCoro$1 @ 0x1805AF730 (LockScreenWidgetPackageHelperBase--InstallInboxedPackageAsync$_ResumeCoro$1.c)
 *     LockScreenWidgetPackageHelperBase::IsPackageVolumeSupportedForInstallAsync$_ResumeCoro$1 @ 0x1805B0B80 (LockScreenWidgetPackageHelperBase--IsPackageVolumeSupportedForInstallAsync$_ResumeCoro$1.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::StartWidgetsOverwatchAsync$_ResumeCoro$1 @ 0x1805B3AC0 (winrt--Windows--Internal--Shell--implementation--DashboardManager--StartWidgetsOverwatchAsync$_R.c)
 *     LockScreenWidgetPackageHelperBase::TryEnableVolumeForPackageInstallAsync$_ResumeCoro$1 @ 0x1805B4B40 (LockScreenWidgetPackageHelperBase--TryEnableVolumeForPackageInstallAsync$_ResumeCoro$1.c)
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$1_PinManagerTelemetry::PinManagerRequestPinItem_ @ 0x1805BB040 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAsync$_ResumeCo.c)
 *     _anonymous_namespace_::PinConsentPromptManager::RequestPinConsent$_ResumeCoro$1 @ 0x1805C4640 (_anonymous_namespace_--PinConsentPromptManager--RequestPinConsent$_ResumeCoro$1.c)
 *     winrt::Windows::Internal::Shell::implementation::PinManager::ShowPinDialog$_ResumeCoro$1 @ 0x1805C5200 (winrt--Windows--Internal--Shell--implementation--PinManager--ShowPinDialog$_ResumeCoro$1.c)
 *     winrt::Windows::Internal::Shell::implementation::MeetAndChatIris::GetFallbackContentAsync$_ResumeCoro$1 @ 0x1805D9310 (winrt--Windows--Internal--Shell--implementation--MeetAndChatIris--GetFallbackContentAsync$_Resum.c)
 *     winrt::Windows::Internal::Shell::implementation::MeetAndChatIris::ReportMeetAndChatUsage$_ResumeCoro$1 @ 0x1805D9AF0 (winrt--Windows--Internal--Shell--implementation--MeetAndChatIris--ReportMeetAndChatUsage$_Resume.c)
 *     winrt::Windows::Internal::Shell::implementation::MeetAndChatFallbackProp::LoadStreamAsync$_ResumeCoro$1 @ 0x1805DA000 (winrt--Windows--Internal--Shell--implementation--MeetAndChatFallbackProp--LoadStreamAsync$_Resum.c)
 *     CopilotHotkeyManager::LaunchCustomUriAsync$_ResumeCoro$1 @ 0x18060D8A0 (CopilotHotkeyManager--LaunchCustomUriAsync$_ResumeCoro$1.c)
 *     CopilotHotkeyManager::LaunchHardwareKeySettings$_ResumeCoro$1 @ 0x18060DB50 (CopilotHotkeyManager--LaunchHardwareKeySettings$_ResumeCoro$1.c)
 *     CopilotHotkeyManager::TrySendingCopilotHardwareKeyLongPressSignal$_ResumeCoro$1 @ 0x180610010 (CopilotHotkeyManager--TrySendingCopilotHardwareKeyLongPressSignal$_ResumeCoro$1.c)
 *     winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager::DismissContextMenu$_ResumeCoro$1 @ 0x180614F60 (winrt--Windows--Internal--Shell--implementation--ImeContextMenuManager--DismissContextMenu$_Resu.c)
 *     winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager::ShowContextMenu$_ResumeCoro$1 @ 0x1806151F0 (winrt--Windows--Internal--Shell--implementation--ImeContextMenuManager--ShowContextMenu$_ResumeC.c)
 *     Util::TryOpenFileMappingAsStreamForWindowAsync$_ResumeCoro$1 @ 0x18062BE80 (Util--TryOpenFileMappingAsStreamForWindowAsync$_ResumeCoro$1.c)
 *     winrt::Windows::Internal::Shell::implementation::WindowsTracker::final_release$_ResumeCoro$1 @ 0x180639AE0 (winrt--Windows--Internal--Shell--implementation--WindowsTracker--final_release$_ResumeCoro$1.c)
 * Callees:
 *     ?revoke_canceller@cancellable_promise@winrt@@QEAAXXZ @ 0x1803338A8 (-revoke_canceller@cancellable_promise@winrt@@QEAAXXZ.c)
 */

void __fastcall winrt::cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>::~cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>(
        winrt::cancellable_promise **a1)
{
  winrt::cancellable_promise *v1; // rcx

  v1 = *a1;
  if ( v1 )
    winrt::cancellable_promise::revoke_canceller(v1);
}
