/*
 * XREFs of ?SubscribeToShellReadyWnf@CActionCenterExperienceManager@@AEAAJXZ @ 0x1801536AC
 * Callers:
 *     ?RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1801529A0 (-RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18001A30C (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18008A7E0 (--1-$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??$make_wnf_subscription_state@Uempty_wnf_state@details@wil@@@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXXZ@wistd@@KPEAPEAU?$wnf_subscription_state@Uempty_wnf_state@details@wil@@@01@@Z @ 0x1800BF6E4 (--$make_wnf_subscription_state@Uempty_wnf_state@details@wil@@@details@wil@@YAJAEBU_WNF_STATE_NAM.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800C09CC (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_b_ea_1800C09CC.c)
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x1800C0A4C (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 *     ??$AsWeak@VCActionCenterExperienceManager@@@WRL@Microsoft@@YAJPEAVCActionCenterExperienceManager@@PEAVWeakRef@01@@Z @ 0x1801538B0 (--$AsWeak@VCActionCenterExperienceManager@@@WRL@Microsoft@@YAJPEAVCActionCenterExperienceManager.c)
 *     ??$Initialize@UIActionCenterExperienceManager@Experience@Shell@Internal@Windows@@@AgileGitPtr@@QEAAJAEBV?$ComPtr@UIActionCenterExperienceManager@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@@Z @ 0x1802AE470 (--$Initialize@UIActionCenterExperienceManager@Experience@Shell@Internal@Windows@@@AgileGitPtr@@Q.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     wistd::function_void___cdecl(void)_::function_void___cdecl(void)___lambda_9edfd80f047b7677be6587876a6c154e__void_ @ 0x18035C1BC (wistd--function_void___cdecl(void)_--function_void___cdecl(void)___lambda_9edfd80f047b7677be6587.c)
 *     _lambda_9edfd80f047b7677be6587876a6c154e_::_lambda_9edfd80f047b7677be6587876a6c154e_ @ 0x18035CB74 (_lambda_9edfd80f047b7677be6587876a6c154e_--_lambda_9edfd80f047b7677be6587876a6c154e_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CActionCenterExperienceManager::SubscribeToShellReadyWnf(wil::details **this)
{
  unsigned __int64 v2; // rbx
  int v3; // eax
  unsigned int v4; // edi
  __int64 *v6; // rax
  int v7; // eax
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rax
  int v11; // eax
  wil::details *v12; // rcx
  struct wil::details::wnf_subscription_state_base *v13; // rdx
  __int64 v14; // rcx
  wil::details *v15; // [rsp+28h] [rbp-59h] BYREF
  __int64 v16; // [rsp+30h] [rbp-51h] BYREF
  __int64 v17; // [rsp+38h] [rbp-49h] BYREF
  unsigned __int64 v18; // [rsp+40h] [rbp-41h] BYREF
  _BYTE v19[16]; // [rsp+48h] [rbp-39h] BYREF
  _BYTE v20[112]; // [rsp+58h] [rbp-29h] BYREF
  __int64 v21; // [rsp+C8h] [rbp+47h]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  v2 = (unsigned __int64)(this + 4) & -(__int64)(this != 0LL);
  v18 = v2;
  if ( v2 )
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v2 + 8LL))((unsigned __int64)(this + 4) & -(__int64)(this != 0LL));
  v17 = 0LL;
  v3 = AgileGitPtr::Initialize<Windows::Internal::Shell::Experience::IActionCenterExperienceManager>(&v17, &v18);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x44C,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
    if ( v2 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v2 + 16LL))(v2);
    return v4;
  }
  v16 = 0LL;
  v15 = (wil::details *)&v16;
  v6 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *((__int64 **)&v15);
  v7 = Microsoft::WRL::AsWeak<CActionCenterExperienceManager>(this, v6);
  v4 = v7;
  if ( v7 < 0 )
  {
    v8 = (unsigned int)v7;
    v9 = 1103LL;
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)v8);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
    Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>(&v17);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v18);
    return v4;
  }
  v10 = lambda_9edfd80f047b7677be6587876a6c154e_::_lambda_9edfd80f047b7677be6587876a6c154e_(v19, this, &v16);
  wistd::function_void___cdecl_void__::function_void___cdecl_void____lambda_9edfd80f047b7677be6587876a6c154e__void_(
    v20,
    v10);
  v15 = 0LL;
  v11 = wil::details::make_wnf_subscription_state<wil::details::empty_wnf_state>(
          &WNF_SHEL_SESSION_LOGON_COMPLETE,
          (__int64)v20,
          0,
          &v15);
  v12 = 0LL;
  if ( v11 >= 0 )
    v12 = v15;
  v15 = v12;
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>>::operator=(
    this + 47,
    &v15);
  if ( v15 )
    wil::details::delete_wnf_subscription_state(v15, v13);
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 24LL))(v21);
  if ( !this[47] )
  {
    v4 = -2147467259;
    v8 = 2147500037LL;
    v9 = 1111LL;
    goto LABEL_17;
  }
  v14 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
  if ( v2 )
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v2 + 16LL))(v2);
  return 0LL;
}
