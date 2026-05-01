/*
 * XREFs of ?OnTaskbarSettingChanged@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@W4TaskbarSettingChangedEvent@Dashboard@3UI@WindowsUdk@6@@Z @ 0x1805D54B4
 * Callers:
 *     ?TaskbarDashboardButtonSettingChanged@DashboardManager@implementation@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x1805D7DA8 (-TaskbarDashboardButtonSettingChanged@DashboardManager@implementation@Shell@Internal@Windows@win.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::OnTaskbarSettingChanged$_ResumeCoro$1 @ 0x1805D52D0 (winrt--Windows--Internal--Shell--implementation--DashboardManager--OnTaskbarSettingChanged$_Resu.c)
 */

// Hidden C++ exception states: #wind=1
_BYTE *__fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::OnTaskbarSettingChanged(
        void (__fastcall *a1)(char *a1),
        _BYTE *a2,
        int a3)
{
  void (__fastcall **v7)(char *); // [rsp+20h] [rbp-28h]

  v7 = (void (__fastcall **)(char *))operator new(0x70uLL);
  v7[11] = a1;
  *((_DWORD *)v7 + 24) = a3;
  *v7 = winrt::Windows::Internal::Shell::implementation::DashboardManager::OnTaskbarSettingChanged__ResumeCoro_1;
  *((_DWORD *)v7 + 2) = 65538;
  *a2 = 0;
  *((_BYTE *)v7 + 80) = 0;
  winrt::Windows::Internal::Shell::implementation::DashboardManager::OnTaskbarSettingChanged__ResumeCoro_1((char *)v7);
  return a2;
}
