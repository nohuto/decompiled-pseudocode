/*
 * XREFs of ??1?$com_ptr_t@V?$merged_data@U_tip_InputAppViewCoordinatorShowRequestTest@KeyboardHostingTipTests@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18045C640
 * Callers:
 *     _lambda_c20ddfa74c13e3309a3b622ad13c0825_::operator()_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator$_ResumeCoro$1_const_&_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs_ @ 0x1804578C0 (_lambda_c20ddfa74c13e3309a3b622ad13c0825_--operator()_winrt--WindowsUdk--UI--Shell-_ea_1804578C0.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_InputAppViewCoordinatorShowRequestTest@KeyboardHostingTipTests@@U12@@details@tip2@@@tip2@@QEAA@XZ @ 0x18045C720 (--1-$test_data_control@V-$merged_data@U_tip_InputAppViewCoordinatorShowRequestTest@KeyboardHosti.c)
 *     ??1?$tip_test@V?$merged_data@U_tip_InputAppViewCoordinatorShowRequestTest@KeyboardHostingTipTests@@U12@@details@tip2@@@tip2@@QEAA@XZ @ 0x18045C770 (--1-$tip_test@V-$merged_data@U_tip_InputAppViewCoordinatorShowRequestTest@KeyboardHostingTipTest.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_InputAppViewCoordinatorShowRequestTest@KeyboardHostingTipTests@@U12@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_InputAppViewCoordinatorShowRequestTest@KeyboardHostingTipTests@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x180468EC8 (-ensure_data@-$tip_test@V-$merged_data@U_tip_InputAppViewCoordinatorShowRequestTest@KeyboardHost.c)
 * Callees:
 *     ?Release@?$merged_data@U_tip_InputAppViewCoordinatorShowRequestTest@KeyboardHostingTipTests@@U12@@details@tip2@@AEAAKXZ @ 0x180463D40 (-Release@-$merged_data@U_tip_InputAppViewCoordinatorShowRequestTest@KeyboardHostingTipTests@@U12.c)
 */

__int64 __fastcall wil::com_ptr_t<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest,KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest,KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest>,wil::err_returncode_policy>(
        void **a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest,KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest>::Release(v1);
  return result;
}
