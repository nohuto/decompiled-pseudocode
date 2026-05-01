/*
 * XREFs of ?await_suspend@awaitable@?1??resume_background@winrt@@YA@XZ@QEBAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x1801E6D48
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::FocusSessionComponent::InitializeAsync$_ResumeCoro$1 @ 0x180233090 (winrt--Windows--Internal--Shell--implementation--FocusSessionComponent--InitializeAsync$_ResumeC.c)
 *     winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::implementation::UseMrtShim_WASDK$_ResumeCoro$1 @ 0x180243100 (winrt--Windows--Internal--Shell--XamlExplorerHost--WASDK--implementation--UseMrtShim_WASDK$_Resu.c)
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowIconAsync$_ResumeCoro$1 @ 0x180266080 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowIconAsync$_ResumeCoro$.c)
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowThumbnailAsync$_ResumeCoro$1 @ 0x1802668B0 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowThumbnailAsync$_Resume.c)
 *     SnapInteraction::SendTelemetryAsync$_ResumeCoro$1 @ 0x180269630 (SnapInteraction--SendTelemetryAsync$_ResumeCoro$1.c)
 *     SnapFlyoutHost::HideAsync$_ResumeCoro$1 @ 0x1802699D0 (SnapFlyoutHost--HideAsync$_ResumeCoro$1.c)
 *     SnapFlyoutHost::ShowFlyoutAsync$_ResumeCoro$1 @ 0x18026A570 (SnapFlyoutHost--ShowFlyoutAsync$_ResumeCoro$1.c)
 *     SnapFlyoutHost::ShowSnapBarAsync$_ResumeCoro$1 @ 0x18026A7C0 (SnapFlyoutHost--ShowSnapBarAsync$_ResumeCoro$1.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::RaiseStartUpEvent$_ResumeCoro$1 @ 0x18026DAF0 (winrt--Windows--Internal--Shell--implementation--DashboardManager--RaiseStartUpEvent$_ResumeCoro.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::ShowDashboardAsync$_ResumeCoro$1 @ 0x180278C40 (winrt--Windows--Internal--Shell--implementation--DashboardManager--ShowDashboardAsync$_ResumeCor.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::VerifyAndActivateAppAsync$_ResumeCoro$1 @ 0x180279DE0 (winrt--Windows--Internal--Shell--implementation--DashboardManager--VerifyAndActivateAppAsync$_Re.c)
 *     CLauncherTipContextMenu::RunMigrationTasksAsyncHelper$_ResumeCoro$1 @ 0x18027B660 (CLauncherTipContextMenu--RunMigrationTasksAsyncHelper$_ResumeCoro$1.c)
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::CheckConfigurationPrerequisitesAsync$_ResumeCoro$1 @ 0x180329F20 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostureController--C.c)
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::InitializeGamingPostureStateAsync$_ResumeCoro$1 @ 0x18032C750 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostureController--I.c)
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::TryLaunchGamingAppAsync$_ResumeCoro$1 @ 0x18032F980 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostureController--T.c)
 *     winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____1_::cancel_asynchronously$_ResumeCoro$1 @ 0x180330AE0 (winrt--impl--await_adapter_winrt--Windows--Foundation--IAsyncOperation_winrt--Windows--Foundatio.c)
 *     winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncOperation_winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoCollection__1_::cancel_asynchronously$_ResumeCoro$1 @ 0x180330BB0 (winrt--impl--await_adapter_winrt--Windows--Foundation--IAsyncOperation_winrt--WindowsUdk--UI--Sh.c)
 *     GamingOverlayExperienceManager::GameBarFseWarmLaunch$_ResumeCoro$1 @ 0x180347020 (GamingOverlayExperienceManager--GameBarFseWarmLaunch$_ResumeCoro$1.c)
 *     GamingOverlayExperienceManager::UnregisterFromXusbConnectionEventsOnBackground$_ResumeCoro$1 @ 0x180355C10 (GamingOverlayExperienceManager--UnregisterFromXusbConnectionEventsOnBackground$_ResumeCoro$1.c)
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::SimulateDrop$_ResumeCoro$1 @ 0x18057ADF0 (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulat_ea_18057ADF0.c)
 *     winrt::Windows::Internal::Shell::implementation::WindowTabHost::InitializeDataAsync$_ResumeCoro$1 @ 0x18057E300 (winrt--Windows--Internal--Shell--implementation--WindowTabHost--InitializeDataAsync$_ResumeCoro$.c)
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetAndCreateIconFromGlyphAsync$_ResumeCoro$1 @ 0x180581FC0 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetAndCreateIconFromGlyphAsync$.c)
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowLivePreviewAsync$_ResumeCoro$1 @ 0x180582510 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowLivePreviewAsync$_Resu.c)
 *     TouchEdgeGripperHost::CreateGripperWindowAsync$_ResumeCoro$1 @ 0x180595910 (TouchEdgeGripperHost--CreateGripperWindowAsync$_ResumeCoro$1.c)
 *     TouchEdgeGripperHost::DismissGripperWindowAsync$_ResumeCoro$1 @ 0x180595DE0 (TouchEdgeGripperHost--DismissGripperWindowAsync$_ResumeCoro$1.c)
 *     TouchEdgeGripperHost::HideGripperAsync$_ResumeCoro$1 @ 0x1805962D0 (TouchEdgeGripperHost--HideGripperAsync$_ResumeCoro$1.c)
 *     TouchEdgeGripperHost::ShowGripperAsync$_ResumeCoro$1 @ 0x180596980 (TouchEdgeGripperHost--ShowGripperAsync$_ResumeCoro$1.c)
 *     SnapFlyoutHost::CreateSnapFlyoutInstanceAsync$_ResumeCoro$1 @ 0x1805B2A60 (SnapFlyoutHost--CreateSnapFlyoutInstanceAsync$_ResumeCoro$1.c)
 *     winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::LaunchSnappedWindowsInternalAsync$_ResumeCoro$1 @ 0x1805BA650 (winrt--Windows--Internal--Shell--SnapComponent--implementation--DesktopSnapLayoutManager--Launch.c)
 *     SnapAccessibilityHelpers::HandleWinShiftHotKeyNarratorAnnouncementsAsync$_ResumeCoro$1 @ 0x1805BEF10 (SnapAccessibilityHelpers--HandleWinShiftHotKeyNarratorAnnouncementsAsync$_ResumeCoro$1.c)
 *     winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::TryGetMaximizeButtonRectFromTitleBarInfoAsync$_ResumeCoro$1 @ 0x1805C2540 (winrt--Windows--Internal--Shell--SnapComponent--implementation--SnapFlyoutInstance--TryGetMaximi.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::DismissDashboardAsync$_ResumeCoro$1 @ 0x1805CEF40 (winrt--Windows--Internal--Shell--implementation--DashboardManager--DismissDashboardAsync$_Resume.c)
 *     LockScreenWidgetPackageHelperBase::InstallInboxedPackageAsync$_ResumeCoro$1 @ 0x1805D3610 (LockScreenWidgetPackageHelperBase--InstallInboxedPackageAsync$_ResumeCoro$1.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::RunWidgetCanvasDelayedInitializeAsync$_ResumeCoro$1 @ 0x1805D6690 (winrt--Windows--Internal--Shell--implementation--DashboardManager--RunWidgetCanvasDelayedInitial.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::StartWidgetsOverwatchAsync$_ResumeCoro$1 @ 0x1805D7800 (winrt--Windows--Internal--Shell--implementation--DashboardManager--StartWidgetsOverwatchAsync$_R.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::ToggleDashboardVisibilityAsync$_ResumeCoro$1 @ 0x1805D81C0 (winrt--Windows--Internal--Shell--implementation--DashboardManager--ToggleDashboardVisibilityAsyn.c)
 *     LockScreenWidgetPackageHelperBase::TryInstallStoreApplicationAsync$_ResumeCoro$1 @ 0x1805D8C60 (LockScreenWidgetPackageHelperBase--TryInstallStoreApplicationAsync$_ResumeCoro$1.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::TryUpdatePrelaunchSettingsAsync$_ResumeCoro$1 @ 0x1805D9500 (winrt--Windows--Internal--Shell--implementation--DashboardManager--TryUpdatePrelaunchSettingsAsy.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::UpdateWidgetsTelemetryAsync$_ResumeCoro$1 @ 0x1805D9670 (winrt--Windows--Internal--Shell--implementation--DashboardManager--UpdateWidgetsTelemetryAsync$_.c)
 *     ApplicationFlyoutView::Hide$_ResumeCoro$1 @ 0x1805FBE40 (ApplicationFlyoutView--Hide$_ResumeCoro$1.c)
 *     ApplicationFlyoutView::Show$_ResumeCoro$1 @ 0x1805FC8B0 (ApplicationFlyoutView--Show$_ResumeCoro$1.c)
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync$_ResumeCoro$1 @ 0x180612DA0 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--BackupAppAsync$_ResumeCoro$1.c)
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupDeviceMetaDataAsync$_ResumeCoro$1 @ 0x180613B80 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--BackupDeviceMetaDataAsync$_R.c)
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::InitializeAppBackupListenerAsync$_ResumeCoro$1 @ 0x180614CF0 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--InitializeAppBackupListenerA.c)
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileAdded$_ResumeCoro$1 @ 0x180615350 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--OnTileAdded$_ResumeCoro$1.c)
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileChanged$_ResumeCoro$1 @ 0x1806156E0 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--OnTileChanged$_ResumeCoro$1.c)
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileRemoved$_ResumeCoro$1 @ 0x180615980 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--OnTileRemoved$_ResumeCoro$1.c)
 *     _lambda_a1bf07eabb51e841d7b59a4e813e5668_$_ResumeCoro$1::operator() @ 0x18063F280 (_lambda_a1bf07eabb51e841d7b59a4e813e5668_$_ResumeCoro$1--operator().c)
 *     Util::TryOpenFileMappingAsStreamForWindowAsync$_ResumeCoro$1 @ 0x1806517D0 (Util--TryOpenFileMappingAsStreamForWindowAsync$_ResumeCoro$1.c)
 *     winrt::Windows::Internal::Shell::implementation::WindowsTracker::final_release$_ResumeCoro$1 @ 0x18065F530 (winrt--Windows--Internal--Shell--implementation--WindowsTracker--final_release$_ResumeCoro$1.c)
 *     winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::CloseCloudPCConnection$_ResumeCoro$1 @ 0x18066CF40 (winrt--Windows--Internal--Shell--implementation--SwitchConnectionHandler--CloseCloudPCConnection.c)
 *     XamlGamingTaskViewHost::CreateGamingTaskBarViewModelAsync$_ResumeCoro$1 @ 0x1806A0E50 (XamlGamingTaskViewHost--CreateGamingTaskBarViewModelAsync$_ResumeCoro$1.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall `winrt::resume_background'::`2'::awaitable::await_suspend(
        __int64 a1,
        void (*a2)(void *, void *),
        void *a3)
{
  return winrt::impl::submit_threadpool_callback((winrt::impl *)winrt::impl::resume_background_callback, a2, a3);
}
