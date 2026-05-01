/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::DashboardManager::OnTaskbarSettingChanged$_InitCoro$2 @ 0x1805B1414
 * Callers:
 *     ?OnTaskbarSettingChanged@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@W4TaskbarSettingChangedEvent@Dashboard@3UI@WindowsUdk@6@@Z @ 0x1805B164C (-OnTaskbarSettingChanged@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA-AUfi.c)
 * Callees:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::OnTaskbarSettingChanged$_ResumeCoro$1 @ 0x1805B1480 (winrt--Windows--Internal--Shell--implementation--DashboardManager--OnTaskbarSettingChanged$_Resu.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::OnTaskbarSettingChanged__InitCoro_2(
        _DWORD *a1,
        char *a2,
        _BYTE *a3,
        int *a4,
        __int64 a5)
{
  int v5; // r9d

  v5 = *a4;
  *(_QWORD *)(a2 + 81) = a5;
  *(_DWORD *)(a2 + 89) = v5;
  *(_QWORD *)a2 = winrt::Windows::Internal::Shell::implementation::DashboardManager::OnTaskbarSettingChanged__ResumeCoro_1;
  *((_DWORD *)a2 + 2) = *a1 != 0 ? 2 : 65538;
  *a3 = 0;
  a2[80] = 0;
  return winrt::Windows::Internal::Shell::implementation::DashboardManager::OnTaskbarSettingChanged__ResumeCoro_1(a2);
}
