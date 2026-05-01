/*
 * XREFs of ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUDashboardManager@implementation@Shell@Internal@Windows@2@@experimental@std@@@?$await_adapter@UIAsyncAction@Foundation@Windows@winrt@@$00@impl@winrt@@QEAA_NU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUDashboardManager@implementation@Shell@Internal@Windows@2@@experimental@std@@@experimental@std@@@Z @ 0x1805A0A78
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::VerifyAndActivateAppAsync$_ResumeCoro$1 @ 0x180282C70 (winrt--Windows--Internal--Shell--implementation--DashboardManager--VerifyAndActivateAppAsync$_Re.c)
 *     winrt::Windows::Internal::Shell::implementation::WindowsTracker::final_release$_ResumeCoro$1 @ 0x180639AE0 (winrt--Windows--Internal--Shell--implementation--WindowsTracker--final_release$_ResumeCoro$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
char __fastcall winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncAction,1>::await_suspend<std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::implementation::DashboardManager *>::promise_type>(
        __int64 a1,
        __int64 a2)
{
  return winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncAction,1>::register_completed_callback(a1, a2);
}
