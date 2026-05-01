/*
 * XREFs of ??1?$test_data_control@V?$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic@tip2@@@details@tip2@@@tip2@@QEAA@XZ @ 0x1806659A0
 * Callers:
 *     GetEnterprisePinDataFromRegistry @ 0x180669738 (GetEnterprisePinDataFromRegistry.c)
 *     GetPidlsFromTaskbarLayout @ 0x180669AEC (GetPidlsFromTaskbarLayout.c)
 *     PersistEnterprisePinDataToRegistry @ 0x18066E2A8 (PersistEnterprisePinDataToRegistry.c)
 *     ShouldAddEnterprisePinToOutput @ 0x180670224 (ShouldAddEnterprisePinToOutput.c)
 *     _PersistEnterprisePinDataToRegistry_::_1_::catch$4 @ 0x1806DD4D4 (_PersistEnterprisePinDataToRegistry_--_1_--catch$4.c)
 *     _ShouldAddEnterprisePinToOutput_::_1_::catch$26 @ 0x1806DD581 (_ShouldAddEnterprisePinToOutput_--_1_--catch$26.c)
 * Callees:
 *     ?end_update@?$shared_data@$0A@$0A@$00@details@tip2@@AEAAXXZ @ 0x180673914 (-end_update@-$shared_data@$0A@$0A@$00@details@tip2@@AEAAXXZ.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic@tip2@@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180673FEC (-reset@-$com_ptr_t@V-$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest.c)
 */

__int64 __fastcall tip2::test_data_control<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>::~test_data_control<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>(
        void **a1)
{
  char *v2; // rcx

  v2 = (char *)*a1;
  if ( v2 )
  {
    tip2::details::shared_data<0,0,1>::end_update(v2 + 8);
    wil::com_ptr_t<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>,wil::err_returncode_policy>::reset(a1);
  }
  return wil::com_ptr_t<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>,wil::err_returncode_policy>(a1);
}
