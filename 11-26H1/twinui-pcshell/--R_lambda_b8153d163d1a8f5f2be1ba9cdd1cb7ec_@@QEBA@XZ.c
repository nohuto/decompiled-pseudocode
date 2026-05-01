/*
 * XREFs of ??R_lambda_b8153d163d1a8f5f2be1ba9cdd1cb7ec_@@QEBA@XZ @ 0x18054CE90
 * Callers:
 *     ?Run@?$CTaskWrapper@V_lambda_b8153d163d1a8f5f2be1ba9cdd1cb7ec_@@@ComTaskPool@Internal@Windows@@UEAAXXZ @ 0x18054D150 (-Run@-$CTaskWrapper@V_lambda_b8153d163d1a8f5f2be1ba9cdd1cb7ec_@@@ComTaskPool@Internal@Windows@@U.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180046480 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ??0abi_guard@?$root_implements@Uiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@Ucollection_version@23@@winrt@@U?$IIterator@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@QEAA@AEAUiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@Ucollection_version@23@@3@@Z @ 0x18027F3E0 (--0abi_guard@-$root_implements@Uiterator@-$iterable_base@U-$map_impl@Uhstring@winrt@@URemoteSyst.c)
 *     ??$apply@AEAV_lambda_86b2abe2a1cbe4d03bf433189bc2548e_@@AEBV?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@W4VirtualDesktopSwitchType@@@std@@@std@@YA?A_TAEAV_lambda_86b2abe2a1cbe4d03bf433189bc2548e_@@AEBV?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@W4VirtualDesktopSwitchType@@@0@@Z @ 0x18054C8CC (--$apply@AEAV_lambda_86b2abe2a1cbe4d03bf433189bc2548e_@@AEBV-$tuple@V-$ComPtr@UIVirtualDesktop@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall _lambda_b8153d163d1a8f5f2be1ba9cdd1cb7ec_::operator()(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v5; // rdx
  unsigned int i; // esi
  __int64 v7; // rdi
  int (__fastcall *v8)(__int64, _QWORD, GUID *, __int64 *); // rbx
  __int64 *v9; // rax
  unsigned int v10; // [rsp+30h] [rbp-10h] BYREF
  __int64 v11; // [rsp+38h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  __int64 v13; // [rsp+70h] [rbp+30h] BYREF
  unsigned int v14; // [rsp+78h] [rbp+38h] BYREF
  __int64 v15; // [rsp+80h] [rbp+40h] BYREF

  v14 = 0;
  v2 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 8) + 24LL))(*(_QWORD *)(a1 + 8), &v14);
  v3 = v2;
  if ( v2 >= 0 )
  {
    LOBYTE(v13) = 0;
    winrt::impl::root_implements<winrt::iterable_base<winrt::impl::map_impl<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem,std::map<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>>>::abi_guard::abi_guard(
      &v15,
      (__int64)&v13);
    std::apply<_lambda_86b2abe2a1cbe4d03bf433189bc2548e_ &,std::tuple<Microsoft::WRL::ComPtr<IVirtualDesktop>,enum VirtualDesktopSwitchType> const &>(
      (__int64)&v10,
      v5,
      a1 + 16);
    for ( i = 0; i < v14; ++i )
    {
      v13 = 0LL;
      v7 = *(_QWORD *)(a1 + 8);
      v8 = *(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v7 + 32LL);
      v9 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>(&v13);
      if ( v8(v7, i, &GUID_b9e5e94d_233e_49ab_af5c_2b4541c3aade, v9) >= 0 )
        (*(void (__fastcall **)(__int64, __int64, _QWORD))a1)(v13, v11, v10);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x142,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopnotifications.cpp",
      (const char *)(unsigned int)v2);
    return v3;
  }
}
