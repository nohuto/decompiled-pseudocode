/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::FocusSessionComponent::InitializeAsync$_ResumeCoro$1 @ 0x180241F90
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::FocusSessionComponent::InitializeAsync$_InitCoro$2 @ 0x180241F38 (winrt--Windows--Internal--Shell--implementation--FocusSessionComponent--InitializeAsync$_InitCor.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x1800AA2B4 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ?await_suspend@awaitable@?1??resume_background@winrt@@YA@XZ@QEBAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x180219E7C (-await_suspend@awaitable@-1--resume_background@winrt@@YA@XZ@QEBAXU-$coroutine_handle@X@experimen.c)
 *     ?GetDefault@FocusSessionThemeManager@Shell@Internal@Windows@winrt@@SA@XZ @ 0x1802A3104 (-GetDefault@FocusSessionThemeManager@Shell@Internal@Windows@winrt@@SA@XZ.c)
 *     ??$wnf_publish@H@wil@@YAXAEBU_WNF_STATE_NAME@@AEBH@Z @ 0x1802B4E0C (--$wnf_publish@H@wil@@YAXAEBU_WNF_STATE_NAME@@AEBH@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Windows::Internal::Shell::implementation::FocusSessionComponent::InitializeAsync__ResumeCoro_1(
        __int64 a1,
        __int64 a2,
        void *a3)
{
  __int64 v3; // rdi
  __int64 v4; // rbx
  __int64 *Default; // rax
  __int64 v6; // rbx
  __int64 v7; // rcx
  unsigned int v8; // eax
  const char *v9; // r9
  wil *v10; // rcx
  unsigned int v11; // eax
  __int64 v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  try
  {
    v3 = a1;
    switch ( *(_WORD *)(a1 + 8) )
    {
      case 0xFFFF:
      case 3:
        goto LABEL_11;
      case 2:
        v4 = *(_QWORD *)(a1 + 97);
        *(_QWORD *)(a1 + 16) = 0LL;
        *(_QWORD *)(a1 + 88) = 0LL;
        if ( v4 )
        {
          *(_QWORD *)(a1 + 16) = v4;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
          *(_QWORD *)(a1 + 88) = v4;
        }
        *(_BYTE *)(a1 + 24) = 0;
        *(_WORD *)(a1 + 8) = 4;
        `winrt::resume_background'::`2'::awaitable::await_suspend(a1, (void (*)(void *, void *))a1, a3);
        return;
      case 4:
        try
        {
          Default = (__int64 *)winrt::Windows::Internal::Shell::FocusSessionThemeManager::GetDefault();
          v6 = *(_QWORD *)(a1 + 97);
          winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)(v6 + 96), Default);
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 32));
          v7 = *(_QWORD *)(v6 + 96);
          *(_DWORD *)(a1 + 56) = 0;
          *(_QWORD *)(a1 + 64) = 0LL;
          *(_QWORD *)(a1 + 72) = 0LL;
          v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 72LL))(v7);
          winrt::check_hresult(a1 + 80, v8, a1 + 56);
          *(_DWORD *)(a1 + 40) = 0;
          wil::wnf_publish<int>(&WNF_EOA_FOCUS_SESSION_SINGLETON_INITIALIZED);
        }
        catch ( ... )
        {
          *(_QWORD *)(a1 + 48) = 0LL;
          winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=(
            (__int64 *)(*(_QWORD *)(a1 + 97) + 96LL),
            (__int64 *)(a1 + 48));
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 48));
          wil::details::in1diag3::Log_CaughtException(
            retaddr,
            (void *)0x38,
            (unsigned int)"pcshell\\twinui\\focussessioncomponent\\lib\\focussessioncomponent.cpp",
            v9);
          v11 = wil::ResultFromCaughtException(v10);
          MicrosoftTelemetryAssertTriggeredArgs(v12, v11);
          v3 = a1;
        }
        if ( *(_QWORD *)(v3 + 16) )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(v3 + 16));
        goto LABEL_11;
      case 5:
        if ( *(_QWORD *)(a1 + 88) )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 16));
LABEL_11:
        if ( *(_WORD *)(v3 + 10) )
          operator delete((void *)v3, (const struct std::nothrow_t *)0x70);
        break;
      default:
        __debugbreak();
        break;
    }
  }
  catch ( ... )
  {
    *(_WORD *)(a1 + 8) = -1;
    std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *>::promise_type::unhandled_exception();
  }
}
