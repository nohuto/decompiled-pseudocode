/*
 * XREFs of ?reset@?$com_ptr_t@V?$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic@tip2@@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18069AD08
 * Callers:
 *     ??1?$test_data_control@V?$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic@tip2@@@details@tip2@@@tip2@@QEAA@XZ @ 0x18068C0C0 (--1-$test_data_control@V-$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@V.c)
 * Callees:
 *     ?Release@?$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic@tip2@@@details@tip2@@AEAAKXZ @ 0x180695A18 (-Release@-$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic.c)
 */

volatile signed __int32 *__fastcall wil::com_ptr_t<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>,wil::err_returncode_policy>::reset(
        volatile signed __int32 **a1,
        unsigned int a2)
{
  volatile signed __int32 *result; // rax

  result = *a1;
  *a1 = 0LL;
  if ( result )
    return (volatile signed __int32 *)tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>::Release(
                                        result,
                                        a2);
  return result;
}
