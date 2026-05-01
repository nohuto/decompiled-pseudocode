/*
 * XREFs of ?ensure_data@?$tip_test@V?$merged_data@U_tip_ToggleDashboardThroughSVC@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_ToggleDashboardThroughSVC@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x1802827B8
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::ShowDashboardAsync$_ResumeCoro$1 @ 0x180278C40 (winrt--Windows--Internal--Shell--implementation--DashboardManager--ShowDashboardAsync$_ResumeCor.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_ToggleDashboardThroughSVC@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_ToggleDashboardThroughSVC@@U1@@details@tip2@@@1@XZ @ 0x1805CC6CC (--C-$tip_test@V-$merged_data@U_tip_ToggleDashboardThroughSVC@@U1@@details@tip2@@@tip2@@QEAA-AV-$.c)
 * Callees:
 *     ?FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x18027FD64 (-FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ??0?$merged_data@U_tip_ToggleDashboardThroughSVC@@U1@@details@tip2@@QEAA@XZ @ 0x180282968 (--0-$merged_data@U_tip_ToggleDashboardThroughSVC@@U1@@details@tip2@@QEAA@XZ.c)
 *     ?Release@?$merged_data@U_tip_ToggleDashboardThroughSVC@@U1@@details@tip2@@AEAAKXZ @ 0x1802831D0 (-Release@-$merged_data@U_tip_ToggleDashboardThroughSVC@@U1@@details@tip2@@AEAAKXZ.c)
 */

void **__fastcall tip2::tip_test<tip2::details::merged_data<_tip_ToggleDashboardThroughSVC,_tip_ToggleDashboardThroughSVC>>::ensure_data(
        void **a1)
{
  LPVOID v2; // rax
  wil::details::in1diag3 *v3; // rcx
  __int64 v4; // rax
  void *v5; // rcx

  if ( !*a1 )
  {
    v2 = CoTaskMemAlloc(0x168uLL);
    if ( !v2 )
      wil::details::in1diag3::FailFastImmediate_Unexpected(v3);
    v4 = tip2::details::merged_data<_tip_ToggleDashboardThroughSVC,_tip_ToggleDashboardThroughSVC>::merged_data<_tip_ToggleDashboardThroughSVC,_tip_ToggleDashboardThroughSVC>(v2);
    v5 = *a1;
    *a1 = (void *)v4;
    if ( v5 )
      tip2::details::merged_data<_tip_ToggleDashboardThroughSVC,_tip_ToggleDashboardThroughSVC>::Release(v5);
  }
  return a1;
}
