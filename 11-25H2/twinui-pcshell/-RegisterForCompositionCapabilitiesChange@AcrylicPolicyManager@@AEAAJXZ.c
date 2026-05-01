/*
 * XREFs of ?RegisterForCompositionCapabilitiesChange@AcrylicPolicyManager@@AEAAJXZ @ 0x1800BF2E0
 * Callers:
 *     ?SubscribeToServices@AcrylicPolicyManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800BF0C0 (-SubscribeToServices@AcrylicPolicyManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18008A7E0 (--1-$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??$Initialize@UICompositionCapabilitiesChangedHandler@@@AgileGitPtr@@QEAAJAEBV?$ComPtr@UICompositionCapabilitiesChangedHandler@@@WRL@Microsoft@@@Z @ 0x1800BF4AC (--$Initialize@UICompositionCapabilitiesChangedHandler@@@AgileGitPtr@@QEAAJAEBV-$ComPtr@UIComposi.c)
 *     ??$make_wnf_subscription_state@Uempty_wnf_state@details@wil@@@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXXZ@wistd@@KPEAPEAU?$wnf_subscription_state@Uempty_wnf_state@details@wil@@@01@@Z @ 0x1800BF6E4 (--$make_wnf_subscription_state@Uempty_wnf_state@details@wil@@@details@wil@@YAJAEBU_WNF_STATE_NAM.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800C09CC (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_b_ea_1800C09CC.c)
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x1800C0A4C (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 *     wistd::__function::__func__lambda_55d3415b5bbdf1aa4e142cc056f585c1__void___cdecl(void)_::__func__lambda_55d3415b5bbdf1aa4e142cc056f585c1__void___cdecl(void)_ @ 0x1802CB9E4 (wistd--__function--__func__lambda_55d3415b5bbdf1aa4e142cc056f585c1__void___cdecl(void)_--__func_.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AcrylicPolicyManager::RegisterForCompositionCapabilitiesChange(AcrylicPolicyManager *this)
{
  unsigned __int64 v2; // rbx
  int v3; // eax
  unsigned int v4; // edi
  int v6; // eax
  wil::details *v7; // rcx
  struct wil::details::wnf_subscription_state_base *v8; // rdx
  wil::details *v9; // [rsp+28h] [rbp-49h] BYREF
  wil::details *v10; // [rsp+30h] [rbp-41h] BYREF
  unsigned __int64 v11; // [rsp+38h] [rbp-39h] BYREF
  _BYTE v12[8]; // [rsp+40h] [rbp-31h] BYREF
  _BYTE v13[104]; // [rsp+48h] [rbp-29h] BYREF
  __int64 v14; // [rsp+B0h] [rbp+3Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v2 = ((unsigned __int64)this + 144) & -(__int64)(this != 0LL);
  v11 = v2;
  if ( v2 )
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v2 + 8LL))(((unsigned __int64)this + 144) & -(__int64)(this != 0LL));
  v10 = 0LL;
  v3 = AgileGitPtr::Initialize<ICompositionCapabilitiesChangedHandler>(&v10, &v11);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCE,
      (int)"pcshell\\twinui\\acrylicmanager\\lib\\acrylicpolicymanager.cpp",
      (const char *)(unsigned int)v3);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v10);
    if ( v2 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v2 + 16LL))(v2);
    return v4;
  }
  v9 = v10;
  if ( v10 )
    (*(void (__fastcall **)(wil::details *))(*(_QWORD *)v10 + 8LL))(v10);
  v14 = 0LL;
  v14 = wistd::__function::__func__lambda_55d3415b5bbdf1aa4e142cc056f585c1__void___cdecl_void__::__func__lambda_55d3415b5bbdf1aa4e142cc056f585c1__void___cdecl_void__(
          v13,
          &v9);
  Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>((__int64 *)&v9);
  v9 = 0LL;
  v6 = wil::details::make_wnf_subscription_state<wil::details::empty_wnf_state>(
         &WNF_DWM_COMPOSITIONCAPABILITIES,
         v12,
         0LL,
         &v9);
  v7 = 0LL;
  if ( v6 >= 0 )
    v7 = v9;
  v9 = v7;
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>>::operator=(
    (char *)this + 344,
    &v9);
  if ( v9 )
    wil::details::delete_wnf_subscription_state(v9, v8);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 24LL))(v14);
  if ( !*((_QWORD *)this + 43) )
  {
    v4 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD9,
      (int)"pcshell\\twinui\\acrylicmanager\\lib\\acrylicpolicymanager.cpp",
      (const char *)0x8007000ELL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v10);
    if ( v2 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v2 + 16LL))(v2);
    return v4;
  }
  Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>((__int64 *)&v10);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v11);
  return 0LL;
}
