/*
 * XREFs of ?SubscribeEvents@TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@AEAAXXZ @ 0x18014B3A4
 * Callers:
 *     ??0TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@QEAA@XZ @ 0x18014B040 (--0TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@QEAA@XZ.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??$make_wnf_subscription_state@Uempty_wnf_state@details@wil@@@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXXZ@wistd@@KPEAPEAU?$wnf_subscription_state@Uempty_wnf_state@details@wil@@@01@@Z @ 0x1800BF6E4 (--$make_wnf_subscription_state@Uempty_wnf_state@details@wil@@@details@wil@@YAJAEBU_WNF_STATE_NAM.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800C09CC (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_b_ea_1800C09CC.c)
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x1800C0A4C (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 *     ??$make_wnf_subscription_state@K@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBK@Z@wistd@@KPEAPEAU?$wnf_subscription_state@K@01@@Z @ 0x1800C0AB8 (--$make_wnf_subscription_state@K@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV-$function@$$A6AXAEB.c)
 *     ??$get_weak@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@@?$root_implements@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@UITapInvokeSetting@TouchKeyboard@Shell@Internal@Windows@winrt@@UITapInvokeTelemetryDataProvider@56789@UITapInvokeSettingTester@56789@@impl@winrt@@IEAA?AU?$weak_ref@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@@2@XZ @ 0x1800FB3AC (--$get_weak@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@@-$root_implements@UTouchKey.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting::SubscribeEvents(wil::details **this)
{
  __int64 v2; // rax
  int v3; // eax
  wil::details *v4; // rcx
  struct wil::details::wnf_subscription_state_base *v5; // rdx
  __int64 v6; // rax
  int v7; // r8d
  int wnf_subscription; // eax
  wil::details *v9; // rcx
  struct wil::details::wnf_subscription_state_base *v10; // rdx
  wil::details *v11; // [rsp+20h] [rbp-39h] BYREF
  __int64 v12; // [rsp+28h] [rbp-31h] BYREF
  _BYTE v13[8]; // [rsp+30h] [rbp-29h] BYREF
  void **v14; // [rsp+38h] [rbp-21h] BYREF
  __int64 v15; // [rsp+40h] [rbp-19h]
  void ***v16; // [rsp+A0h] [rbp+47h]

  winrt::impl::root_implements<SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting,winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSetting,winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeTelemetryDataProvider,winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSettingTester>::get_weak<SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting>(
    (__int64)this,
    &v12);
  v2 = v12;
  v12 = 0LL;
  v14 = &wistd::__function::__func<_lambda_27e2a3ac73e95be6f7403a2f326512f5_,void (void)>::`vftable';
  v15 = v2;
  v16 = &v14;
  v11 = 0LL;
  v3 = wil::details::make_wnf_subscription_state<wil::details::empty_wnf_state>(
         &WNF_ENTR_ENABLETOUCHKEYBOARDAUTOINVOKE_POLICY_VALUE_CHANGED,
         (__int64)v13,
         0,
         &v11);
  v4 = 0LL;
  if ( v3 >= 0 )
    v4 = v11;
  v11 = v4;
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>>::operator=(
    this + 12,
    &v11);
  if ( v11 )
    wil::details::delete_wnf_subscription_state(v11, v5);
  if ( v16 )
    ((void (__fastcall *)(void ***))(*v16)[3])(v16);
  if ( v12 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v12);
  winrt::impl::root_implements<SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting,winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSetting,winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeTelemetryDataProvider,winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSettingTester>::get_weak<SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting>(
    (__int64)this,
    &v12);
  v6 = v12;
  v12 = 0LL;
  v14 = &wistd::__function::__func<_lambda_919ed0165ca58c719ea15f04406310d9_,void (unsigned long const &)>::`vftable';
  v15 = v6;
  v16 = &v14;
  v11 = 0LL;
  wnf_subscription = wil::details::make_wnf_subscription_state<unsigned long>(
                       &WNF_TKBN_DESKTOP_MODE_AUTO_IHM,
                       (__int64)v13,
                       v7,
                       &v11);
  v9 = 0LL;
  if ( wnf_subscription >= 0 )
    v9 = v11;
  v11 = v9;
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>>::operator=(
    this + 13,
    &v11);
  if ( v11 )
    wil::details::delete_wnf_subscription_state(v11, v10);
  if ( v16 )
    ((void (__fastcall *)(void ***))(*v16)[3])(v16);
  if ( v12 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v12);
}
