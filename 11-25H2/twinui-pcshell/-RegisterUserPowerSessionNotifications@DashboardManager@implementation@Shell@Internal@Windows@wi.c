/*
 * XREFs of ?RegisterUserPowerSessionNotifications@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAJXZ @ 0x1805B1918
 * Callers:
 *     ?subscribe_to_services@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x1802B7FC0 (-subscribe_to_services@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIS.c)
 * Callees:
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1802A9FD8 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::RegisterUserPowerSessionNotifications(
        winrt::Windows::Internal::Shell::implementation::DashboardManager *this)
{
  unsigned int v1; // eax
  unsigned int v3[2]; // [rsp+20h] [rbp-18h] BYREF
  winrt::Windows::Internal::Shell::implementation::DashboardManager *v4; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = this;
  *(_QWORD *)v3 = winrt::Windows::Internal::Shell::implementation::DashboardManager::PowerChangeCallback;
  v1 = PowerRegisterSuspendResumeNotification(2LL, v3, (char *)this + 224);
  if ( v1 )
    return wil::details::in1diag3::Return_Win32(
             retaddr,
             (void *)0x57F,
             (int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
             (const char *)v1);
  else
    return 0LL;
}
