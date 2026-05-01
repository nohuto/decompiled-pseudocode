/*
 * XREFs of ??1?$test_data_control@V?$merged_data@U_tip_FileMappingTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180624240
 * Callers:
 *     ?GetDataFromFileMappings@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA?AURemoteSystem@RemoteSystemData@@AEBUWindowId@UI@56@@Z @ 0x180626BC8 (-GetDataFromFileMappings@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@win.c)
 * Callees:
 *     ?end_update@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18028B08C (-end_update@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_FileMappingTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18062EF14 (-reset@-$com_ptr_t@V-$merged_data@U_tip_FileMappingTipTest@@U1@@details@tip2@@Uerr_returncode_po.c)
 */

__int64 __fastcall tip2::test_data_control<tip2::details::merged_data<_tip_FileMappingTipTest,_tip_FileMappingTipTest>>::~test_data_control<tip2::details::merged_data<_tip_FileMappingTipTest,_tip_FileMappingTipTest>>(
        void **a1)
{
  void *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    tip2::details::shared_data<1,0,0>::end_update((__int64)v2 + 8);
    wil::com_ptr_t<tip2::details::merged_data<_tip_FileMappingTipTest,_tip_FileMappingTipTest>,wil::err_returncode_policy>::reset(a1);
  }
  return wil::com_ptr_t<tip2::details::merged_data<_tip_FileMappingTipTest,_tip_FileMappingTipTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_FileMappingTipTest,_tip_FileMappingTipTest>,wil::err_returncode_policy>(a1);
}
