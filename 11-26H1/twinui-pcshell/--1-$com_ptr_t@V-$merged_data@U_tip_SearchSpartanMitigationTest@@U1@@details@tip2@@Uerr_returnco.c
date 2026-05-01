/*
 * XREFs of ??1?$com_ptr_t@V?$merged_data@U_tip_SearchSpartanMitigationTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1803AE0A0
 * Callers:
 *     ??1?$test_data_control@V?$merged_data@U_tip_SearchSpartanMitigationTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1803AE30C (--1-$test_data_control@V-$merged_data@U_tip_SearchSpartanMitigationTest@@U1@@details@tip2@@@tip2.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_SearchSpartanMitigationTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1803AE37C (--1-$test_watcher@V-$merged_data@U_tip_SearchSpartanMitigationTest@@U1@@details@tip2@@@tip2@@QEA.c)
 *     ?MitigateSpartanSubDomains@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x1803B5B40 (-MitigateSpartanSubDomains@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 *     ?start@?$tip_test@V?$merged_data@U_tip_SearchSpartanMitigationTest@@U1@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x1803BDEC8 (-start@-$tip_test@V-$merged_data@U_tip_SearchSpartanMitigationTest@@U1@@details@tip2@@@tip2@@QEA.c)
 * Callees:
 *     ?Release@?$merged_data@U_tip_SearchSpartanMitigationTest@@U1@@details@tip2@@AEAAKXZ @ 0x1803B71A0 (-Release@-$merged_data@U_tip_SearchSpartanMitigationTest@@U1@@details@tip2@@AEAAKXZ.c)
 */

__int64 __fastcall wil::com_ptr_t<tip2::details::merged_data<_tip_SearchSpartanMitigationTest,_tip_SearchSpartanMitigationTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_SearchSpartanMitigationTest,_tip_SearchSpartanMitigationTest>,wil::err_returncode_policy>(
        void **a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return tip2::details::merged_data<_tip_SearchSpartanMitigationTest,_tip_SearchSpartanMitigationTest>::Release(v1);
  return result;
}
