/*
 * XREFs of ?AppViewSwitchRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewSwitchRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18040B910
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0abi_guard@?$root_implements@Uiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@Ucollection_version@23@@winrt@@U?$IIterator@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@QEAA@AEAUiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@Ucollection_version@23@@3@@Z @ 0x18029F730 (--0abi_guard@-$root_implements@Uiterator@-$iterable_base@U-$map_impl@Uhstring@winrt@@URemoteSyst.c)
 *     _lambda_27d41e6f978e0f5a6483d2ed3ecdf382_::__lambda_27d41e6f978e0f5a6483d2ed3ecdf382_ @ 0x1802CE218 (_lambda_27d41e6f978e0f5a6483d2ed3ecdf382_--__lambda_27d41e6f978e0f5a6483d2ed3ecdf382_.c)
 *     wil::scope_exit__lambda_9a28d18710831121f161eabba1d1115d___ @ 0x18030B978 (wil--scope_exit__lambda_9a28d18710831121f161eabba1d1115d___.c)
 *     Microsoft::WRL::Callback_IAsyncCallback__lambda_e2c16250c2ae58cbb523d95d2c6b6492___ @ 0x180403A80 (Microsoft--WRL--Callback_IAsyncCallback__lambda_e2c16250c2ae58cbb523d95d2c6b6492___.c)
 *     _lambda_8d5a039a5646e67633e87ac1c0f49ca9_::_lambda_8d5a039a5646e67633e87ac1c0f49ca9_ @ 0x1804070C4 (_lambda_8d5a039a5646e67633e87ac1c0f49ca9_--_lambda_8d5a039a5646e67633e87ac1c0f49ca9_.c)
 *     wil::details::ScopeExitFn__lambda_fb4ec84f4268e8fd1204931a5f98733f___::_ScopeExitFn__lambda_fb4ec84f4268e8fd1204931a5f98733f___ @ 0x1804081D0 (wil--details--ScopeExitFn__lambda_fb4ec84f4268e8fd1204931a5f98733f___--_ScopeExitFn__lambda_fb4e.c)
 *     ?IsComponentAppViewAndGetKindAndModel@@YAEPEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@PEAW4AppModelKind@2345@PEAPEAUIAppModel@2345@@Z @ 0x18040FEB0 (-IsComponentAppViewAndGetKindAndModel@@YAEPEAUIAppView@WindowManagement@ApplicationModel@Interna.c)
 *     ?SwitchAsync@WindowEventDispatcher@@AEAAXIIW4ApplicationViewSwitchingOptions@ViewManagement@UI@Windows@@PEAUIAsyncCallback@@@Z @ 0x18041391C (-SwitchAsync@WindowEventDispatcher@@AEAAXIIW4ApplicationViewSwitchingOptions@ViewManagement@UI@W.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall WindowEventDispatcher::AppViewSwitchRequested(
        WindowEventDispatcher *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewSwitchRequestedEventArgs *a2)
{
  __int64 (**v4)(void); // rax
  __int64 (*v5)(void); // rax
  int v6; // eax
  __int64 v7; // rax
  int v8; // eax
  _QWORD *v9; // rax
  __int64 (**v10)(void); // rax
  int v11; // eax
  __int64 v12; // rax
  int v13; // eax
  unsigned __int8 KindAndModel; // al
  int v15; // eax
  int v16; // eax
  int v17; // eax
  const char *v18; // r9
  __int64 result; // rax
  int v20; // [rsp+20h] [rbp-58h]
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *v21; // [rsp+30h] [rbp-48h] BYREF
  __int64 *v22; // [rsp+38h] [rbp-40h] BYREF
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *v23; // [rsp+40h] [rbp-38h] BYREF
  __int64 v24; // [rsp+48h] [rbp-30h] BYREF
  volatile int *v25; // [rsp+50h] [rbp-28h] BYREF
  __int64 v26; // [rsp+58h] [rbp-20h] BYREF
  __int64 v27; // [rsp+60h] [rbp-18h] BYREF
  char v28; // [rsp+68h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  unsigned int v30; // [rsp+88h] [rbp+10h] BYREF
  unsigned int v31; // [rsp+90h] [rbp+18h] BYREF
  unsigned int v32; // [rsp+98h] [rbp+20h] BYREF

  v4 = *(__int64 (***)(void))a2;
  v22 = 0LL;
  v5 = *v4;
  try
  {
    v6 = v5();
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x443,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v6,
        v20);
    v24 = 0LL;
    v7 = *v22;
    v24 = 0LL;
    v8 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v7 + 80))(v22, &v24);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x446,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v8,
        v20);
    lambda_8d5a039a5646e67633e87ac1c0f49ca9_::_lambda_8d5a039a5646e67633e87ac1c0f49ca9_(&v27, (__int64 *)&v22, &v24);
    Microsoft::WRL::Callback_IAsyncCallback__lambda_e2c16250c2ae58cbb523d95d2c6b6492___(&v25);
    lambda_27d41e6f978e0f5a6483d2ed3ecdf382_::__lambda_27d41e6f978e0f5a6483d2ed3ecdf382_(&v27);
    v9 = winrt::impl::root_implements<winrt::iterable_base<winrt::impl::map_impl<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem,std::map<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>>>::abi_guard::abi_guard(
           &v26,
           (__int64)&v25);
    wil::scope_exit__lambda_9a28d18710831121f161eabba1d1115d___((__int64)&v27, v9);
    v10 = *(__int64 (***)(void))a2;
    v23 = 0LL;
    v11 = ((__int64 (__fastcall *)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewSwitchRequestedEventArgs *, struct Windows::Internal::ApplicationModel::WindowManagement::IAppView **))v10[6])(
            a2,
            &v23);
    if ( v11 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x458,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v11,
        v20);
    v21 = 0LL;
    v12 = *v22;
    v21 = 0LL;
    v13 = (*(__int64 (__fastcall **)(__int64 *, struct Windows::Internal::ApplicationModel::WindowManagement::IAppView **))(v12 + 48))(
            v22,
            &v21);
    if ( v13 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x45B,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v13,
        v20);
    if ( IsComponentAppViewAndGetKindAndModel(v23, 0LL, 0LL)
      || (KindAndModel = IsComponentAppViewAndGetKindAndModel(v21, 0LL, 0LL)) != 0 )
    {
      KindAndModel = 1;
    }
    if ( KindAndModel )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x45D,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)0x8000FFFFLL,
        v20);
    v32 = 0;
    v15 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *, unsigned int *))(*(_QWORD *)v23 + 48LL))(
            v23,
            &v32);
    if ( v15 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x460,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v15,
        v20);
    v31 = 0;
    v16 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *, unsigned int *))(*(_QWORD *)v21 + 48LL))(
            v21,
            &v31);
    if ( v16 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x463,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v16,
        v20);
    v30 = 0;
    v17 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewSwitchRequestedEventArgs *, unsigned int *))(*(_QWORD *)a2 + 56LL))(
            a2,
            &v30);
    if ( v17 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x466,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v17,
        v20);
    WindowEventDispatcher::SwitchAsync((char *)this - 16, v32, v31, v30, v25);
    v28 = 0;
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v21);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v23);
    wil::details::ScopeExitFn__lambda_fb4ec84f4268e8fd1204931a5f98733f___::_ScopeExitFn__lambda_fb4ec84f4268e8fd1204931a5f98733f___(&v27);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v25);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v24);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v22);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x472,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                           v18);
  }
  return result;
}
