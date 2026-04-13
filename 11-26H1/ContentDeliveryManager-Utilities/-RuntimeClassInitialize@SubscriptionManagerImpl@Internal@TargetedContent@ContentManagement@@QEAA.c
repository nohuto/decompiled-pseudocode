/*
 * XREFs of ?RuntimeClassInitialize@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@QEAAJXZ @ 0x180064190
 * Callers:
 *     ??$MakeAndInitialize@VSubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UISubscriptionManager@234@$$V@Details@WRL@Microsoft@@YAJPEAPEAUISubscriptionManager@Internal@TargetedContent@ContentManagement@@@Z @ 0x18005FD3C (--$MakeAndInitialize@VSubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UISubs.c)
 * Callees:
 *     ??0_lambda_62158d46a05af21ae3d227fe228597be_@@QEAA@PEAVPinWebsiteToTaskbarService@Actions@CreativeFramework@@@Z @ 0x1800236BC (--0_lambda_62158d46a05af21ae3d227fe228597be_@@QEAA@PEAVPinWebsiteToTaskbarService@Actions@Creati.c)
 *     ??0last_error_context@wil@@QEAA@XZ @ 0x1800292A8 (--0last_error_context@wil@@QEAA@XZ.c)
 *     ??1?$function@$$A6AJAEAVValueSetHelper@Triggers@CreativeFramework@@@Z@wistd@@QEAA@XZ @ 0x180029CD8 (--1-$function@$$A6AJAEAVValueSetHelper@Triggers@CreativeFramework@@@Z@wistd@@QEAA@XZ.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x18002A484 (--1last_error_context@wil@@QEAA@XZ.c)
 *     ??$make_wnf_subscription@Uempty_wnf_state@details@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXXZ@wistd@@K@Z @ 0x1800606C4 (--$make_wnf_subscription@Uempty_wnf_state@details@wil@@@wil@@YA-AV-$unique_any_t@V-$unique_stora.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1800610B8 (--1-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@.c)
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x180065548 (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 *     __security_check_cookie @ 0x1800B9110 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::RuntimeClassInitialize(
        ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl *this)
{
  __int64 *v2; // rax
  __int64 v3; // rdx
  wil::details **v4; // rax
  struct wil::details::wnf_subscription_state_base *v5; // rdx
  wil::details **v6; // rdi
  wil::details **v7; // rbx
  wil::details *v8; // r14
  wil::details *v9; // rsi
  struct wil::details::wnf_subscription_state_base *v10; // rdx
  const char *v11; // r9
  __int64 result; // rax
  int v13; // [rsp+20h] [rbp-A8h] BYREF
  wil::details *v14; // [rsp+28h] [rbp-A0h] BYREF
  char v15[8]; // [rsp+30h] [rbp-98h] BYREF
  char v16[8]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v17[14]; // [rsp+40h] [rbp-88h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  v2 = (__int64 *)_lambda_62158d46a05af21ae3d227fe228597be_::_lambda_62158d46a05af21ae3d227fe228597be_(
                    (_lambda_62158d46a05af21ae3d227fe228597be_ *)v15,
                    this);
  try
  {
    v3 = *v2;
    v17[0] = off_1800C7B80;
    v17[1] = v3;
    v17[13] = v17;
    v4 = (wil::details **)wil::make_wnf_subscription<wil::details::empty_wnf_state>(&v14, v3, (__int64)v16);
    v6 = v4;
    v7 = (wil::details **)((char *)this + 72);
    if ( v7 != v4 )
    {
      v8 = *v4;
      v9 = *v7;
      if ( *v7 )
      {
        wil::last_error_context::last_error_context((wil::last_error_context *)&v13);
        wil::details::delete_wnf_subscription_state(v9, v10);
        wil::last_error_context::~last_error_context((wil::last_error_context *)&v13);
      }
      *v7 = v8;
      *v6 = 0LL;
    }
    wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>(
      &v14,
      v5);
    wistd::function<long (CreativeFramework::Triggers::ValueSetHelper &)>::~function<long (CreativeFramework::Triggers::ValueSetHelper &)>((__int64)v16);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x3B,
                           (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\subscriptionmanager.cpp",
                           v11);
  }
  return result;
}
