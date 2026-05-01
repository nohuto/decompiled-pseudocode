/*
 * XREFs of ?ViewVirtualDesktopChanged@?$VirtualDesktopNotificationForwarderHelper@VCVirtualDesktopNotifications@@@@UEAAJPEAUIApplicationView@@@Z @ 0x180065250
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x18004597C (-GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180065220 (--1-$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0abi_guard@?$root_implements@Uiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@Ucollection_version@23@@winrt@@U?$IIterator@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@QEAA@AEAUiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@Ucollection_version@23@@3@@Z @ 0x18027F3E0 (--0abi_guard@-$root_implements@Uiterator@-$iterable_base@U-$map_impl@Uhstring@winrt@@URemoteSyst.c)
 *     ??$?0V_lambda_1a746a469b397f96443d5d0dd1083225_@@@?$CTaskWrapper@V_lambda_1a746a469b397f96443d5d0dd1083225_@@@ComTaskPool@Internal@Windows@@QEAA@$$QEAV_lambda_1a746a469b397f96443d5d0dd1083225_@@@Z @ 0x1802881B8 (--$-0V_lambda_1a746a469b397f96443d5d0dd1083225_@@@-$CTaskWrapper@V_lambda_1a746a469b397f96443d5d.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??$apply@AEAV_lambda_6b253705b9e7cf0a5573133eb48489be_@@AEAV?$tuple@PEAUIApplicationView@@@std@@@std@@YA?A_TAEAV_lambda_6b253705b9e7cf0a5573133eb48489be_@@AEAV?$tuple@PEAUIApplicationView@@@0@@Z @ 0x18054C850 (--$apply@AEAV_lambda_6b253705b9e7cf0a5573133eb48489be_@@AEAV-$tuple@PEAUIApplicationView@@@std@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall VirtualDesktopNotificationForwarderHelper<CVirtualDesktopNotifications>::ViewVirtualDesktopChanged(
        __int64 a1,
        __int64 a2)
{
  unsigned int v3; // ebx
  int CallbackArray; // eax
  unsigned int v5; // ebx
  void *v6; // rax
  __int64 v7; // rdi
  struct IObjectArray *v8; // rcx
  struct IObjectArray *v10; // rcx
  __int64 v11; // [rsp+30h] [rbp-30h] BYREF
  _BYTE v12[8]; // [rsp+38h] [rbp-28h] BYREF
  __int64 (__fastcall *v13)(); // [rsp+40h] [rbp-20h] BYREF
  struct IObjectArray *v14; // [rsp+48h] [rbp-18h] BYREF
  __int64 v15; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  struct IObjectArray *v17; // [rsp+80h] [rbp+20h] BYREF
  __int64 v18; // [rsp+88h] [rbp+28h] BYREF
  __int64 v19; // [rsp+90h] [rbp+30h] BYREF
  struct IObjectArray **v20; // [rsp+98h] [rbp+38h] BYREF

  v19 = 0LL;
  v11 = a2;
  LODWORD(v17) = 0;
  v20 = &v17;
  winrt::impl::root_implements<winrt::iterable_base<winrt::impl::map_impl<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem,std::map<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>>>::abi_guard::abi_guard(
    v12,
    &v20);
  std::apply<_lambda_6b253705b9e7cf0a5573133eb48489be_ &,std::tuple<IApplicationView *> &>(&v18, v12, &v11);
  v3 = (unsigned int)v17;
  if ( (int)v17 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFC,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopnotifications.cpp",
      (const char *)(unsigned int)v17);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v18);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x11A,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopnotifications.cpp",
      (const char *)v3);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v19);
  }
  else
  {
    v19 = 0LL;
    v20 = (struct IObjectArray **)&v18;
    v17 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v17);
    CallbackArray = AgileRegistrationList::GetCallbackArray((RTL_SRWLOCK *)(a1 + 56), &v17);
    v3 = CallbackArray;
    if ( CallbackArray < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x13D,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopnotifications.cpp",
        (const char *)(unsigned int)CallbackArray);
      v10 = v17;
      if ( v17 )
      {
        v17 = 0LL;
        ((void (__fastcall *)(struct IObjectArray *))v10->lpVtbl->Release)(v10);
      }
      Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>(&v18);
    }
    else
    {
      v13 =  winrt::impl::abi<winrt::WindowsUdk::UI::Shell::IShellViewCoordinator,void>::type::`vcall'{72,{flat}};
      v14 = v17;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v14);
      v15 = v18;
      v18 = 0LL;
      v5 = *(_DWORD *)(a1 + 96);
      v6 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
      if ( v6 )
        v7 = Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_1a746a469b397f96443d5d0dd1083225_>::CTaskWrapper<_lambda_1a746a469b397f96443d5d0dd1083225_>(
               v6,
               &v13);
      else
        v7 = 0LL;
      v3 = SHTaskPoolQueueTask(0LL, 2LL, v5);
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      if ( (v3 & 0x80000000) != 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x152,
          (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopnotifications.cpp",
          (const char *)v3);
      Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>(&v15);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v14);
      v8 = v17;
      if ( v17 )
      {
        v17 = 0LL;
        ((void (__fastcall *)(struct IObjectArray *))v8->lpVtbl->Release)(v8);
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v18);
    }
  }
  return v3;
}
