/*
 * XREFs of ?await_resume@apartment_awaiter@impl@winrt@@QEBAXXZ @ 0x180237340
 * Callers:
 *     CToastCenterExperienceManager::OnDisplayMonitorInfoChangedAsync$_ResumeCoro$1 @ 0x180239510 (CToastCenterExperienceManager--OnDisplayMonitorInfoChangedAsync$_ResumeCoro$1.c)
 *     CStartExperienceManager::OnDisplayMonitorInfoChangedAsync$_ResumeCoro$1 @ 0x18023A330 (CStartExperienceManager--OnDisplayMonitorInfoChangedAsync$_ResumeCoro$1.c)
 *     XamlLauncher::LauncherShowRequested$_ResumeCoro$1 @ 0x180243FD0 (XamlLauncher--LauncherShowRequested$_ResumeCoro$1.c)
 *     XamlLauncher::SearchDismissRequested$_ResumeCoro$1 @ 0x180244FA0 (XamlLauncher--SearchDismissRequested$_ResumeCoro$1.c)
 *     XamlLauncher::SearchShowRequested$_ResumeCoro$1 @ 0x1802452C0 (XamlLauncher--SearchShowRequested$_ResumeCoro$1.c)
 *     CMultitaskingViewManager::ShowRequestedVirtualDesktopSwitcher$_ResumeCoro$1 @ 0x180253BA0 (CMultitaskingViewManager--ShowRequestedVirtualDesktopSwitcher$_ResumeCoro$1.c)
 *     winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::ShowFlyoutAsync$_ResumeCoro$1 @ 0x18026C6B0 (winrt--Windows--Internal--Shell--SnapComponent--implementation--SnapFlyoutInstance--ShowFlyoutAs.c)
 *     CActionCenterExperienceManager::DismissRequested$_ResumeCoro$1 @ 0x180364E40 (CActionCenterExperienceManager--DismissRequested$_ResumeCoro$1.c)
 *     CActionCenterExperienceManager::ShowRequested$_ResumeCoro$1 @ 0x180367D70 (CActionCenterExperienceManager--ShowRequested$_ResumeCoro$1.c)
 *     CJumpViewExperienceManager::DismissRequested$_ResumeCoro$1 @ 0x18038C430 (CJumpViewExperienceManager--DismissRequested$_ResumeCoro$1.c)
 *     CVirtualTouchpadExperienceManager::DismissRequested$_ResumeCoro$1 @ 0x180396DC0 (CVirtualTouchpadExperienceManager--DismissRequested$_ResumeCoro$1.c)
 *     CVirtualTouchpadExperienceManager::ShowRequested$_ResumeCoro$1 @ 0x180398B00 (CVirtualTouchpadExperienceManager--ShowRequested$_ResumeCoro$1.c)
 *     XamlLauncher::LauncherDismissRequested$_ResumeCoro$1 @ 0x18045B890 (XamlLauncher--LauncherDismissRequested$_ResumeCoro$1.c)
 *     MultitaskingViewGestureHandler::TeardownThumbnailsAsync$_ResumeCoro$1 @ 0x18049D6F0 (MultitaskingViewGestureHandler--TeardownThumbnailsAsync$_ResumeCoro$1.c)
 *     CMultitaskingViewManager::DismissRequested$_ResumeCoro$1 @ 0x1804A02D0 (CMultitaskingViewManager--DismissRequested$_ResumeCoro$1.c)
 *     CMultitaskingViewManager::DismissRequestedVirtualDesktopSwitcher$_ResumeCoro$1 @ 0x1804A0570 (CMultitaskingViewManager--DismissRequestedVirtualDesktopSwitcher$_ResumeCoro$1.c)
 *     CMultitaskingViewManager::ShowRequested$_ResumeCoro$1 @ 0x1804A1120 (CMultitaskingViewManager--ShowRequested$_ResumeCoro$1.c)
 *     CVirtualDesktopManager::SwitchContextForVDAnimation$_ResumeCoro$1 @ 0x180556B10 (CVirtualDesktopManager--SwitchContextForVDAnimation$_ResumeCoro$1.c)
 *     TouchEdgeGripperHost::NotifyGripperDismissedIfNecessaryAsync$_ResumeCoro$1 @ 0x180596610 (TouchEdgeGripperHost--NotifyGripperDismissedIfNecessaryAsync$_ResumeCoro$1.c)
 *     TouchEdgeGripperHost::NotifyGripperPressedAsync$_ResumeCoro$1 @ 0x1805967D0 (TouchEdgeGripperHost--NotifyGripperPressedAsync$_ResumeCoro$1.c)
 *     _lambda_3415c00afb736d6d54203eb8c7c58983_$_ResumeCoro$1::operator() @ 0x18059E070 (_lambda_3415c00afb736d6d54203eb8c7c58983_$_ResumeCoro$1--operator().c)
 *     _lambda_190ccd1a8be9aac816201cee4203407b_$_ResumeCoro$1::operator() @ 0x180600B80 (_lambda_190ccd1a8be9aac816201cee4203407b_$_ResumeCoro$1--operator().c)
 *     _lambda_d6b4118795ae303e935bbd5b6ca0014f_$_ResumeCoro$1::operator() @ 0x180601070 (_lambda_d6b4118795ae303e935bbd5b6ca0014f_$_ResumeCoro$1--operator().c)
 *     CLauncherTipContextMenu::GetMenuItemsAsyncHelper$_ResumeCoro$1 @ 0x180601CC0 (CLauncherTipContextMenu--GetMenuItemsAsyncHelper$_ResumeCoro$1.c)
 *     XamlGamingTaskViewHost::CreateGamingTaskBarViewModelAsync$_ResumeCoro$1 @ 0x1806A0E50 (XamlGamingTaskViewHost--CreateGamingTaskBarViewModelAsync$_ResumeCoro$1.c)
 *     VirtualDesktopSwitcherHost::DismissAsync$_ResumeCoro$1 @ 0x1806ADAD0 (VirtualDesktopSwitcherHost--DismissAsync$_ResumeCoro$1.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 */

void __fastcall winrt::impl::apartment_awaiter::await_resume(winrt::impl::apartment_awaiter *this)
{
  __int64 v1; // rdx
  int v2; // [rsp+20h] [rbp-28h] BYREF
  __int128 v3; // [rsp+28h] [rbp-20h]
  __int64 v4; // [rsp+50h] [rbp+8h] BYREF

  v1 = *((unsigned int *)this + 2);
  v2 = 0;
  v3 = 0LL;
  winrt::check_hresult(&v4, v1, &v2);
}
