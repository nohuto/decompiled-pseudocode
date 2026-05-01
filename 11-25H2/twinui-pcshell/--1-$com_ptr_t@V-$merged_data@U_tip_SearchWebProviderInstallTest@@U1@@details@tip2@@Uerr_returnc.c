/*
 * XREFs of ??1?$com_ptr_t@V?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1803A4E38
 * Callers:
 *     _lambda_630b2476087197e3d624f13f03cc25bb_::__lambda_630b2476087197e3d624f13f03cc25bb_ @ 0x1803A4A84 (_lambda_630b2476087197e3d624f13f03cc25bb_--__lambda_630b2476087197e3d624f13f03cc25bb_.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1803A5040 (--1-$test_data_control@V-$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip2@@@tip.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1803A50A0 (--1-$test_watcher@V-$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip2@@@tip2@@QE.c)
 *     ??1?$tip_test@V?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1803A50C8 (--1-$tip_test@V-$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip2@@@tip2@@QEAA@X.c)
 *     ?InstallWebSearchPackage@@YAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0V?$tip_test@V?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip2@@@tip2@@@Z @ 0x1803AC24C (-InstallWebSearchPackage@@YAXAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@0V.c)
 *     ?TryInstallDefaultWebSearchProvider@UndockedSearchAppExperienceManager@@AEAAXW4InstallTrigger@@@Z @ 0x1803B15B4 (-TryInstallDefaultWebSearchProvider@UndockedSearchAppExperienceManager@@AEAAXW4InstallTrigger@@@.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x1803B2FFC (-ensure_data@-$tip_test@V-$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip2@@@ti.c)
 * Callees:
 *     ?Release@?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip2@@AEAAKXZ @ 0x1803AE7A8 (-Release@-$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip2@@AEAAKXZ.c)
 */

__int64 __fastcall wil::com_ptr_t<tip2::details::merged_data<_tip_SearchWebProviderInstallTest,_tip_SearchWebProviderInstallTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_SearchWebProviderInstallTest,_tip_SearchWebProviderInstallTest>,wil::err_returncode_policy>(
        void **a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return tip2::details::merged_data<_tip_SearchWebProviderInstallTest,_tip_SearchWebProviderInstallTest>::Release(v1);
  return result;
}
