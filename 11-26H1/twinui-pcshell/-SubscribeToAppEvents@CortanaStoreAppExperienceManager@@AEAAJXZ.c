/*
 * XREFs of ?SubscribeToAppEvents@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x18010A6E0
 * Callers:
 *     ?SubscribeToServicesInternal@CortanaStoreAppExperienceManager@@AEAAJPEAUIServiceProvider@@@Z @ 0x180227B68 (-SubscribeToServicesInternal@CortanaStoreAppExperienceManager@@AEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800F9150 (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_b_ea_1800F9150.c)
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x1800F91D4 (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 *     ??$make_wnf_subscription@Uempty_wnf_state@details@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXXZ@wistd@@K@Z @ 0x18010A04C (--$make_wnf_subscription@Uempty_wnf_state@details@wil@@@wil@@YA-AV-$unique_any_t@V-$unique_stora.c)
 *     ??0abi_guard@?$root_implements@Uiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@Ucollection_version@23@@winrt@@U?$IIterator@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@QEAA@AEAUiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@Ucollection_version@23@@3@@Z @ 0x18027F3E0 (--0abi_guard@-$root_implements@Uiterator@-$iterable_base@U-$map_impl@Uhstring@winrt@@URemoteSyst.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     wistd::function_void___cdecl(void)_::function_void___cdecl(void)___lambda_796dce3944e7f8fced81f3ccc3af59c1__void_ @ 0x1803A0140 (wistd--function_void___cdecl(void)_--function_void___cdecl(void)___lambda_796dce3944e7f8fced81f3.c)
 *     wistd::function_void___cdecl(void)_::function_void___cdecl(void)___lambda_c685849f44fc9bdd58a601b3859f1fc8__void_ @ 0x1803A0164 (wistd--function_void___cdecl(void)_--function_void___cdecl(void)___lambda_c685849f44fc9bdd58a601.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CortanaStoreAppExperienceManager::SubscribeToAppEvents(wil::details **this)
{
  _QWORD *v2; // rax
  wil::details **v3; // rax
  struct wil::details::wnf_subscription_state_base *v4; // rdx
  _QWORD *v5; // rax
  wil::details **v6; // rax
  struct wil::details::wnf_subscription_state_base *v7; // rdx
  wil::details *v9; // [rsp+20h] [rbp-39h] BYREF
  _BYTE v10[8]; // [rsp+28h] [rbp-31h] BYREF
  _BYTE v11[112]; // [rsp+30h] [rbp-29h] BYREF
  __int64 v12; // [rsp+A0h] [rbp+47h]

  v2 = (_QWORD *)winrt::impl::root_implements<winrt::iterable_base<winrt::impl::map_impl<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem,std::map<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>>>::abi_guard::abi_guard(
                   v10,
                   this);
  wistd::function_void___cdecl_void__::function_void___cdecl_void____lambda_796dce3944e7f8fced81f3ccc3af59c1__void_(
    v11,
    *v2);
  v3 = (wil::details **)wil::make_wnf_subscription<wil::details::empty_wnf_state>(
                          &v9,
                          (__int64)&WNF_AI_USER_PACKAGEINSTALL,
                          (__int64)v11,
                          0);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>>::operator=(
    this + 46,
    v3);
  if ( v9 )
    wil::details::delete_wnf_subscription_state(v9, v4);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 24LL))(v12);
  v5 = (_QWORD *)winrt::impl::root_implements<winrt::iterable_base<winrt::impl::map_impl<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem,std::map<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>>>::abi_guard::abi_guard(
                   v10,
                   this);
  wistd::function_void___cdecl_void__::function_void___cdecl_void____lambda_c685849f44fc9bdd58a601b3859f1fc8__void_(
    v11,
    *v5);
  v6 = (wil::details **)wil::make_wnf_subscription<wil::details::empty_wnf_state>(
                          &v9,
                          (__int64)&WNF_AI_USER_PACKAGEUNINSTALL,
                          (__int64)v11,
                          0);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>>::operator=(
    this + 47,
    v6);
  if ( v9 )
    wil::details::delete_wnf_subscription_state(v9, v7);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 24LL))(v12);
  return 0LL;
}
