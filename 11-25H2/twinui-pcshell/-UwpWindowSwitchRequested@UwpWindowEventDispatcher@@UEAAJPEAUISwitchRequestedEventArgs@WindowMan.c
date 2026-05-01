/*
 * XREFs of ?UwpWindowSwitchRequested@UwpWindowEventDispatcher@@UEAAJPEAUISwitchRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180419E90
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800675F0 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetUwlm@UwpWindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIUwpWindowLifecycleManager@UwpWindowLifecycleManagement@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x1801466AC (-GetUwlm@UwpWindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIUwpWindowLifecycleManager@UwpWindowLifec.c)
 *     ??0abi_guard@?$root_implements@Uiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@Ucollection_version@23@@winrt@@U?$IIterator@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@QEAA@AEAUiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@Ucollection_version@23@@3@@Z @ 0x18029F730 (--0abi_guard@-$root_implements@Uiterator@-$iterable_base@U-$map_impl@Uhstring@winrt@@URemoteSyst.c)
 *     _lambda_27d41e6f978e0f5a6483d2ed3ecdf382_::__lambda_27d41e6f978e0f5a6483d2ed3ecdf382_ @ 0x1802CE218 (_lambda_27d41e6f978e0f5a6483d2ed3ecdf382_--__lambda_27d41e6f978e0f5a6483d2ed3ecdf382_.c)
 *     wil::scope_exit__lambda_9a28d18710831121f161eabba1d1115d___ @ 0x18030B978 (wil--scope_exit__lambda_9a28d18710831121f161eabba1d1115d___.c)
 *     _lambda_8d5a039a5646e67633e87ac1c0f49ca9_::_lambda_8d5a039a5646e67633e87ac1c0f49ca9_ @ 0x1804070C4 (_lambda_8d5a039a5646e67633e87ac1c0f49ca9_--_lambda_8d5a039a5646e67633e87ac1c0f49ca9_.c)
 *     wil::MakeAgileCallback_IAsyncCallback__lambda_84a507925973653268c3410d9d6bf110___ @ 0x1804167BC (wil--MakeAgileCallback_IAsyncCallback__lambda_84a507925973653268c3410d9d6bf110___.c)
 *     wil::details::lambda_call__lambda_1be767f57c36f55ad4a6c28dee8c7d20___::_lambda_call__lambda_1be767f57c36f55ad4a6c28dee8c7d20___ @ 0x180417024 (wil--details--lambda_call__lambda_1be767f57c36f55ad4a6c28dee8c7d20___--_lambda_call__lambda_1be7.c)
 *     ?SwitchAsync@UwpWindowEventDispatcher@@AEAAXIIW4ApplicationViewSwitchingOptions@ViewManagement@UI@Windows@@PEAUIAsyncCallback@@@Z @ 0x180419730 (-SwitchAsync@UwpWindowEventDispatcher@@AEAAXIIW4ApplicationViewSwitchingOptions@ViewManagement@U.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=14
__int64 __fastcall UwpWindowEventDispatcher::UwpWindowSwitchRequested(
        UwpWindowEventDispatcher *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::ISwitchRequestedEventArgs *a2)
{
  __int64 (**v4)(void); // rax
  __int64 (*v5)(void); // rax
  int v6; // eax
  __int64 (__fastcall **v7)(struct Windows::Internal::ApplicationModel::WindowManagement::ISwitchRequestedEventArgs *, GUID *, __int64 **); // rax
  int v8; // eax
  __int64 v9; // rax
  int v10; // eax
  __int64 *v11; // rax
  _QWORD *v12; // rax
  int v13; // eax
  int v14; // eax
  RTL_SRWLOCK *v15; // r14
  _QWORD *Uwlm; // rax
  __int64 v17; // rdi
  __int64 (__fastcall *v18)(__int64, _QWORD, __int64 *); // rbx
  int v19; // eax
  _QWORD *v20; // rax
  __int64 v21; // rdi
  __int64 (__fastcall *v22)(__int64, _QWORD, __int64 *); // rbx
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  const char *v27; // r9
  __int64 result; // rax
  int v29; // [rsp+20h] [rbp-88h]
  int v30; // [rsp+30h] [rbp-78h] BYREF
  int v31; // [rsp+34h] [rbp-74h] BYREF
  __int64 v32; // [rsp+38h] [rbp-70h] BYREF
  __int64 v33; // [rsp+40h] [rbp-68h] BYREF
  __int64 v34; // [rsp+48h] [rbp-60h] BYREF
  __int64 *v35; // [rsp+50h] [rbp-58h] BYREF
  __int64 v36; // [rsp+58h] [rbp-50h] BYREF
  __int64 v37; // [rsp+60h] [rbp-48h] BYREF
  __int64 v38; // [rsp+68h] [rbp-40h] BYREF
  __int64 v39; // [rsp+70h] [rbp-38h] BYREF
  char v40; // [rsp+78h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  unsigned int v42; // [rsp+B8h] [rbp+10h] BYREF
  unsigned int v43; // [rsp+C0h] [rbp+18h] BYREF
  int v44; // [rsp+C8h] [rbp+20h] BYREF

  v4 = *(__int64 (***)(void))a2;
  v38 = 0LL;
  v5 = *v4;
  try
  {
    v6 = v5();
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x600,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v6,
        v29);
    v7 = *(__int64 (__fastcall ***)(struct Windows::Internal::ApplicationModel::WindowManagement::ISwitchRequestedEventArgs *, GUID *, __int64 **))a2;
    v35 = 0LL;
    v8 = (*v7)(a2, &GUID_30240936_5df4_51d0_b35f_c86b5b7aaf22, &v35);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x603,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v8,
        v29);
    v34 = 0LL;
    v9 = *v35;
    v34 = 0LL;
    v10 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v9 + 72))(v35, &v34);
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x606,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v10,
        v29);
    v11 = lambda_8d5a039a5646e67633e87ac1c0f49ca9_::_lambda_8d5a039a5646e67633e87ac1c0f49ca9_(
            &v39,
            (__int64 *)&v35,
            &v34);
    wil::MakeAgileCallback_IAsyncCallback__lambda_84a507925973653268c3410d9d6bf110___(&v37, v11);
    lambda_27d41e6f978e0f5a6483d2ed3ecdf382_::__lambda_27d41e6f978e0f5a6483d2ed3ecdf382_(&v39);
    v12 = winrt::impl::root_implements<winrt::iterable_base<winrt::impl::map_impl<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem,std::map<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>>>::abi_guard::abi_guard(
            &v36,
            (__int64)&v37);
    wil::scope_exit__lambda_9a28d18710831121f161eabba1d1115d___((__int64)&v39, v12);
    v42 = 0;
    v13 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::ISwitchRequestedEventArgs *, unsigned int *))(*(_QWORD *)a2 + 48LL))(
            a2,
            &v42);
    if ( v13 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x618,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v13,
        v29);
    v43 = 0;
    v14 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v38 + 48LL))(v38, &v43);
    if ( v14 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x61B,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v14,
        v29);
    v33 = 0LL;
    v15 = (RTL_SRWLOCK *)((char *)this - 16);
    Uwlm = UwpWindowEventDispatcher::GetUwlm((__int64)v15, &v36);
    v17 = *Uwlm;
    v18 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)*Uwlm + 112LL);
    wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset(&v33);
    v19 = v18(v17, v42, &v33);
    if ( v19 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x61E,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v19,
        v29);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v36);
    if ( !v33 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x61F,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)0x80070057LL,
        v29);
    v32 = 0LL;
    v20 = UwpWindowEventDispatcher::GetUwlm((__int64)v15, &v36);
    v21 = *v20;
    v22 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)*v20 + 112LL);
    wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset(&v32);
    v23 = v22(v21, v43, &v32);
    if ( v23 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x622,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v23,
        v29);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v36);
    if ( !v32 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x623,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)0x80070057LL,
        v29);
    v31 = 0;
    v24 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v33 + 48LL))(v33, &v31);
    if ( v24 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x626,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v24,
        v29);
    v30 = 0;
    v25 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v32 + 48LL))(v32, &v30);
    if ( v25 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x629,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v25,
        v29);
    v44 = 0;
    v26 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::ISwitchRequestedEventArgs *, int *))(*(_QWORD *)a2 + 56LL))(
            a2,
            &v44);
    if ( v26 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x62C,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v26,
        v29);
    UwpWindowEventDispatcher::SwitchAsync(v15, v31, v30, v44, v37);
    v40 = 0;
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v32);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v33);
    wil::details::lambda_call__lambda_1be767f57c36f55ad4a6c28dee8c7d20___::_lambda_call__lambda_1be767f57c36f55ad4a6c28dee8c7d20___(&v39);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v37);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v34);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v35);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v38);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x638,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
                           v27);
  }
  return result;
}
