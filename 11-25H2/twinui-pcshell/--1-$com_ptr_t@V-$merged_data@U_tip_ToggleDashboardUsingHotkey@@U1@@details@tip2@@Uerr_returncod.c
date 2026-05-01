/*
 * XREFs of ??1?$com_ptr_t@V?$merged_data@U_tip_ToggleDashboardUsingHotkey@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1805A7CB4
 * Callers:
 *     ??$start_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_ToggleDashboardUsingHotkey@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x1805A68CC (--$start_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_ToggleDashboardUsingHotkey@@U1@@detai.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_ToggleDashboardUsingHotkey@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1805A80FC (--1-$test_data_control@V-$merged_data@U_tip_ToggleDashboardUsingHotkey@@U1@@details@tip2@@@tip2@.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_ToggleDashboardUsingHotkey@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1805A81BC (--1-$test_watcher@V-$merged_data@U_tip_ToggleDashboardUsingHotkey@@U1@@details@tip2@@@tip2@@QEAA.c)
 *     ?start@?$tip_test@V?$merged_data@U_tip_ToggleDashboardUsingHotkey@@U1@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x1805B95AC (-start@-$tip_test@V-$merged_data@U_tip_ToggleDashboardUsingHotkey@@U1@@details@tip2@@@tip2@@QEAA.c)
 * Callees:
 *     ?Release@?$merged_data@U_tip_ToggleDashboardUsingHotkey@@U1@@details@tip2@@AEAAKXZ @ 0x1805B1C10 (-Release@-$merged_data@U_tip_ToggleDashboardUsingHotkey@@U1@@details@tip2@@AEAAKXZ.c)
 */

__int64 __fastcall wil::com_ptr_t<tip2::details::merged_data<_tip_ToggleDashboardUsingHotkey,_tip_ToggleDashboardUsingHotkey>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_ToggleDashboardUsingHotkey,_tip_ToggleDashboardUsingHotkey>,wil::err_returncode_policy>(
        void **a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return tip2::details::merged_data<_tip_ToggleDashboardUsingHotkey,_tip_ToggleDashboardUsingHotkey>::Release(v1);
  return result;
}
