/*
 * XREFs of ?RegisterForEnergySaverStateChange@AcrylicPolicyManager@@AEAAJXZ @ 0x18010A4EC
 * Callers:
 *     ?SubscribeToServices@AcrylicPolicyManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x180108AB0 (-SubscribeToServices@AcrylicPolicyManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180065220 (--1-$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$function@$$A6A_NJ@Z@wistd@@QEAA@XZ @ 0x1800F7C3C (--1-$function@$$A6A_NJ@Z@wistd@@QEAA@XZ.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800F9150 (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_b_ea_1800F9150.c)
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x1800F91D4 (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 *     ??$Initialize@UIBatterySaverStateChangedHandler@@@AgileGitPtr@@QEAAJAEBV?$ComPtr@UIBatterySaverStateChangedHandler@@@WRL@Microsoft@@@Z @ 0x1802A68B8 (--$Initialize@UIBatterySaverStateChangedHandler@@@AgileGitPtr@@QEAAJAEBV-$ComPtr@UIBatterySaverS.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$make_wnf_subscription_state@U_EA_EVENT_HEADER@@@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBU_EA_EVENT_HEADER@@@Z@wistd@@KPEAPEAU?$wnf_subscription_state@U_EA_EVENT_HEADER@@@01@@Z @ 0x1802DA0C0 (--$make_wnf_subscription_state@U_EA_EVENT_HEADER@@@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV-$.c)
 *     wistd::__function::__func__lambda_7ddd884476da380d0afd4fa74f7a294a__void___cdecl(_EA_EVENT_HEADER_const_&)_::__func__lambda_7ddd884476da380d0afd4fa74f7a294a__void___cdecl(_EA_EVENT_HEADER_const_&)_ @ 0x1802DA4DC (wistd--__function--__func__lambda_7ddd884476da380d0afd4fa74f7a294a__void___cdecl(_EA_EVENT_HEADE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AcrylicPolicyManager::RegisterForEnergySaverStateChange(wil::details **this)
{
  unsigned __int64 v2; // rcx
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  int wnf_subscription; // eax
  wil::details *v10; // rcx
  struct wil::details::wnf_subscription_state_base *v11; // rdx
  wil::details *v13; // [rsp+20h] [rbp-49h] BYREF
  wil::details *v14; // [rsp+28h] [rbp-41h] BYREF
  unsigned __int64 v15; // [rsp+30h] [rbp-39h] BYREF
  _BYTE v16[8]; // [rsp+38h] [rbp-31h] BYREF
  _BYTE v17[104]; // [rsp+40h] [rbp-29h] BYREF
  __int64 v18; // [rsp+A8h] [rbp+3Fh]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v2 = (unsigned __int64)(this + 17) & -(__int64)(this != 0LL);
  v15 = v2;
  if ( v2 )
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v2 + 8LL))(v2);
  v14 = 0LL;
  v3 = AgileGitPtr::Initialize<IBatterySaverStateChangedHandler>(&v14, &v15);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v13 = v14;
    if ( v14 )
      (*(void (__fastcall **)(wil::details *))(*(_QWORD *)v14 + 8LL))(v14);
    v18 = 0LL;
    v18 = wistd::__function::__func__lambda_7ddd884476da380d0afd4fa74f7a294a__void___cdecl__EA_EVENT_HEADER_const____::__func__lambda_7ddd884476da380d0afd4fa74f7a294a__void___cdecl__EA_EVENT_HEADER_const____(
            v17,
            &v13);
    Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>((__int64 *)&v13);
    v13 = 0LL;
    wnf_subscription = wil::details::make_wnf_subscription_state<_EA_EVENT_HEADER>(v7, v16, v8, &v13);
    v10 = 0LL;
    if ( wnf_subscription >= 0 )
      v10 = v13;
    v13 = v10;
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>>::operator=(
      this + 42,
      &v13);
    if ( v13 )
      wil::details::delete_wnf_subscription_state(v13, v11);
    wistd::function<bool (long)>::~function<bool (long)>((__int64)v16);
    if ( this[42] )
    {
      v4 = 0;
      goto LABEL_15;
    }
    v4 = -2147024882;
    v5 = 2147942414LL;
    v6 = 176LL;
  }
  else
  {
    v5 = (unsigned int)v3;
    v6 = 164LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (int)"pcshell\\twinui\\acrylicmanager\\lib\\acrylicpolicymanager.cpp",
    (const char *)v5);
LABEL_15:
  Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>((__int64 *)&v14);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v15);
  return v4;
}
