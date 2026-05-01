/*
 * XREFs of ?ApplyReorderTaskbarLayout@CPinnedList@@UEAAJW4TaskbarLayoutType@@H@Z @ 0x180666B50
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetPinSourceForPinnedItem@@YAJPEFBU_ITEMIDLIST@@PEAW4TaskbarPinningSource@@@Z @ 0x1802198EC (-GetPinSourceForPinnedItem@@YAJPEFBU_ITEMIDLIST@@PEAW4TaskbarPinningSource@@@Z.c)
 *     ??0abi_guard@?$root_implements@Uiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@Ucollection_version@23@@winrt@@U?$IIterator@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@QEAA@AEAUiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@Ucollection_version@23@@3@@Z @ 0x18029F730 (--0abi_guard@-$root_implements@Uiterator@-$iterable_base@U-$map_impl@Uhstring@winrt@@URemoteSyst.c)
 *     ??1?$out_param_t@V?$unique_ptr@$$CFAU_ITEMIDLIST@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x1802C4C24 (--1-$out_param_t@V-$unique_ptr@$$CFAU_ITEMIDLIST@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree.c)
 *     ?reset@?$unique_ptr@U_ITEMIDLIST@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAU_ITEMIDLIST@@@Z @ 0x1802C4C48 (-reset@-$unique_ptr@U_ITEMIDLIST@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil@@@w.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 *     wil::scope_exit__lambda_9a28d18710831121f161eabba1d1115d___ @ 0x18030B978 (wil--scope_exit__lambda_9a28d18710831121f161eabba1d1115d___.c)
 *     ??0?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18066540C (--0-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProv.c)
 *     wil::details::lambda_call__lambda_9a28d18710831121f161eabba1d1115d___::_lambda_call__lambda_9a28d18710831121f161eabba1d1115d___ @ 0x18066586C (wil--details--lambda_call__lambda_9a28d18710831121f161eabba1d1115d___--_lambda_call__lambda_9a28.c)
 *     ??1TaskbarLayoutReorderActivity@TaskbarFlexibleLayoutTelemetry@@QEAA@XZ @ 0x180665C04 (--1TaskbarLayoutReorderActivity@TaskbarFlexibleLayoutTelemetry@@QEAA@XZ.c)
 *     GetPidlsFromTaskbarLayout @ 0x180669AEC (GetPidlsFromTaskbarLayout.c)
 *     ?InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModifyFlags@@@Z @ 0x18066C480 (-InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModif.c)
 *     ?StartActivity@TaskbarLayoutReorderActivity@TaskbarFlexibleLayoutTelemetry@@QEAAXW4TaskbarLayoutType@@@Z @ 0x1806707C0 (-StartActivity@TaskbarLayoutReorderActivity@TaskbarFlexibleLayoutTelemetry@@QEAAXW4TaskbarLayout.c)
 *     ?Stop@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18067086C (-Stop@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsP.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CPinnedList::ApplyReorderTaskbarLayout(__int64 a1, unsigned int a2, int a3)
{
  int PidlsFromTaskbarLayout; // eax
  unsigned int v7; // ebx
  _QWORD *v8; // rax
  __int64 (__fastcall *v9)(__int64, __int64 **); // rbx
  int v10; // eax
  __int64 v12; // rax
  int v13; // ebx
  int PinSourceForPinnedItem; // eax
  __int64 v15; // rdx
  __int64 i; // rbx
  __int64 v17; // rsi
  int v18; // eax
  wil::details::in1diag3 *v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v22[16]; // [rsp+38h] [rbp-C8h] BYREF
  struct _ITEMIDLIST **v23; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v24; // [rsp+50h] [rbp-B0h] BYREF
  char v25; // [rsp+58h] [rbp-A8h]
  int v26; // [rsp+60h] [rbp-A0h] BYREF
  struct _ITEMIDLIST *v27; // [rsp+68h] [rbp-98h] BYREF
  __int64 *v28; // [rsp+70h] [rbp-90h] BYREF
  LPVOID pv[2]; // [rsp+78h] [rbp-88h] BYREF
  __int128 v30; // [rsp+88h] [rbp-78h]
  volatile signed __int32 *v31[42]; // [rsp+A0h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+228h] [rbp+128h]

  memset_0(v31, 0, 0x148uLL);
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v31,
    (__int64)"TaskbarLayoutReorderActivity");
  v31[0] = (volatile signed __int32 *)&TaskbarFlexibleLayoutTelemetry::TaskbarLayoutReorderActivity::`vftable';
  TaskbarFlexibleLayoutTelemetry::TaskbarLayoutReorderActivity::StartActivity(v31, a2);
  v26 = 0;
  pv[0] = 0LL;
  pv[1] = 0LL;
  v30 = 0uLL;
  PidlsFromTaskbarLayout = GetPidlsFromTaskbarLayout(a2, pv, &v26, 0LL);
  v7 = PidlsFromTaskbarLayout;
  if ( PidlsFromTaskbarLayout < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA75,
      (int)"pcshell\\shell\\PinningLib\\lib\\PinnedList.cpp",
      (const char *)(unsigned int)PidlsFromTaskbarLayout);
LABEL_6:
    if ( pv[0] )
    {
      CoTaskMemFree(pv[0]);
      pv[0] = 0LL;
    }
    pv[1] = 0LL;
    *((_QWORD *)&v30 + 1) = 0LL;
    TaskbarFlexibleLayoutTelemetry::TaskbarLayoutReorderActivity::~TaskbarLayoutReorderActivity(v31);
    return v7;
  }
  v8 = winrt::impl::root_implements<winrt::iterable_base<winrt::impl::map_impl<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem,std::map<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>>>::abi_guard::abi_guard(
         &v21,
         (__int64)pv);
  wil::scope_exit__lambda_9a28d18710831121f161eabba1d1115d___((__int64)v22, v8);
  if ( v26 )
  {
    v28 = 0LL;
    v27 = 0LL;
    v9 = *(__int64 (__fastcall **)(__int64, __int64 **))(*(_QWORD *)a1 + 24LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v28);
    v10 = v9(a1, &v28);
    v7 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA83,
        (int)"pcshell\\shell\\PinningLib\\lib\\PinnedList.cpp",
        (const char *)(unsigned int)v10);
      wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
        (void **)&v27,
        0LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v28);
      wil::details::lambda_call__lambda_9a28d18710831121f161eabba1d1115d___::_lambda_call__lambda_9a28d18710831121f161eabba1d1115d___(v22);
      goto LABEL_6;
    }
    while ( 1 )
    {
      v12 = *v28;
      v23 = &v27;
      v24 = 0LL;
      v25 = 1;
      v13 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64 *))(v12 + 24))(v28, 1LL, &v24);
      wil::details::out_param_t<wistd::unique_ptr<_ITEMIDLIST __unaligned,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_ITEMIDLIST __unaligned,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&v23);
      if ( v13 )
        break;
      LODWORD(v21) = 0;
      PinSourceForPinnedItem = GetPinSourceForPinnedItem(v27, (enum TaskbarPinningSource *)&v21);
      if ( PinSourceForPinnedItem < 0 )
      {
        v15 = 2697LL;
        goto LABEL_17;
      }
      if ( (_DWORD)v21 && ((_DWORD)v21 != 1 || !a2) )
      {
        PinSourceForPinnedItem = CPinnedList::InternalModify(a1 - 16, v27, 0LL, 14LL);
        if ( PinSourceForPinnedItem < 0 )
        {
          v15 = 2702LL;
LABEL_17:
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)v15,
            (int)"pcshell\\shell\\PinningLib\\lib\\PinnedList.cpp",
            (const char *)(unsigned int)PinSourceForPinnedItem);
        }
      }
    }
    if ( a3 )
    {
      for ( i = LODWORD(pv[1]) - 1; i >= 0; --i )
      {
        v17 = *((_QWORD *)pv[0] + i);
        if ( (*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 72LL))(a1, v17) )
        {
          v18 = CPinnedList::InternalModify(a1 - 16, 0LL, v17, 14LL);
          v19 = retaddr;
          if ( v18 < 0 )
          {
            v20 = 2714LL;
LABEL_25:
            wil::details::in1diag3::_Log_Hr(
              v19,
              (void *)v20,
              (int)"pcshell\\shell\\PinningLib\\lib\\PinnedList.cpp",
              (const char *)(unsigned int)v18);
            continue;
          }
          v18 = CPinnedList::InternalModify(a1 - 16, v17, 1LL, 14LL);
          v19 = retaddr;
          if ( v18 < 0 )
          {
            v20 = 2716LL;
            goto LABEL_25;
          }
        }
      }
    }
    wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(v31);
    wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      (void **)&v27,
      0LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v28);
    wil::details::lambda_call__lambda_9a28d18710831121f161eabba1d1115d___::_lambda_call__lambda_9a28d18710831121f161eabba1d1115d___(v22);
    if ( pv[0] )
    {
      CoTaskMemFree(pv[0]);
      pv[0] = 0LL;
    }
    pv[1] = 0LL;
    *((_QWORD *)&v30 + 1) = 0LL;
    TaskbarFlexibleLayoutTelemetry::TaskbarLayoutReorderActivity::~TaskbarLayoutReorderActivity(v31);
    return 0LL;
  }
  else
  {
    wil::details::lambda_call__lambda_9a28d18710831121f161eabba1d1115d___::_lambda_call__lambda_9a28d18710831121f161eabba1d1115d___(v22);
    if ( pv[0] )
    {
      CoTaskMemFree(pv[0]);
      pv[0] = 0LL;
    }
    pv[1] = 0LL;
    *((_QWORD *)&v30 + 1) = 0LL;
    TaskbarFlexibleLayoutTelemetry::TaskbarLayoutReorderActivity::~TaskbarLayoutReorderActivity(v31);
    return 2147947423LL;
  }
}
