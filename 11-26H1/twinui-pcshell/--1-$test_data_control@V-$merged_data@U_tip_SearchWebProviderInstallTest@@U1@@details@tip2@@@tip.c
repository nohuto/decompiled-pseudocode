/*
 * XREFs of ??1?$test_data_control@V?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1803AE344
 * Callers:
 *     ?InstallWebSearchPackage@@YAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0V?$tip_test@V?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip2@@@tip2@@@Z @ 0x1803B4C7C (-InstallWebSearchPackage@@YAXAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@0V.c)
 *     ?TryInstallDefaultWebSearchProvider@UndockedSearchAppExperienceManager@@AEAAXW4InstallTrigger@@@Z @ 0x1803B9E2C (-TryInstallDefaultWebSearchProvider@UndockedSearchAppExperienceManager@@AEAAXW4InstallTrigger@@@.c)
 *     _InstallWebSearchPackage_::_1_::dtor$10 @ 0x1806E80E5 (_InstallWebSearchPackage_--_1_--dtor$10.c)
 *     _InstallWebSearchPackage_::_1_::dtor$20 @ 0x1806E813F (_InstallWebSearchPackage_--_1_--dtor$20.c)
 *     _UndockedSearchAppExperienceManager::TryInstallDefaultWebSearchProvider_::_1_::dtor$3 @ 0x1806E85AE (_UndockedSearchAppExperienceManager--TryInstallDefaultWebSearchProvider_--_1_--dtor$3.c)
 * Callees:
 *     ?end_update@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18028262C (-end_update@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1803BD710 (-reset@-$com_ptr_t@V-$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip2@@Uerr_ret.c)
 */

__int64 __fastcall tip2::test_data_control<tip2::details::merged_data<_tip_SearchWebProviderInstallTest,_tip_SearchWebProviderInstallTest>>::~test_data_control<tip2::details::merged_data<_tip_SearchWebProviderInstallTest,_tip_SearchWebProviderInstallTest>>(
        void **a1)
{
  void *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    tip2::details::shared_data<0,0,0>::end_update((__int64)v2 + 8);
    wil::com_ptr_t<tip2::details::merged_data<_tip_SearchWebProviderInstallTest,_tip_SearchWebProviderInstallTest>,wil::err_returncode_policy>::reset(a1);
  }
  return wil::com_ptr_t<tip2::details::merged_data<_tip_SearchWebProviderInstallTest,_tip_SearchWebProviderInstallTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_SearchWebProviderInstallTest,_tip_SearchWebProviderInstallTest>,wil::err_returncode_policy>(a1);
}
