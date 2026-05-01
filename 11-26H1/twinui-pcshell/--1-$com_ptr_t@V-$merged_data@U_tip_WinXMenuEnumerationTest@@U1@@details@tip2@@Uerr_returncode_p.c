/*
 * XREFs of ??1?$com_ptr_t@V?$merged_data@U_tip_WinXMenuEnumerationTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180283BF8
 * Callers:
 *     ?_EnumerateAndBuildMenu@CLauncherTipContextMenu@@AEAAJXZ @ 0x1800AB350 (-_EnumerateAndBuildMenu@CLauncherTipContextMenu@@AEAAJXZ.c)
 *     ??1CLauncherTipContextMenu@@MEAA@XZ @ 0x1800C9BFC (--1CLauncherTipContextMenu@@MEAA@XZ.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_WinXMenuEnumerationTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_WinXMenuEnumerationTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x180281418 (-ensure_data@-$tip_test@V-$merged_data@U_tip_WinXMenuEnumerationTest@@U1@@details@tip2@@@tip2@@A.c)
 *     ??$start_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_WinXMenuEnumerationTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x180283B80 (--$start_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_WinXMenuEnumerationTest@@U1@@details@.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_WinXMenuEnumerationTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180284E54 (--1-$test_data_control@V-$merged_data@U_tip_WinXMenuEnumerationTest@@U1@@details@tip2@@@tip2@@QE.c)
 * Callees:
 *     ?Release@?$merged_data@U_tip_WinXMenuEnumerationTest@@U1@@details@tip2@@AEAAKXZ @ 0x180602FA8 (-Release@-$merged_data@U_tip_WinXMenuEnumerationTest@@U1@@details@tip2@@AEAAKXZ.c)
 */

__int64 __fastcall wil::com_ptr_t<tip2::details::merged_data<_tip_WinXMenuEnumerationTest,_tip_WinXMenuEnumerationTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_WinXMenuEnumerationTest,_tip_WinXMenuEnumerationTest>,wil::err_returncode_policy>(
        void **a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return tip2::details::merged_data<_tip_WinXMenuEnumerationTest,_tip_WinXMenuEnumerationTest>::Release(v1);
  return result;
}
