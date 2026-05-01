/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::DashboardManager::VerifyAndActivateAppAsync$_ResumeCoro$1_::_1_::dtor$8 @ 0x1806FD5EF
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$optional@V?$test_watcher@V?$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@@tip2@@@std@@QEAA@XZ @ 0x1805CC174 (--1-$optional@V-$test_watcher@V-$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@@tip2@@@std@@.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::VerifyAndActivateAppAsync__ResumeCoro_1_::_1_::dtor_8(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 168) = *(_QWORD *)(a2 + 56) + 304LL;
  return std::optional<tip2::test_watcher<tip2::details::merged_data<_tip_AppPrelaunch,_tip_AppPrelaunch>>>::~optional<tip2::test_watcher<tip2::details::merged_data<_tip_AppPrelaunch,_tip_AppPrelaunch>>>(*(_QWORD *)(a2 + 168));
}
