/*
 * XREFs of ??1?$test_data_control@V?$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details@tip2@@@tip2@@QEAA@XZ @ 0x1802B72BC
 * Callers:
 *     ?ActivateInputApp@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x180249FE0 (-ActivateInputApp@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     _lambda_75452c5cb5e77a67412b4cfed81632b0_::operator() @ 0x18046A0E4 (_lambda_75452c5cb5e77a67412b4cfed81632b0_--operator().c)
 *     _lambda_c5b63f338e787c1dc9ce32ee8c9a5927_::operator() @ 0x18046AE20 (_lambda_c5b63f338e787c1dc9ce32ee8c9a5927_--operator().c)
 *     ?CreateModalExperienceAsync@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x18046C558 (-CreateModalExperienceAsync@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     ?ShutdownServices@TouchKeyboardExperienceManager@@UEAAJPEAUIProfferService@@@Z @ 0x1804704F0 (-ShutdownServices@TouchKeyboardExperienceManager@@UEAAJPEAUIProfferService@@@Z.c)
 *     __lambda_c5b63f338e787c1dc9ce32ee8c9a5927_::operator()_::_1_::dtor$3 @ 0x1806EEF6D (__lambda_c5b63f338e787c1dc9ce32ee8c9a5927_--operator()_--_1_--dtor$3.c)
 * Callees:
 *     ?close@?$test_data_control@V?$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details@tip2@@@tip2@@QEAAXXZ @ 0x1802B72E0 (-close@-$test_data_control@V-$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@.c)
 */

__int64 __fastcall tip2::test_data_control<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppActivationTest,KeyboardHostingTipTests::_tip_InputAppActivationTest>>::~test_data_control<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppActivationTest,KeyboardHostingTipTests::_tip_InputAppActivationTest>>(
        __int64 a1)
{
  tip2::test_data_control<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppActivationTest,KeyboardHostingTipTests::_tip_InputAppActivationTest>>::close();
  return wil::com_ptr_t<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppActivationTest,KeyboardHostingTipTests::_tip_InputAppActivationTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppActivationTest,KeyboardHostingTipTests::_tip_InputAppActivationTest>,wil::err_returncode_policy>(a1);
}
