/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::DashboardManager::ShowDashboardAsync$_ResumeCoro$1_::_1_::dtor$13 @ 0x1806D447E
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$test_data_control@V?$merged_data@U_tip_ToggleDashboardThroughSVC@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1805A80C4 (--1-$test_data_control@V-$merged_data@U_tip_ToggleDashboardThroughSVC@@U1@@details@tip2@@@tip2@@.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::ShowDashboardAsync__ResumeCoro_1_::_1_::dtor_13(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 544) = *(_QWORD *)(a2 + 136) + 232LL;
  return tip2::test_data_control<tip2::details::merged_data<_tip_ToggleDashboardThroughSVC,_tip_ToggleDashboardThroughSVC>>::~test_data_control<tip2::details::merged_data<_tip_ToggleDashboardThroughSVC,_tip_ToggleDashboardThroughSVC>>(*(volatile signed __int32 ***)(a2 + 544));
}
