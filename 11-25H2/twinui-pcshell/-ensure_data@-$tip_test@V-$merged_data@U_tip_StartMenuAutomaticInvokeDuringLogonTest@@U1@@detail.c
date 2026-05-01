/*
 * XREFs of ?ensure_data@?$tip_test@V?$merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x180450F68
 * Callers:
 *     ??0XamlLauncher@@QEAA@XZ @ 0x18024EE7C (--0XamlLauncher@@QEAA@XZ.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@U1@@details@tip2@@@1@XZ @ 0x18044CFEC (--C-$tip_test@V-$merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@U1@@details@tip2@@@t.c)
 * Callees:
 *     ?FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x18028D664 (-FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1802CF308 (--1-$com_ptr_t@V-$merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@U1@@details@tip2@@U.c)
 *     ??0?$merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@U1@@details@tip2@@QEAA@XZ @ 0x18044CDB0 (--0-$merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@U1@@details@tip2@@QEAA@XZ.c)
 *     ??4?$com_ptr_t@V?$merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18044CF84 (--4-$com_ptr_t@V-$merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@U1@@details@tip2@@U.c)
 */

void **__fastcall tip2::tip_test<tip2::details::merged_data<_tip_StartMenuAutomaticInvokeDuringLogonTest,_tip_StartMenuAutomaticInvokeDuringLogonTest>>::ensure_data(
        void **a1)
{
  LPVOID v2; // rax
  wil::details::in1diag3 *v3; // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  if ( !*a1 )
  {
    v2 = CoTaskMemAlloc(0x130uLL);
    if ( !v2 )
      wil::details::in1diag3::FailFastImmediate_Unexpected(v3);
    v5 = tip2::details::merged_data<_tip_StartMenuAutomaticInvokeDuringLogonTest,_tip_StartMenuAutomaticInvokeDuringLogonTest>::merged_data<_tip_StartMenuAutomaticInvokeDuringLogonTest,_tip_StartMenuAutomaticInvokeDuringLogonTest>((__int64)v2);
    wil::com_ptr_t<tip2::details::merged_data<_tip_StartMenuAutomaticInvokeDuringLogonTest,_tip_StartMenuAutomaticInvokeDuringLogonTest>,wil::err_returncode_policy>::operator=(
      a1,
      (void **)&v5);
    wil::com_ptr_t<tip2::details::merged_data<_tip_StartMenuAutomaticInvokeDuringLogonTest,_tip_StartMenuAutomaticInvokeDuringLogonTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_StartMenuAutomaticInvokeDuringLogonTest,_tip_StartMenuAutomaticInvokeDuringLogonTest>,wil::err_returncode_policy>((void **)&v5);
  }
  return a1;
}
