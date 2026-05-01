/*
 * XREFs of ??0hresult_canceled@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x18031B410
 * Callers:
 *     ?check_status_canceled@impl@winrt@@YAXW4AsyncStatus@Foundation@Windows@2@@Z @ 0x18005CD48 (-check_status_canceled@impl@winrt@@YAXW4AsyncStatus@Foundation@Windows@2@@Z.c)
 *     winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::implementation::UseMrtShim_WASDK$_ResumeCoro$1 @ 0x18024EC20 (winrt--Windows--Internal--Shell--XamlExplorerHost--WASDK--implementation--UseMrtShim_WASDK$_Resu.c)
 *     winrt::when_any$_ResumeCoro$1_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference__winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference___ @ 0x18026D470 (winrt--when_any$_ResumeCoro$1_winrt--Windows--Foundation--IAsyncOperation_winrt--Windows--Storag.c)
 *     _lambda_97aaaf7ef36fcdfc72e8e00c3e4f3247_$_ResumeCoro$1::operator() @ 0x18026D840 (_lambda_97aaaf7ef36fcdfc72e8e00c3e4f3247_$_ResumeCoro$1--operator().c)
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::TrySetWindowThumbnailAsync$_ResumeCoro$1 @ 0x18026EF70 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--TrySetWindowThumbnailAsync$_Res.c)
 *     winrt::Windows::Internal::Shell::implementation::WaitConfigurableDurationAsync$_ResumeCoro$1 @ 0x180283480 (winrt--Windows--Internal--Shell--implementation--WaitConfigurableDurationAsync$_ResumeCoro$1.c)
 *     TaskViewFrame::UpdateWorkAreaAsync$_ResumeCoro$1 @ 0x180285B50 (TaskViewFrame--UpdateWorkAreaAsync$_ResumeCoro$1.c)
 *     ??$await_transform@Usignal_awaiter@impl@winrt@@@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@UValueSet@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@PEAVGamingOverlayExperienceManager@@Uhstring@4@U?$IMap@Uhstring@winrt@@U12@@Collections@234@@experimental@std@@U?$IAsyncOperation@UValueSet@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@X@impl@winrt@@QEAA$$QEAUsignal_awaiter@12@$$QEAU312@@Z @ 0x1803297DC (--$await_transform@Usignal_awaiter@impl@winrt@@@-$promise_base@Upromise_type@-$coroutine_traits@.c)
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::CheckConfigurationPrerequisitesAsync$_ResumeCoro$1 @ 0x18032CB20 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPosture_ea_18032CB20.c)
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::InitializeGamingPostureStateAsync$_ResumeCoro$1 @ 0x18032E5A0 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPosture_ea_18032E5A0.c)
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::SetGamingPostureStateAsync$_ResumeCoro$1 @ 0x18032F7A0 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPosture_ea_18032F7A0.c)
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::TryLaunchGamingAppAsync$_ResumeCoro$1 @ 0x180330A10 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPosture_ea_180330A10.c)
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::WaitForOobeToComplete$_ResumeCoro$1 @ 0x180331270 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPosture_ea_180331270.c)
 *     ?await_resume@signal_awaiter@impl@winrt@@QEAA_NXZ @ 0x1803318B8 (-await_resume@signal_awaiter@impl@winrt@@QEAA_NXZ.c)
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureSystemDialog::ShowAsync$_ResumeCoro$1 @ 0x180339690 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPosture_ea_180339690.c)
 *     ?await_resume@timespan_awaiter@impl@winrt@@QEAAXXZ @ 0x18033A418 (-await_resume@timespan_awaiter@impl@winrt@@QEAAXXZ.c)
 *     GamingOverlayExperienceManager::LaunchForResultsAsyncInternal$_ResumeCoro$1 @ 0x180348DF0 (GamingOverlayExperienceManager--LaunchForResultsAsyncInternal$_ResumeCoro$1.c)
 *     JointResize::EnsureTileCollectionAsync$_ResumeCoro$1 @ 0x1805159A0 (JointResize--EnsureTileCollectionAsync$_ResumeCoro$1.c)
 *     CVirtualDesktopManager::SwitchContextForVDAnimation$_ResumeCoro$1 @ 0x180533170 (CVirtualDesktopManager--SwitchContextForVDAnimation$_ResumeCoro$1.c)
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::SimulateDrop$_ResumeCoro$1 @ 0x180556E70 (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulat_ea_180556E70.c)
 *     SnapFlyoutHost::CreateSnapFlyoutInstanceAsync$_ResumeCoro$1 @ 0x18058E8F0 (SnapFlyoutHost--CreateSnapFlyoutInstanceAsync$_ResumeCoro$1.c)
 *     winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::CalculateFlyoutBoundsAsync$_ResumeCoro$1 @ 0x18059D0C0 (winrt--Windows--Internal--Shell--SnapComponent--implementation--SnapFlyoutInstance-_ea_18059D0C0.c)
 *     winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::TryGetMaximizeButtonRectFromTitleBarInfoAsync$_ResumeCoro$1 @ 0x18059E2D0 (winrt--Windows--Internal--Shell--SnapComponent--implementation--SnapFlyoutInstance-_ea_18059E2D0.c)
 *     LockScreenWidgetPackageHelperBase::GetVolumeToInstallPackageAsync$_ResumeCoro$1 @ 0x1805AEE70 (LockScreenWidgetPackageHelperBase--GetVolumeToInstallPackageAsync$_ResumeCoro$1.c)
 *     LockScreenWidgetPackageHelperBase::InstallInboxedPackageAsync$_ResumeCoro$1 @ 0x1805AF730 (LockScreenWidgetPackageHelperBase--InstallInboxedPackageAsync$_ResumeCoro$1.c)
 *     LockScreenWidgetPackageHelperBase::IsPackageVolumeSupportedForInstallAsync$_ResumeCoro$1 @ 0x1805B0B80 (LockScreenWidgetPackageHelperBase--IsPackageVolumeSupportedForInstallAsync$_ResumeCoro$1.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::StartWidgetsOverwatchAsync$_ResumeCoro$1 @ 0x1805B3AC0 (winrt--Windows--Internal--Shell--implementation--DashboardManager--StartWidgetsOverwatchAsync$_R.c)
 *     LockScreenWidgetPackageHelperBase::TryEnableVolumeForPackageInstallAsync$_ResumeCoro$1 @ 0x1805B4B40 (LockScreenWidgetPackageHelperBase--TryEnableVolumeForPackageInstallAsync$_ResumeCoro$1.c)
 *     LockScreenWidgetPackageHelperBase::TryInstallStoreApplicationAsync$_ResumeCoro$1 @ 0x1805B5220 (LockScreenWidgetPackageHelperBase--TryInstallStoreApplicationAsync$_ResumeCoro$1.c)
 *     winrt::Windows::Internal::Shell::implementation::WaitForShellDesktopSwitchEvent$_ResumeCoro$1 @ 0x1805B64D0 (winrt--Windows--Internal--Shell--implementation--WaitForShellDesktopSwitchEvent$_ResumeCoro$1.c)
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$1_PinManagerTelemetry::PinManagerRequestPinItem_ @ 0x1805BB040 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAsync$_ResumeCo.c)
 *     _anonymous_namespace_::PinConsentPromptManager::RequestPinConsent$_ResumeCoro$1 @ 0x1805C4640 (_anonymous_namespace_--PinConsentPromptManager--RequestPinConsent$_ResumeCoro$1.c)
 *     winrt::Windows::Internal::Shell::implementation::PinManager::ShowPinDialog$_ResumeCoro$1 @ 0x1805C5200 (winrt--Windows--Internal--Shell--implementation--PinManager--ShowPinDialog$_ResumeCoro$1.c)
 *     RequestNotificationPinConsentAsync$_ResumeCoro$1 @ 0x1805CC3C0 (RequestNotificationPinConsentAsync$_ResumeCoro$1.c)
 *     winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::InstallForCurrentUserAsync$_ResumeCoro$1 @ 0x1805D1010 (winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--InstallForCurr_ea_1805D1010.c)
 *     ApplicationFlyoutView::Hide$_ResumeCoro$1 @ 0x1805D7620 (ApplicationFlyoutView--Hide$_ResumeCoro$1.c)
 *     ApplicationFlyoutView::Show$_ResumeCoro$1 @ 0x1805D7E50 (ApplicationFlyoutView--Show$_ResumeCoro$1.c)
 *     winrt::Windows::Internal::Shell::implementation::MeetAndChatIris::GetFallbackContentAsync$_ResumeCoro$1 @ 0x1805D9310 (winrt--Windows--Internal--Shell--implementation--MeetAndChatIris--GetFallbackContentAsync$_Resum.c)
 *     winrt::Windows::Internal::Shell::implementation::MeetAndChatFallbackProp::LoadStreamAsync$_ResumeCoro$1 @ 0x1805DA000 (winrt--Windows--Internal--Shell--implementation--MeetAndChatFallbackProp--LoadStreamAsync$_Resum.c)
 *     CLauncherTipContextMenu::GetMenuItemsAsyncHelper$_ResumeCoro$1 @ 0x1805DD240 (CLauncherTipContextMenu--GetMenuItemsAsyncHelper$_ResumeCoro$1.c)
 *     CopilotHotkeyManager::LaunchHardwareKeySettings$_ResumeCoro$1 @ 0x18060DB50 (CopilotHotkeyManager--LaunchHardwareKeySettings$_ResumeCoro$1.c)
 *     Util::TryOpenFileMappingAsStreamForWindowAsync$_ResumeCoro$1 @ 0x18062BE80 (Util--TryOpenFileMappingAsStreamForWindowAsync$_ResumeCoro$1.c)
 *     winrt::Windows::Internal::Shell::implementation::WindowsTracker::SetEventHookForWindowAsync$_ResumeCoro$1 @ 0x1806390E0 (winrt--Windows--Internal--Shell--implementation--WindowsTracker--SetEventHookForWindowAsync$_Res.c)
 *     winrt::Windows::Internal::Shell::implementation::WindowsTracker::UnhookEventForAllWindowsAsync$_ResumeCoro$1 @ 0x180639540 (winrt--Windows--Internal--Shell--implementation--WindowsTracker--UnhookEventForAllW_ea_180639540.c)
 * Callees:
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@AEBUslim_source_location@impl@1@@Z @ 0x18031B438 (--0hresult_error@winrt@@QEAA@Uhresult@1@AEBUslim_source_location@impl@1@@Z.c)
 */

winrt::hresult_canceled *__fastcall winrt::hresult_canceled::hresult_canceled(
        winrt::hresult_canceled *this,
        const struct winrt::impl::slim_source_location *a2)
{
  winrt::hresult_error::hresult_error(this, (unsigned int)winrt::impl::error_canceled, a2);
  return this;
}
