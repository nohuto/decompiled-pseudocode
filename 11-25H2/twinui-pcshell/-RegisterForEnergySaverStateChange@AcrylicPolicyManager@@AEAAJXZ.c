/*
 * XREFs of ?RegisterForEnergySaverStateChange@AcrylicPolicyManager@@AEAAJXZ @ 0x1802369B0
 * Callers:
 *     ?SubscribeToServices@AcrylicPolicyManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800BF0C0 (-SubscribeToServices@AcrylicPolicyManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$function@$$A6A_NJ@Z@wistd@@QEAA@XZ @ 0x18005BC88 (--1-$function@$$A6A_NJ@Z@wistd@@QEAA@XZ.c)
 *     ??1?$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18008A7E0 (--1-$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800C09CC (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_b_ea_1800C09CC.c)
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x1800C0A4C (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 *     ??$make_wnf_subscription_state@U_SEB_EVENT_HEADER@@@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBU_SEB_EVENT_HEADER@@@Z@wistd@@KPEAPEAU?$wnf_subscription_state@U_SEB_EVENT_HEADER@@@01@@Z @ 0x1801F35C4 (--$make_wnf_subscription_state@U_SEB_EVENT_HEADER@@@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV-.c)
 *     ??$Initialize@UIBatterySaverStateChangedHandler@@@AgileGitPtr@@QEAAJAEBV?$ComPtr@UIBatterySaverStateChangedHandler@@@WRL@Microsoft@@@Z @ 0x1802AE7EC (--$Initialize@UIBatterySaverStateChangedHandler@@@AgileGitPtr@@QEAAJAEBV-$ComPtr@UIBatterySaverS.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     wistd::__function::__func__lambda_f34156996333d9e1fc69e3257dca72a2__void___cdecl(_SEB_EVENT_HEADER_const_&)_::__func__lambda_f34156996333d9e1fc69e3257dca72a2__void___cdecl(_SEB_EVENT_HEADER_const_&)_ @ 0x1802E1084 (wistd--__function--__func__lambda_f34156996333d9e1fc69e3257dca72a2__void___cdecl(_SEB_EVENT_HEAD.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_EcoModeEnergySaver@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802E1D84 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_EcoModeEnergySaver@@@details@wil@@QEAAX_N.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall AcrylicPolicyManager::RegisterForEnergySaverStateChange(wil::details **this)
{
  unsigned int v2; // edi
  char *v3; // rbx
  char *v4; // rax
  char *v5; // r14
  char *v6; // rsi
  int v7; // eax
  __int64 v8; // rdx
  unsigned int v9; // esi
  int v11; // r8d
  int wnf_subscription; // eax
  wil::details *v13; // rcx
  struct wil::details::wnf_subscription_state_base *v14; // rdx
  wil::details *v15; // [rsp+28h] [rbp-59h] BYREF
  wil::details *v16; // [rsp+30h] [rbp-51h] BYREF
  char *v17; // [rsp+38h] [rbp-49h] BYREF
  char v18[8]; // [rsp+40h] [rbp-41h] BYREF
  char v19[104]; // [rsp+48h] [rbp-39h] BYREF
  __int64 v20; // [rsp+B0h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  v2 = 0;
  if ( this )
  {
    v3 = (char *)(this + 17);
    v4 = (char *)(this + 17);
    v5 = (char *)(this + 17);
    v6 = (char *)(this + 17);
  }
  else
  {
    v3 = 0LL;
    v4 = 0LL;
    v5 = 0LL;
    v6 = 0LL;
  }
  v17 = v3;
  if ( v4 )
  {
    (*(void (__fastcall **)(char *))(*(_QWORD *)v3 + 8LL))(v3);
    v5 = v6;
  }
  v16 = 0LL;
  v7 = AgileGitPtr::Initialize<IBatterySaverStateChangedHandler>(&v16, &v17);
  v9 = v7;
  if ( v7 >= 0 )
  {
    LOBYTE(v8) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_EcoModeEnergySaver>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_EcoModeEnergySaver>::GetImpl'::`2'::impl,
      v8);
    v15 = v16;
    if ( v16 )
      (*(void (__fastcall **)(wil::details *))(*(_QWORD *)v16 + 8LL))(v16);
    v20 = 0LL;
    v20 = wistd::__function::__func__lambda_f34156996333d9e1fc69e3257dca72a2__void___cdecl__SEB_EVENT_HEADER_const____::__func__lambda_f34156996333d9e1fc69e3257dca72a2__void___cdecl__SEB_EVENT_HEADER_const____(
            v19,
            &v15);
    Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>((__int64 *)&v15);
    v15 = 0LL;
    wnf_subscription = wil::details::make_wnf_subscription_state<_SEB_EVENT_HEADER>(
                         &WNF_SEB_ENERGY_SAVER_STATE_V2,
                         (__int64)v18,
                         v11,
                         &v15);
    v13 = 0LL;
    if ( wnf_subscription >= 0 )
      v13 = v15;
    v15 = v13;
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>>::operator=(
      this + 42,
      &v15);
    if ( v15 )
      wil::details::delete_wnf_subscription_state(v15, v14);
    wistd::function<bool (long)>::~function<bool (long)>((__int64)v18);
    if ( !this[42] )
    {
      v2 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB3,
        (int)"pcshell\\twinui\\acrylicmanager\\lib\\acrylicpolicymanager.cpp",
        (const char *)0x8007000ELL);
    }
    Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>((__int64 *)&v16);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v17);
    return v2;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA5,
      (int)"pcshell\\twinui\\acrylicmanager\\lib\\acrylicpolicymanager.cpp",
      (const char *)(unsigned int)v7);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v16);
    if ( v5 )
      (*(void (__fastcall **)(char *))(*(_QWORD *)v3 + 16LL))(v3);
    return v9;
  }
}
