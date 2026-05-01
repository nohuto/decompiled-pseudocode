/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::DashboardManager::DismissDashboardAsync$_InitCoro$2 @ 0x1805AACE8
 * Callers:
 *     ?DismissDashboardAsync@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@UDismissShellViewRequestedEventArgs@3UI@WindowsUdk@6@@Z @ 0x1805AB4CC (-DismissDashboardAsync@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA-AUfire.c)
 * Callees:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::DismissDashboardAsync$_ResumeCoro$1 @ 0x1805AAD50 (winrt--Windows--Internal--Shell--implementation--DashboardManager--DismissDashboardAsync$_Resume.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::DismissDashboardAsync__InitCoro_2(
        _DWORD *a1,
        char *a2,
        _BYTE *a3,
        __int64 *a4,
        __int64 a5)
{
  __int64 v5; // rax

  *(_QWORD *)(a2 + 673) = a5;
  v5 = *a4;
  *a4 = 0LL;
  *(_QWORD *)(a2 + 681) = v5;
  *(_QWORD *)a2 = winrt::Windows::Internal::Shell::implementation::DashboardManager::DismissDashboardAsync__ResumeCoro_1;
  *((_DWORD *)a2 + 2) = *a1 != 0 ? 2 : 65538;
  *a3 = 0;
  a2[672] = 0;
  return winrt::Windows::Internal::Shell::implementation::DashboardManager::DismissDashboardAsync__ResumeCoro_1(a2);
}
