/*
 * XREFs of ?RegisterTransparencySystemPolicyChangeEvent@CWindowList@@AEAAJXZ @ 0x18003053C
 * Callers:
 *     ?Initialize@CWindowList@@QEAAJXZ @ 0x180030158 (-Initialize@CWindowList@@QEAAJXZ.c)
 * Callees:
 *     wistd::function_void___cdecl(int_const_&)_::function_void___cdecl(int_const_&)___CWindowList::RegisterTransparencySystemPolicyChangeEvent_::_2_::_lambda_1__void_ @ 0x1800308D8 (wistd--function_void___cdecl(int_const_-)_--function_void___cdecl(int_const_-)___CWindowList--Re.c)
 *     ??1?$function@$$A6AXAEBH@Z@wistd@@QEAA@XZ @ 0x18003092C (--1-$function@$$A6AXAEBH@Z@wistd@@QEAA@XZ.c)
 *     ?replace@?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@IEAAX$$QEAV123@@Z @ 0x180030954 (-replace@-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPE.c)
 *     ??$make_wnf_subscription_nothrow@H@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBH@Z@wistd@@K@Z @ 0x18008BD60 (--$make_wnf_subscription_nothrow@H@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x1800AD3B4 (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 */

__int64 __fastcall CWindowList::RegisterTransparencySystemPolicyChangeEvent(CWindowList *this)
{
  __int64 v2; // rdx
  CWindowList *wnf_subscription; // rax
  struct wil::details::wnf_subscription_state_base *v4; // rdx
  wil::details *v6; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v7[120]; // [rsp+28h] [rbp-90h] BYREF

  wistd::function_void___cdecl_int_const____::function_void___cdecl_int_const______CWindowList::RegisterTransparencySystemPolicyChangeEvent_::_2_::_lambda_1__void_(
    v7,
    this);
  wnf_subscription = (CWindowList *)wil::make_wnf_subscription_nothrow<int>(&v6, v2, v7);
  if ( (CWindowList *)((char *)this + 624) != wnf_subscription )
    wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::replace(
      (char *)this + 624,
      wnf_subscription);
  if ( v6 )
    wil::details::delete_wnf_subscription_state(v6, v4);
  wistd::function<void (int const &)>::~function<void (int const &)>(v7);
  return 0LL;
}
