/*
 * XREFs of ??1?$test_watcher@V?$merged_data@U_tip_ToggleDashboardUsingHotkey@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1805CC354
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::ToggleDashboardVisibilityAsync$_ResumeCoro$1 @ 0x1805D81C0 (winrt--Windows--Internal--Shell--implementation--DashboardManager--ToggleDashboardVisibilityAsyn.c)
 *     _winrt::Windows::Internal::Shell::implementation::DashboardManager::ToggleDashboardVisibilityAsync$_ResumeCoro$1_::_1_::dtor$1 @ 0x1806FCC03 (_winrt--Windows--Internal--Shell--implementation--DashboardManager--ToggleDashboard_ea_1806FCC03.c)
 * Callees:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_ToggleDashboardUsingHotkey@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1805CBE4C (--1-$com_ptr_t@V-$merged_data@U_tip_ToggleDashboardUsingHotkey@@U1@@details@tip2@@Uerr_returncod.c)
 */

void __fastcall tip2::test_watcher<tip2::details::merged_data<_tip_ToggleDashboardUsingHotkey,_tip_ToggleDashboardUsingHotkey>>::~test_watcher<tip2::details::merged_data<_tip_ToggleDashboardUsingHotkey,_tip_ToggleDashboardUsingHotkey>>(
        __int64 a1)
{
  wil::com_ptr_t<tip2::details::merged_data<_tip_ToggleDashboardUsingHotkey,_tip_ToggleDashboardUsingHotkey>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_ToggleDashboardUsingHotkey,_tip_ToggleDashboardUsingHotkey>,wil::err_returncode_policy>((void **)(a1 + 48));
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
