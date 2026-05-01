/*
 * XREFs of ??1?$test_watcher@V?$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1805A81E4
 * Callers:
 *     ?CancelSwipe@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAJXZ @ 0x1805AA350 (-CancelSwipe@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAJXZ.c)
 *     ?CommitSwipe@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAJIUtagPOINT@@@Z @ 0x1805AA560 (-CommitSwipe@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAJIUtagPOINT@@@Z.c)
 *     ?ContinueSwipe@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAJIUtagPOINT@@@Z @ 0x1805AA9D0 (-ContinueSwipe@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAJIUtagPOINT@@@Z.c)
 *     ?StartSwipe@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAJIUtagPOINT@@@Z @ 0x1805B3640 (-StartSwipe@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAJIUtagPOINT@@@Z.c)
 *     _winrt::Windows::Internal::Shell::implementation::DashboardManager::CancelSwipe_::_1_::catch$22 @ 0x1806D2DED (_winrt--Windows--Internal--Shell--implementation--DashboardManager--CancelSwipe_--_1_--catch$22.c)
 *     _winrt::Windows::Internal::Shell::implementation::DashboardManager::CommitSwipe_::_1_::catch$22 @ 0x1806D2E70 (_winrt--Windows--Internal--Shell--implementation--DashboardManager--CommitSwipe_--_1_--catch$22.c)
 *     _winrt::Windows::Internal::Shell::implementation::DashboardManager::ContinueSwipe_::_1_::catch$22 @ 0x1806D2EF3 (_winrt--Windows--Internal--Shell--implementation--DashboardManager--ContinueSwipe_--_1_--catch$2.c)
 *     _winrt::Windows::Internal::Shell::implementation::DashboardManager::StartSwipe_::_1_::dtor$0 @ 0x1806D4766 (_winrt--Windows--Internal--Shell--implementation--DashboardManager--StartSwipe_--_1_--dtor$0.c)
 *     _winrt::Windows::Internal::Shell::implementation::DashboardManager::StartSwipe_::_1_::catch$41 @ 0x1806D47FD (_winrt--Windows--Internal--Shell--implementation--DashboardManager--StartSwipe_--_1_--catch$41.c)
 * Callees:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1805A7CD4 (--1-$com_ptr_t@V-$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@Uerr_returncode.c)
 */

void __fastcall tip2::test_watcher<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>::~test_watcher<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>(
        __int64 a1)
{
  wil::com_ptr_t<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>,wil::err_returncode_policy>((void **)(a1 + 48));
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
