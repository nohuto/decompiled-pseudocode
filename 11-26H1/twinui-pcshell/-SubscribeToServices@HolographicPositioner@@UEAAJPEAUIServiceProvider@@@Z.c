/*
 * XREFs of ?SubscribeToServices@HolographicPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x18008F910
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180046480 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?IsHolographicWin32SlatesFeatureEnabled@@YA_NXZ @ 0x18008F440 (-IsHolographicWin32SlatesFeatureEnabled@@YA_NXZ.c)
 *     ??$make_wnf_subscription_state@W4ShellState@Holographic@Shell@Internal@Windows@@@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBW4ShellState@Holographic@Shell@Internal@Windows@@@Z@wistd@@KPEAPEAU?$wnf_subscription_state@W4ShellState@Holographic@Shell@Internal@Windows@@@01@@Z @ 0x1800908C8 (--$make_wnf_subscription_state@W4ShellState@Holographic@Shell@Internal@Windows@@@details@wil@@YA.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800F9150 (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_b_ea_1800F9150.c)
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x1800F91D4 (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 *     ??0abi_guard@?$root_implements@Uiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@Ucollection_version@23@@winrt@@U?$IIterator@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@QEAA@AEAUiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@Ucollection_version@23@@3@@Z @ 0x18027F3E0 (--0abi_guard@-$root_implements@Uiterator@-$iterable_base@U-$map_impl@Uhstring@winrt@@URemoteSyst.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall HolographicPositioner::SubscribeToServices(HolographicPositioner *this, struct IServiceProvider *a2)
{
  char *v2; // rbx
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  HRESULT (__stdcall *v6)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  HRESULT (__stdcall *v7)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  HRESULT (__stdcall *v8)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  HRESULT (__stdcall *v9)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  HRESULT (__stdcall *v10)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  __int64 *v11; // rax
  int v12; // ebx
  HRESULT (__stdcall *v13)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // eax
  wil::details *v17; // rcx
  struct wil::details::wnf_subscription_state_base *v18; // rdx
  HRESULT (__stdcall *v20)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  __int64 v21; // rdx
  wil::details *v22; // [rsp+30h] [rbp-59h] BYREF
  _BYTE v23[8]; // [rsp+38h] [rbp-51h] BYREF
  _BYTE v24[8]; // [rsp+40h] [rbp-49h] BYREF
  _QWORD v25[13]; // [rsp+48h] [rbp-41h] BYREF
  _QWORD *v26; // [rsp+B0h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  v2 = (char *)this + 192;
  QueryService = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 24);
  ((void (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))QueryService)(
    a2,
    &GUID_90dcc0b6_b98f_4554_aa41_ac5e28ba0261,
    &GUID_90dcc0b6_b98f_4554_aa41_ac5e28ba0261,
    v2);
  v6 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 68);
  ((void (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v6)(
    a2,
    &GUID_dd621a70_9d93_4d88_8e1c_8b8412f81664,
    &GUID_dd621a70_9d93_4d88_8e1c_8b8412f81664,
    (char *)this + 544);
  v7 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 25);
  ((void (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v7)(
    a2,
    &CLSID_HolographicForegroundAssistant,
    &GUID_0249c870_f630_4a75_8d01_b316c814157a,
    (char *)this + 200);
  v8 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 30);
  ((void (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v8)(
    a2,
    &CLSID_HolographicViewHostItemLedger,
    &GUID_6263b38f_a858_4070_9a3b_d938762099cc,
    (char *)this + 240);
  v9 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 31);
  ((void (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v9)(
    a2,
    &GUID_76841b3d_5143_43cd_9844_a4a96d41c7db,
    &GUID_76841b3d_5143_43cd_9844_a4a96d41c7db,
    (char *)this + 248);
  if ( IsHolographicWin32SlatesFeatureEnabled() )
  {
    v20 = a2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 26);
    ((void (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v20)(
      a2,
      &GUID_d1d6b481_41b7_4e01_ad15_f8948c7d1df3,
      &GUID_d1d6b481_41b7_4e01_ad15_f8948c7d1df3,
      (char *)this + 208);
  }
  v10 = a2->lpVtbl->QueryService;
  v11 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>((__int64 *)this + 23);
  v12 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))v10)(
          a2,
          &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
          &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
          v11);
  if ( v12 < 0 )
  {
    v21 = 390LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v21,
      (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)(unsigned int)v12);
    return (unsigned int)v12;
  }
  v12 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, char *))(**((_QWORD **)this + 23) + 96LL))(
          *((_QWORD *)this + 23),
          ((unsigned __int64)this + 128) & -(__int64)(this != (HolographicPositioner *)48),
          (char *)this + 216);
  if ( v12 < 0 )
  {
    v21 = 391LL;
    goto LABEL_15;
  }
  v13 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 28);
  v12 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v13)(
          a2,
          &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
          &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
          (char *)this + 224);
  if ( v12 < 0 )
  {
    v21 = 393LL;
    goto LABEL_15;
  }
  v22 = 0LL;
  v14 = *(_QWORD *)winrt::impl::root_implements<winrt::iterable_base<winrt::impl::map_impl<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem,std::map<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>>>::abi_guard::abi_guard(
                     v23,
                     (char *)this - 48);
  v25[0] = off_1807233C8;
  v26 = v25;
  v25[1] = v14;
  v16 = wil::details::make_wnf_subscription_state<enum Windows::Internal::Shell::Holographic::ShellState>(
          v14,
          v24,
          v15,
          &v22);
  v17 = 0LL;
  if ( v16 >= 0 )
    v17 = v22;
  v22 = v17;
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>>::operator=(
    (char *)this + 552,
    &v22);
  if ( v22 )
    wil::details::delete_wnf_subscription_state(v22, v18);
  if ( v26 )
    (*(void (__fastcall **)(_QWORD *))(*v26 + 24LL))(v26);
  return 0LL;
}
