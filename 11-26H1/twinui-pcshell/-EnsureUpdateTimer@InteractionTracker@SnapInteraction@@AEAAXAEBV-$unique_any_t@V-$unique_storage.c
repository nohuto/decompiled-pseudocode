/*
 * XREFs of ?EnsureUpdateTimer@InteractionTracker@SnapInteraction@@AEAAXAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1801FC454
 * Callers:
 *     ?OnViewFocused@InteractionTracker@SnapInteraction@@AEAAXAEBU?$com_ptr@UIApplicationView@@@winrt@@@Z @ 0x180035520 (-OnViewFocused@InteractionTracker@SnapInteraction@@AEAAXAEBU-$com_ptr@UIApplicationView@@@winrt@.c)
 *     ?OnViewSnapped@InteractionTracker@SnapInteraction@@AEAAXAEBU?$com_ptr@UIApplicationView@@@winrt@@@Z @ 0x1805AA5E4 (-OnViewSnapped@InteractionTracker@SnapInteraction@@AEAAXAEBU-$com_ptr@UIApplicationView@@@winrt@.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180054B64 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ??$get_weak@VWindowDragInputProvider@@@?$root_implements@VWindowDragInputProvider@@UIInspectable@Foundation@Windows@winrt@@@impl@winrt@@IEAA?AU?$weak_ref@VWindowDragInputProvider@@@2@XZ @ 0x180054E60 (--$get_weak@VWindowDragInputProvider@@@-$root_implements@VWindowDragInputProvider@@UIInspectable.c)
 *     ?LaunchForResultsAsync@?$consume_Windows_Internal_GamingOverlay_IGameBarProtocolForResultsLauncher@UIGameBarProtocolForResultsLauncher@GamingOverlay@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@AEBU?$map@Uhstring@winrt@@U12@@53@@Z @ 0x1801FC558 (-LaunchForResultsAsync@-$consume_Windows_Internal_GamingOverlay_IGameBarProtocolForResultsLaunch.c)
 *     winrt::Windows::System::Threading::TimerElapsedHandler::TimerElapsedHandler__lambda_ee45b6845675de9c207e4cdce24e0e3d___ @ 0x1801FC5C4 (winrt--Windows--System--Threading--TimerElapsedHandler--TimerElapsedHandler__lambda_ee45b6845675.c)
 *     ??$call@AEAV_lambda_dde458f71422ec207fa0d1766485f8dd_@@@?$factory_cache_entry@UThreadPoolTimer@Threading@System@Windows@winrt@@UIThreadPoolTimerStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_dde458f71422ec207fa0d1766485f8dd_@@@Z @ 0x1805AA490 (--$call@AEAV_lambda_dde458f71422ec207fa0d1766485f8dd_@@@-$factory_cache_entry@UThreadPoolTimer@T.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall SnapInteraction::InteractionTracker::EnsureUpdateTimer(__int64 a1, __int64 a2)
{
  __int64 *v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 result; // rax
  _QWORD v6[2]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v7[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v8; // [rsp+60h] [rbp+18h] BYREF
  __int64 v9; // [rsp+68h] [rbp+20h] BYREF
  __int64 v10; // [rsp+70h] [rbp+28h] BYREF
  __int64 v11; // [rsp+78h] [rbp+30h] BYREF

  v9 = a2;
  v2 = (__int64 *)(a1 + 112);
  if ( !*(_QWORD *)(a1 + 112) )
  {
    winrt::impl::root_implements<WindowDragInputProvider,winrt::Windows::Foundation::IInspectable>::get_weak<WindowDragInputProvider>(
      a1 + 24,
      &v9);
    v3 = v9;
    v9 = 0LL;
    v11 = v3;
    winrt::Windows::System::Threading::TimerElapsedHandler::TimerElapsedHandler__lambda_ee45b6845675de9c207e4cdce24e0e3d___(
      &v10,
      &v11);
    if ( v9 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v9);
    v6[0] = 3000000000LL;
    v7[0] = &v10;
    v7[1] = v6;
    v6[1] = &qword_1808DB678;
    _InterlockedIncrement64(&qword_1808DB678);
    if ( winrt::impl::factory_cache_entry_v<winrt::Windows::System::Threading::ThreadPoolTimer,winrt::Windows::System::Threading::IThreadPoolTimerStatics> )
    {
      ((void (__fastcall *)(__int64 *, __int64 *, __int64 *, _QWORD *))winrt::impl::consume_Windows_Internal_GamingOverlay_IGameBarProtocolForResultsLauncher<winrt::Windows::Internal::GamingOverlay::IGameBarProtocolForResultsLauncher>::LaunchForResultsAsync)(
        &winrt::impl::factory_cache_entry_v<winrt::Windows::System::Threading::ThreadPoolTimer,winrt::Windows::System::Threading::IThreadPoolTimerStatics>,
        &v8,
        &v10,
        v6);
      _InterlockedDecrement64(&qword_1808DB678);
    }
    else
    {
      _InterlockedDecrement64(&qword_1808DB678);
      winrt::impl::factory_cache_entry<winrt::Windows::System::Threading::ThreadPoolTimer,winrt::Windows::System::Threading::IThreadPoolTimerStatics>::call<_lambda_dde458f71422ec207fa0d1766485f8dd_ &>(
        v4,
        &v8,
        v7);
    }
    result = (__int64)winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=(v2, &v8);
    if ( v8 )
      result = winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v8);
    if ( v10 )
      return winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v10);
  }
  return result;
}
