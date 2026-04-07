/*
 * XREFs of ?replace@?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@IEAAX$$QEAV123@@Z @ 0x180030954
 * Callers:
 *     ?RegisterTransparencySystemPolicyChangeEvent@CWindowList@@AEAAJXZ @ 0x18003053C (-RegisterTransparencySystemPolicyChangeEvent@CWindowList@@AEAAJXZ.c)
 * Callees:
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x180079770 (--1last_error_context@wil@@QEAA@XZ.c)
 *     ??0last_error_context@wil@@QEAA@XZ @ 0x18008D29C (--0last_error_context@wil@@QEAA@XZ.c)
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x1800AD3B4 (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 */

void __fastcall wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::replace(
        wil::details **a1,
        wil::details **a2)
{
  wil::details *v2; // rsi
  wil::details *v4; // rbp
  struct wil::details::wnf_subscription_state_base *v6; // rdx
  char v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  v4 = *a2;
  if ( *a1 )
  {
    wil::last_error_context::last_error_context((wil::last_error_context *)&v7);
    wil::details::delete_wnf_subscription_state(v2, v6);
    wil::last_error_context::~last_error_context((wil::last_error_context *)&v7);
  }
  *a1 = v4;
  *a2 = 0LL;
}
