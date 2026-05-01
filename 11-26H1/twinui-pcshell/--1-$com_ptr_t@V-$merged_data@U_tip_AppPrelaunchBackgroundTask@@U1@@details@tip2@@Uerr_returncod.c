/*
 * XREFs of ??1?$com_ptr_t@V?$merged_data@U_tip_AppPrelaunchBackgroundTask@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1805CBDCC
 * Callers:
 *     ??$start_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_AppPrelaunchBackgroundTask@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x1805CA8A8 (--$start_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_AppPrelaunchBackgroundTask@@U1@@detai.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_AppPrelaunchBackgroundTask@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1805CC1B8 (--1-$test_data_control@V-$merged_data@U_tip_AppPrelaunchBackgroundTask@@U1@@details@tip2@@@tip2@.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_AppPrelaunchBackgroundTask@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1805CC32C (--1-$test_watcher@V-$merged_data@U_tip_AppPrelaunchBackgroundTask@@U1@@details@tip2@@@tip2@@QEAA.c)
 *     ?start@?$tip_test@V?$merged_data@U_tip_AppPrelaunchBackgroundTask@@U1@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x1805DCFDC (-start@-$tip_test@V-$merged_data@U_tip_AppPrelaunchBackgroundTask@@U1@@details@tip2@@@tip2@@QEAA.c)
 * Callees:
 *     ?Release@?$merged_data@U_tip_AppPrelaunchBackgroundTask@@U1@@details@tip2@@AEAAKXZ @ 0x1805D5980 (-Release@-$merged_data@U_tip_AppPrelaunchBackgroundTask@@U1@@details@tip2@@AEAAKXZ.c)
 */

__int64 __fastcall wil::com_ptr_t<tip2::details::merged_data<_tip_AppPrelaunchBackgroundTask,_tip_AppPrelaunchBackgroundTask>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_AppPrelaunchBackgroundTask,_tip_AppPrelaunchBackgroundTask>,wil::err_returncode_policy>(
        void **a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return tip2::details::merged_data<_tip_AppPrelaunchBackgroundTask,_tip_AppPrelaunchBackgroundTask>::Release(v1);
  return result;
}
