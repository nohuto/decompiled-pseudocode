/*
 * XREFs of ?reset@?$com_ptr_t@V?$merged_data@U_tip_InputAppViewCoordinatorShowRequestTest@KeyboardHostingTipTests@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180469E50
 * Callers:
 *     ??1?$test_data_control@V?$merged_data@U_tip_InputAppViewCoordinatorShowRequestTest@KeyboardHostingTipTests@@U12@@details@tip2@@@tip2@@QEAA@XZ @ 0x18045C720 (--1-$test_data_control@V-$merged_data@U_tip_InputAppViewCoordinatorShowRequestTest@KeyboardHosti.c)
 * Callees:
 *     ?Release@?$merged_data@U_tip_InputAppViewCoordinatorShowRequestTest@KeyboardHostingTipTests@@U12@@details@tip2@@AEAAKXZ @ 0x180463D40 (-Release@-$merged_data@U_tip_InputAppViewCoordinatorShowRequestTest@KeyboardHostingTipTests@@U12.c)
 */

volatile signed __int32 *__fastcall wil::com_ptr_t<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest,KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest>,wil::err_returncode_policy>::reset(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *result; // rax

  result = *a1;
  *a1 = 0LL;
  if ( result )
    return (volatile signed __int32 *)tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest,KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest>::Release(result);
  return result;
}
