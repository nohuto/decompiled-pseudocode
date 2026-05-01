/*
 * XREFs of ?SwitchTo@CApplicationViewManager@@UEAAJPEAUIApplicationView@@@Z @ 0x1801E8110
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003CAAC (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ??0abi_guard@?$root_implements@Uiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@Ucollection_version@23@@winrt@@U?$IIterator@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@QEAA@AEAUiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@Ucollection_version@23@@3@@Z @ 0x18029F730 (--0abi_guard@-$root_implements@Uiterator@-$iterable_base@U-$map_impl@Uhstring@winrt@@URemoteSyst.c)
 *     ShellPositionerHelpers::PerformCallbackOnView__lambda_1d00f12315efdac3c7fe20551257e9a0___ @ 0x18030B6B4 (ShellPositionerHelpers--PerformCallbackOnView__lambda_1d00f12315efdac3c7fe20551257e9a0___.c)
 *     wil::scope_exit__lambda_9a28d18710831121f161eabba1d1115d___ @ 0x18030B978 (wil--scope_exit__lambda_9a28d18710831121f161eabba1d1115d___.c)
 *     wil::details::lambda_call__lambda_67fd2f4470180a86be6a1590c7b29f86___::_lambda_call__lambda_67fd2f4470180a86be6a1590c7b29f86___ @ 0x18030BCDC (wil--details--lambda_call__lambda_67fd2f4470180a86be6a1590c7b29f86___--_lambda_call__lambda_67fd.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CApplicationViewManager::SwitchTo(CApplicationViewManager *this, struct IApplicationView *a2)
{
  __int64 v3; // rax
  void (__fastcall *v4)(char *, GUID *, __int64 *); // rbx
  __int64 *v5; // rax
  int v6; // ebx
  IUnknown *v7; // rcx
  _BYTE v9[16]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  int v11; // [rsp+60h] [rbp+30h] BYREF
  struct IApplicationView *v12; // [rsp+68h] [rbp+38h] BYREF
  IUnknown *punk; // [rsp+70h] [rbp+40h] BYREF
  char v14; // [rsp+78h] [rbp+48h] BYREF

  v12 = a2;
  v11 = 0;
  v3 = winrt::impl::root_implements<winrt::iterable_base<winrt::impl::map_impl<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem,std::map<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>>>::abi_guard::abi_guard(
         &v11,
         &v12);
  wil::scope_exit__lambda_9a28d18710831121f161eabba1d1115d___(v9, v3);
  winrt::impl::root_implements<winrt::iterable_base<winrt::impl::map_impl<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem,std::map<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>>>::abi_guard::abi_guard(
    &v14,
    &v12);
  punk = 0LL;
  v11 = 2;
  v4 = *(void (__fastcall **)(char *, GUID *, __int64 *))(*((_QWORD *)this - 15) + 32LL);
  v5 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>((__int64 *)&punk);
  v4((char *)this - 120, &GUID_00000000_0000_0000_c000_000000000046, v5);
  v6 = ShellPositionerHelpers::PerformCallbackOnView__lambda_1d00f12315efdac3c7fe20551257e9a0___(punk);
  v7 = punk;
  if ( punk )
  {
    punk = 0LL;
    ((void (__fastcall *)(IUnknown *))v7->lpVtbl->Release)(v7);
  }
  if ( v6 >= 0 )
  {
    v9[8] = 0;
    v6 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2CF,
      (int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v6);
  }
  wil::details::lambda_call__lambda_67fd2f4470180a86be6a1590c7b29f86___::_lambda_call__lambda_67fd2f4470180a86be6a1590c7b29f86___(v9);
  return (unsigned int)v6;
}
