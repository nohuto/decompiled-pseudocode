/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::DashboardManager::ToggleDashboardVisibilityAsync$_InitCoro$2 @ 0x1805B447C
 * Callers:
 *     ?ToggleDashboardVisibilityAsync@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@Uguid@6@W4DashboardInvokeType@Dashboard@3UI@WindowsUdk@6@URect@Foundation@56@@Z @ 0x1805B4A24 (-ToggleDashboardVisibilityAsync@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AE.c)
 * Callees:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::ToggleDashboardVisibilityAsync$_ResumeCoro$1 @ 0x1805B4500 (winrt--Windows--Internal--Shell--implementation--DashboardManager--ToggleDashboardV_ea_1805B4500.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::ToggleDashboardVisibilityAsync__InitCoro_2(
        _DWORD *a1,
        char *a2,
        _BYTE *a3,
        _OWORD *a4,
        int *a5,
        _OWORD *a6,
        __int64 a7)
{
  int v7; // r10d

  v7 = *a5;
  *(_QWORD *)(a2 + 321) = a7;
  *(_OWORD *)(a2 + 329) = *a4;
  *(_DWORD *)(a2 + 345) = v7;
  *(_OWORD *)(a2 + 349) = *a6;
  *(_QWORD *)a2 = winrt::Windows::Internal::Shell::implementation::DashboardManager::ToggleDashboardVisibilityAsync__ResumeCoro_1;
  *((_DWORD *)a2 + 2) = *a1 != 0 ? 2 : 65538;
  *a3 = 0;
  a2[320] = 0;
  return winrt::Windows::Internal::Shell::implementation::DashboardManager::ToggleDashboardVisibilityAsync__ResumeCoro_1(a2);
}
