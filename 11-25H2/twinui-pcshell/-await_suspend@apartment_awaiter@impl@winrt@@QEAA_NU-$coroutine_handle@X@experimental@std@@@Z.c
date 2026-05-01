/*
 * XREFs of ?await_suspend@apartment_awaiter@impl@winrt@@QEAA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x180352F78
 * Callers:
 *     CToastCenterExperienceManager::OnDisplayMonitorInfoChangedAsync$_ResumeCoro$1 @ 0x180247340 (CToastCenterExperienceManager--OnDisplayMonitorInfoChangedAsync$_ResumeCoro$1.c)
 *     CStartExperienceManager::OnDisplayMonitorInfoChangedAsync$_ResumeCoro$1 @ 0x180247BA0 (CStartExperienceManager--OnDisplayMonitorInfoChangedAsync$_ResumeCoro$1.c)
 *     XamlLauncher::LauncherShowRequested$_ResumeCoro$1 @ 0x18024FA80 (XamlLauncher--LauncherShowRequested$_ResumeCoro$1.c)
 *     XamlLauncher::SearchDismissRequested$_ResumeCoro$1 @ 0x1802509D0 (XamlLauncher--SearchDismissRequested$_ResumeCoro$1.c)
 *     XamlLauncher::SearchShowRequested$_ResumeCoro$1 @ 0x180250D60 (XamlLauncher--SearchShowRequested$_ResumeCoro$1.c)
 *     CMultitaskingViewManager::ShowRequestedVirtualDesktopSwitcher$_ResumeCoro$1 @ 0x18025AA30 (CMultitaskingViewManager--ShowRequestedVirtualDesktopSwitcher$_ResumeCoro$1.c)
 *     winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::ShowFlyoutAsync$_ResumeCoro$1 @ 0x180274760 (winrt--Windows--Internal--Shell--SnapComponent--implementation--SnapFlyoutInstance-_ea_180274760.c)
 *     CActionCenterExperienceManager::DismissRequested$_ResumeCoro$1 @ 0x18035E080 (CActionCenterExperienceManager--DismissRequested$_ResumeCoro$1.c)
 *     CActionCenterExperienceManager::ShowRequested$_ResumeCoro$1 @ 0x180360D40 (CActionCenterExperienceManager--ShowRequested$_ResumeCoro$1.c)
 *     CJumpViewExperienceManager::DismissRequested$_ResumeCoro$1 @ 0x180385560 (CJumpViewExperienceManager--DismissRequested$_ResumeCoro$1.c)
 *     CVirtualTouchpadExperienceManager::DismissRequested$_ResumeCoro$1 @ 0x18038FAF0 (CVirtualTouchpadExperienceManager--DismissRequested$_ResumeCoro$1.c)
 *     CVirtualTouchpadExperienceManager::ShowRequested$_ResumeCoro$1 @ 0x1803918D0 (CVirtualTouchpadExperienceManager--ShowRequested$_ResumeCoro$1.c)
 *     XamlLauncher::LauncherDismissRequested$_ResumeCoro$1 @ 0x18044EE40 (XamlLauncher--LauncherDismissRequested$_ResumeCoro$1.c)
 *     MultitaskingViewGestureHandler::TeardownThumbnailsAsync$_ResumeCoro$1 @ 0x18048CB40 (MultitaskingViewGestureHandler--TeardownThumbnailsAsync$_ResumeCoro$1.c)
 *     CMultitaskingViewManager::DismissRequested$_ResumeCoro$1 @ 0x18048F740 (CMultitaskingViewManager--DismissRequested$_ResumeCoro$1.c)
 *     CMultitaskingViewManager::DismissRequestedVirtualDesktopSwitcher$_ResumeCoro$1 @ 0x18048FA40 (CMultitaskingViewManager--DismissRequestedVirtualDesktopSwitcher$_ResumeCoro$1.c)
 *     CMultitaskingViewManager::ShowRequested$_ResumeCoro$1 @ 0x180490660 (CMultitaskingViewManager--ShowRequested$_ResumeCoro$1.c)
 *     CVirtualDesktopManager::SwitchContextForVDAnimation$_ResumeCoro$1 @ 0x180533170 (CVirtualDesktopManager--SwitchContextForVDAnimation$_ResumeCoro$1.c)
 *     TouchEdgeGripperHost::NotifyGripperDismissedIfNecessaryAsync$_ResumeCoro$1 @ 0x180572F60 (TouchEdgeGripperHost--NotifyGripperDismissedIfNecessaryAsync$_ResumeCoro$1.c)
 *     TouchEdgeGripperHost::NotifyGripperPressedAsync$_ResumeCoro$1 @ 0x180573180 (TouchEdgeGripperHost--NotifyGripperPressedAsync$_ResumeCoro$1.c)
 *     _lambda_3415c00afb736d6d54203eb8c7c58983_$_ResumeCoro$1::operator() @ 0x18057A930 (_lambda_3415c00afb736d6d54203eb8c7c58983_$_ResumeCoro$1--operator().c)
 *     _lambda_190ccd1a8be9aac816201cee4203407b_$_ResumeCoro$1::operator() @ 0x1805DBF30 (_lambda_190ccd1a8be9aac816201cee4203407b_$_ResumeCoro$1--operator().c)
 *     _lambda_d6b4118795ae303e935bbd5b6ca0014f_$_ResumeCoro$1::operator() @ 0x1805DC470 (_lambda_d6b4118795ae303e935bbd5b6ca0014f_$_ResumeCoro$1--operator().c)
 *     CLauncherTipContextMenu::GetMenuItemsAsyncHelper$_ResumeCoro$1 @ 0x1805DD240 (CLauncherTipContextMenu--GetMenuItemsAsyncHelper$_ResumeCoro$1.c)
 *     XamlGamingTaskViewHost::CreateGamingTaskBarViewModelAsync$_ResumeCoro$1 @ 0x18067A340 (XamlGamingTaskViewHost--CreateGamingTaskBarViewModelAsync$_ResumeCoro$1.c)
 *     VirtualDesktopSwitcherHost::DismissAsync$_ResumeCoro$1 @ 0x180686790 (VirtualDesktopSwitcherHost--DismissAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?resume_apartment@impl@winrt@@YA@AEBUresume_apartment_context@12@U?$coroutine_handle@X@experimental@std@@PEAH@Z @ 0x1802432E0 (-resume_apartment@impl@winrt@@YA@AEBUresume_apartment_context@12@U-$coroutine_handle@X@experimen.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall winrt::impl::apartment_awaiter::await_suspend(__int64 **a1, void (*a2)(void *, void *))
{
  __int64 *v4; // rsi
  __int64 v5; // rcx
  char v6; // bl
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  int v9; // [rsp+28h] [rbp-20h]

  v4 = *a1;
  v5 = **a1;
  v8 = v5;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  v9 = *((_DWORD *)v4 + 2);
  v6 = winrt::impl::resume_apartment((__int64)&v8, a2, a1 + 1);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v8);
  return v6;
}
