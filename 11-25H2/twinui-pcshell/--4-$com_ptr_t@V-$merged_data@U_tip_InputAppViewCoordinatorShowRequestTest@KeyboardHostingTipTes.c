/*
 * XREFs of ??4?$com_ptr_t@V?$merged_data@U_tip_InputAppViewCoordinatorShowRequestTest@KeyboardHostingTipTests@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18045D0B8
 * Callers:
 *     _lambda_c20ddfa74c13e3309a3b622ad13c0825_::operator()_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator$_ResumeCoro$1_const_&_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs_ @ 0x1804578C0 (_lambda_c20ddfa74c13e3309a3b622ad13c0825_--operator()_winrt--WindowsUdk--UI--Shell-_ea_1804578C0.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_InputAppViewCoordinatorShowRequestTest@KeyboardHostingTipTests@@U12@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_InputAppViewCoordinatorShowRequestTest@KeyboardHostingTipTests@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x180468EC8 (-ensure_data@-$tip_test@V-$merged_data@U_tip_InputAppViewCoordinatorShowRequestTest@KeyboardHost.c)
 * Callees:
 *     ?Release@?$merged_data@U_tip_InputAppViewCoordinatorShowRequestTest@KeyboardHostingTipTests@@U12@@details@tip2@@AEAAKXZ @ 0x180463D40 (-Release@-$merged_data@U_tip_InputAppViewCoordinatorShowRequestTest@KeyboardHostingTipTests@@U12.c)
 */

void **__fastcall wil::com_ptr_t<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest,KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest>,wil::err_returncode_policy>::operator=(
        void **a1,
        void **a2)
{
  void *v2; // rax
  void *v4; // rcx

  v2 = *a2;
  *a2 = 0LL;
  v4 = *a1;
  *a1 = v2;
  if ( v4 )
    tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest,KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest>::Release(v4);
  return a1;
}
