/*
 * XREFs of ?AppViewSwitchRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewSwitchRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180416830
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0abi_guard@?$root_implements@Uiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@Ucollection_version@23@@winrt@@U?$IIterator@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@QEAA@AEAUiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@Ucollection_version@23@@3@@Z @ 0x18027F3E0 (--0abi_guard@-$root_implements@Uiterator@-$iterable_base@U-$map_impl@Uhstring@winrt@@URemoteSyst.c)
 *     _lambda_27d41e6f978e0f5a6483d2ed3ecdf382_::__lambda_27d41e6f978e0f5a6483d2ed3ecdf382_ @ 0x1802C5768 (_lambda_27d41e6f978e0f5a6483d2ed3ecdf382_--__lambda_27d41e6f978e0f5a6483d2ed3ecdf382_.c)
 *     wil::ScopeExit__lambda_7aa11f23cd4c27c8dfc8a34bb768def3___ @ 0x18030763C (wil--ScopeExit__lambda_7aa11f23cd4c27c8dfc8a34bb768def3___.c)
 *     Microsoft::WRL::Callback_IAsyncCallback__lambda_f04da0b356692eef46584adcd240f2b1___ @ 0x18040E62C (Microsoft--WRL--Callback_IAsyncCallback__lambda_f04da0b356692eef46584adcd240f2b1___.c)
 *     _lambda_ec5d955e16bd0abce266b4b0ac713b48_::_lambda_ec5d955e16bd0abce266b4b0ac713b48_ @ 0x180411E4C (_lambda_ec5d955e16bd0abce266b4b0ac713b48_--_lambda_ec5d955e16bd0abce266b4b0ac713b48_.c)
 *     wil::details::ScopeExitFn__lambda_dffc21da32e75881388e0391eb054ade___::_ScopeExitFn__lambda_dffc21da32e75881388e0391eb054ade___ @ 0x180412FB8 (wil--details--ScopeExitFn__lambda_dffc21da32e75881388e0391eb054ade___--_ScopeExitFn__lambda_dffc.c)
 *     wil::details::lambda_call__lambda_9e9de8081fab7435777ce27475697d99___::release @ 0x180418570 (wil--details--lambda_call__lambda_9e9de8081fab7435777ce27475697d99___--release.c)
 *     ?IsComponentAppViewAndGetKindAndModel@@YAEPEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@PEAW4AppModelKind@2345@PEAPEAUIAppModel@2345@@Z @ 0x18041ABB4 (-IsComponentAppViewAndGetKindAndModel@@YAEPEAUIAppView@WindowManagement@ApplicationModel@Interna.c)
 *     ?SwitchAsync@WindowEventDispatcher@@AEAAXIIW4ApplicationViewSwitchingOptions@ViewManagement@UI@Windows@@PEAUIAsyncCallback@@@Z @ 0x18041E69C (-SwitchAsync@WindowEventDispatcher@@AEAAXIIW4ApplicationViewSwitchingOptions@ViewManagement@UI@W.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  __int64 v27[3]; // [rsp+60h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  unsigned int v29; // [rsp+88h] [rbp+10h] BYREF
  unsigned int v30; // [rsp+90h] [rbp+18h] BYREF
  unsigned int v31; // [rsp+98h] [rbp+20h] BYREF

  v4 = *(__int64 (***)(void))a2;
  v22 = 0LL;
  v5 = *v4;
  try
  {
    v6 = v5();
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x441,
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
        (void *)0x444,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v8,
        v20);
    lambda_ec5d955e16bd0abce266b4b0ac713b48_::_lambda_ec5d955e16bd0abce266b4b0ac713b48_(v27, (__int64 *)&v22, &v24);
    Microsoft::WRL::Callback_IAsyncCallback__lambda_f04da0b356692eef46584adcd240f2b1___(&v25);
    lambda_27d41e6f978e0f5a6483d2ed3ecdf382_::__lambda_27d41e6f978e0f5a6483d2ed3ecdf382_(v27);
    v9 = winrt::impl::root_implements<winrt::iterable_base<winrt::impl::map_impl<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem,std::map<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>>>::abi_guard::abi_guard(
           &v26,
           (__int64)&v25);
    wil::ScopeExit__lambda_7aa11f23cd4c27c8dfc8a34bb768def3___((__int64)v27, v9);
    v10 = *(__int64 (***)(void))a2;
    v23 = 0LL;
    v11 = ((__int64 (__fastcall *)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewSwitchRequestedEventArgs *, struct Windows::Internal::ApplicationModel::WindowManagement::IAppView **))v10[6])(
            a2,
            &v23);
    if ( v11 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x456,
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
        (void *)0x459,
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
        (void *)0x45B,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)0x8000FFFFLL,
        v20);
    v31 = 0;
    v15 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *, unsigned int *))(*(_QWORD *)v23 + 48LL))(
            v23,
            &v31);
    if ( v15 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x45E,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v15,
        v20);
    v30 = 0;
    v16 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *, unsigned int *))(*(_QWORD *)v21 + 48LL))(
            v21,
            &v30);
    if ( v16 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x461,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v16,
        v20);
    v29 = 0;
    v17 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewSwitchRequestedEventArgs *, unsigned int *))(*(_QWORD *)a2 + 56LL))(
            a2,
            &v29);
    if ( v17 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x464,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v17,
        v20);
    WindowEventDispatcher::SwitchAsync((char *)this - 16, v31, v30, v29, v25);
    wil::details::lambda_call__lambda_9e9de8081fab7435777ce27475697d99___::release(v27);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v21);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v23);
    wil::details::ScopeExitFn__lambda_dffc21da32e75881388e0391eb054ade___::_ScopeExitFn__lambda_dffc21da32e75881388e0391eb054ade___(v27);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v25);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v24);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v22);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x470,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                           v18);
  }
  return result;
}
