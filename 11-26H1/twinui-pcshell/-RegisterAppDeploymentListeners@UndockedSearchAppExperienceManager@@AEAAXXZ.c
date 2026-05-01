/*
 * XREFs of ?RegisterAppDeploymentListeners@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1803B6FE0
 * Callers:
 *     ?RuntimeClassInitialize@UndockedSearchAppExperienceManager@@QEAAJPEAUIServiceProvider@@AEBUViewCoordinator@Shell@UI@WindowsUdk@winrt@@V?$unique_ptr@VIUndockedSearchAppExperienceManagerConfig@@U?$default_delete@VIUndockedSearchAppExperienceManagerConfig@@@wistd@@@wistd@@V?$unique_ptr@VISearchAppPositioner@@U?$default_delete@VISearchAppPositioner@@@wistd@@@9@3V?$unique_ptr@VISearchAppActivator@@U?$default_delete@VISearchAppActivator@@@wistd@@@9@@Z @ 0x1803B8640 (-RuntimeClassInitialize@UndockedSearchAppExperienceManager@@QEAAJPEAUIServiceProvider@@AEBUViewC.c)
 * Callees:
 *     ??1?$function@$$A6A_NJ@Z@wistd@@QEAA@XZ @ 0x1800F7C3C (--1-$function@$$A6A_NJ@Z@wistd@@QEAA@XZ.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800F9150 (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_b_ea_1800F9150.c)
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x1800F91D4 (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 *     ??$make_wnf_subscription@Uempty_wnf_state@details@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXXZ@wistd@@K@Z @ 0x18010A04C (--$make_wnf_subscription@Uempty_wnf_state@details@wil@@@wil@@YA-AV-$unique_any_t@V-$unique_stora.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall UndockedSearchAppExperienceManager::RegisterAppDeploymentListeners(wil::details **this)
{
  wil::details **v2; // rax
  struct wil::details::wnf_subscription_state_base *v3; // rdx
  wil::details **v4; // rax
  struct wil::details::wnf_subscription_state_base *v5; // rdx
  wil::details *v6; // [rsp+20h] [rbp-39h] BYREF
  _BYTE v7[8]; // [rsp+28h] [rbp-31h] BYREF
  __int64 (__fastcall **v8)(); // [rsp+30h] [rbp-29h] BYREF
  wil::details **v9; // [rsp+38h] [rbp-21h]
  __int64 (__fastcall ***v10)(); // [rsp+98h] [rbp+3Fh]

  v8 = off_180737BD8;
  v9 = this;
  v10 = &v8;
  v2 = (wil::details **)wil::make_wnf_subscription<wil::details::empty_wnf_state>(
                          &v6,
                          (__int64)&WNF_AI_PACKAGEINSTALL,
                          (__int64)v7,
                          0);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>>::operator=(
    this + 117,
    v2);
  if ( v6 )
    wil::details::delete_wnf_subscription_state(v6, v3);
  wistd::function<bool (long)>::~function<bool (long)>((__int64)v7);
  v8 = off_180737BD8;
  v9 = this;
  v10 = &v8;
  v4 = (wil::details **)wil::make_wnf_subscription<wil::details::empty_wnf_state>(
                          &v6,
                          (__int64)&WNF_AI_PACKAGEUNINSTALL,
                          (__int64)v7,
                          0);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>>::operator=(
    this + 118,
    v4);
  if ( v6 )
    wil::details::delete_wnf_subscription_state(v6, v5);
  wistd::function<bool (long)>::~function<bool (long)>((__int64)v7);
}
