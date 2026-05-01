/*
 * XREFs of ?unsubscribe_from_services@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x1805DD1E0
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180024FF4 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180054B64 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ?UnsubscribeFromDaSettingChanged@DashboardTaskbarSettings@@YAXAEBUIInspectable@Foundation@Windows@winrt@@Uevent_token@5@@Z @ 0x180206E14 (-UnsubscribeFromDaSettingChanged@DashboardTaskbarSettings@@YAXAEBUIInspectable@Foundation@Window.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WidgetsOSState@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180288228 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_WidgetsOSState@@@details@wil@@QEAAX_NW4Re.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x180358560 (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::unsubscribe_from_services(
        winrt::Windows::Internal::Shell::implementation::DashboardManager *this,
        struct IServiceProvider *a2,
        __int64 a3)
{
  __int64 *v4; // rbx
  int v5; // eax
  __int64 *v6; // rsi
  int v7; // eax
  unsigned int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_WidgetsOSState>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_WidgetsOSState>::GetImpl'::`2'::impl,
    1u,
    a3);
  v4 = (__int64 *)((char *)this + 176);
  if ( *((_DWORD *)this + 47) )
  {
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*v4 + 64LL))(*v4);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3A4,
        (int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
        (const char *)(unsigned int)v5);
    *((_DWORD *)this + 47) = 0;
  }
  v6 = (__int64 *)((char *)this + 176);
  if ( *((_DWORD *)this + 48) )
  {
    v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*v4 + 80LL))(*v4);
    if ( v7 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3A9,
        (int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
        (const char *)(unsigned int)v7);
      v6 = (__int64 *)((char *)this + 176);
    }
    *((_DWORD *)this + 48) = 0;
  }
  if ( *((_QWORD *)this + 25) )
  {
    v8 = PowerUnregisterSuspendResumeNotification();
    if ( v8 )
      wil::details::in1diag3::_Log_Win32(
        retaddr,
        942LL,
        (__int64)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
        (const char *)v8);
    *((_QWORD *)this + 25) = 0LL;
    v4 = v6;
  }
  wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset(v4);
  DashboardTaskbarSettings::UnsubscribeFromDaSettingChanged(
    (void (__fastcall ****)(_QWORD, void *, __int64 *))this + 37,
    *((_QWORD *)this + 38));
  v10 = 0LL;
  winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this + 37, &v10);
  if ( v10 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v10);
}
