/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::DashboardManager::RaiseStartUpEvent$_InitCoro$2 @ 0x180275AA4
 * Callers:
 *     ?RaiseStartUpEvent@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@W4StartUpEvent@Dashboard@3UI@WindowsUdk@6@@Z @ 0x18022648C (-RaiseStartUpEvent@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA-AUfire_and.c)
 * Callees:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::RaiseStartUpEvent$_ResumeCoro$1 @ 0x180275B10 (winrt--Windows--Internal--Shell--implementation--DashboardManager--RaiseStartUpEvent$_ResumeCoro.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::RaiseStartUpEvent__InitCoro_2(
        _DWORD *a1,
        char *a2,
        _BYTE *a3,
        int *a4,
        __int64 a5)
{
  int v5; // r9d

  v5 = *a4;
  *(_QWORD *)(a2 + 97) = a5;
  *(_DWORD *)(a2 + 105) = v5;
  *(_QWORD *)a2 = winrt::Windows::Internal::Shell::implementation::DashboardManager::RaiseStartUpEvent__ResumeCoro_1;
  *((_DWORD *)a2 + 2) = *a1 != 0 ? 2 : 65538;
  *a3 = 0;
  a2[96] = 0;
  return winrt::Windows::Internal::Shell::implementation::DashboardManager::RaiseStartUpEvent__ResumeCoro_1(a2);
}
