/*
 * XREFs of ?close@?$test_data_control@V?$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details@tip2@@@tip2@@QEAAXXZ @ 0x1802C619C
 * Callers:
 *     ??1?$test_data_control@V?$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details@tip2@@@tip2@@QEAA@XZ @ 0x1802C6178 (--1-$test_data_control@V-$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@.c)
 *     _lambda_764a1297a52a98304490b9424ce1b78f_::operator() @ 0x18045E3B4 (_lambda_764a1297a52a98304490b9424ce1b78f_--operator().c)
 * Callees:
 *     ?end_update@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18028ADE8 (-end_update@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1802AA078 (-reset@-$com_ptr_t@V-$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@det.c)
 */

void *__fastcall tip2::test_data_control<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppActivationTest,KeyboardHostingTipTests::_tip_InputAppActivationTest>>::close(
        void **a1)
{
  void *v2; // rcx
  void *result; // rax

  v2 = *a1;
  if ( v2 )
  {
    tip2::details::shared_data<0,0,0>::end_update((__int64)v2 + 8);
    return wil::com_ptr_t<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppActivationTest,KeyboardHostingTipTests::_tip_InputAppActivationTest>,wil::err_returncode_policy>::reset(a1);
  }
  return result;
}
