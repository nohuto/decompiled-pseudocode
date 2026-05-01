/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::DashboardManager::ContinueSwipe_::_1_::catch$22 @ 0x1806D2EF3
 * Callers:
 *     <none>
 * Callees:
 *     ?complete_without_lock@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18028AAC4 (-complete_without_lock@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?begin_update@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x18028C87C (-begin_update@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ??$open_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x1805A1F40 (--$open_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1805A8134 (--1-$test_data_control@V-$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@@tip2@@.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1805A81E4 (--1-$test_watcher@V-$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@@tip2@@QEAA@.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::ContinueSwipe_::_1_::catch_22(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rbx

  tip2::open_and_watch_errors<tip2::tip_test<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>>((struct wil::details::IFailureCallback *)(a2 + 168));
  v3 = *(_QWORD *)(a2 + 216);
  *(_QWORD *)(a2 + 32) = v3;
  if ( v3 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 312));
    v3 = *(_QWORD *)(a2 + 32);
  }
  tip2::details::shared_data<1,0,0>::begin_update(v3 + 8);
  *(_BYTE *)(v3 + 269) = 1;
  tip2::test_data_control<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>::~test_data_control<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>((void **)(a2 + 32));
  tip2::details::shared_data<1,0,0>::complete_without_lock(*(_QWORD *)(a2 + 216) + 8LL);
  tip2::test_watcher<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>::~test_watcher<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>(a2 + 168);
  return 0LL;
}
