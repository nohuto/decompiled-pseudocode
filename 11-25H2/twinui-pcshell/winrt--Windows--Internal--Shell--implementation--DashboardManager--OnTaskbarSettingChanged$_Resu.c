/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::DashboardManager::OnTaskbarSettingChanged$_ResumeCoro$1 @ 0x1805B1480
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::OnTaskbarSettingChanged$_InitCoro$2 @ 0x1805B1414 (winrt--Windows--Internal--Shell--implementation--DashboardManager--OnTaskbarSettingChanged$_Init.c)
 * Callees:
 *     ?CallDashboardExtension@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAJ$$QEAV?$function@$$A6AXUDashboardExtension@Dashboard@Shell@UI@WindowsUdk@winrt@@@Z@std@@V?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@8@@Z @ 0x18020AD54 (-CallDashboardExtension@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAJ$$QEA.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::OnTaskbarSettingChanged__ResumeCoro_1(
        char *a1)
{
  int v2; // eax
  char *v3; // rsi
  __int64 v4; // rdx

  try
  {
    switch ( *((_WORD *)a1 + 4) )
    {
      case 0xFFFF:
      case 3:
        goto LABEL_5;
      case 2:
        v2 = *(_DWORD *)(a1 + 89);
        v3 = a1 + 16;
        *((_QWORD *)a1 + 2) = off_18072F348;
        *((_DWORD *)a1 + 6) = v2;
        *((_QWORD *)a1 + 9) = a1 + 16;
        winrt::Windows::Internal::Shell::implementation::DashboardManager::CallDashboardExtension(
          *(_QWORD *)(a1 + 81),
          (__int64)(a1 + 16),
          0x1F40u);
        if ( *((_QWORD *)a1 + 9) )
        {
          LOBYTE(v4) = *((_QWORD *)a1 + 9) != (_QWORD)v3;
          (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)a1 + 9) + 32LL))(*((_QWORD *)a1 + 9), v4);
        }
LABEL_5:
        if ( *((_WORD *)a1 + 5) )
          operator delete(a1, (const struct std::nothrow_t *)0x70);
        break;
      default:
        __debugbreak();
        break;
    }
  }
  catch ( ... )
  {
    *((_WORD *)a1 + 4) = -1;
    std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *>::promise_type::unhandled_exception((winrt *)0xFFFFFFFFLL);
  }
}
