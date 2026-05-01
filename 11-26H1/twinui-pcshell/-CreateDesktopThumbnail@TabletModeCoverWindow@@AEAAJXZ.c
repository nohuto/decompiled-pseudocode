/*
 * XREFs of ?CreateDesktopThumbnail@TabletModeCoverWindow@@AEAAJXZ @ 0x18052FD24
 * Callers:
 *     ?TabletModeChanged@TabletModeCoverWindow@@UEAAJ_N@Z @ 0x180058510 (-TabletModeChanged@TabletModeCoverWindow@@UEAAJ_N@Z.c)
 *     ?DisplaySettingsChanged@TabletModeCoverWindow@@UEAAJW4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x18052FFF0 (-DisplaySettingsChanged@TabletModeCoverWindow@@UEAAJW4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x1801ABBF4 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     ?CreateDesktopBackgroundThumbnail@DCompThumbnailHelpers@@YAJPEAUISwitchThumbnailFactory@@PEAUIDCompThumbnail@@AEBUtagRECT@@PEBUtagSIZE@@PEAPEAU3@@Z @ 0x180227CBC (-CreateDesktopBackgroundThumbnail@DCompThumbnailHelpers@@YAJPEAUISwitchThumbnailFactory@@PEAUIDC.c)
 *     ??0abi_guard@?$root_implements@Uiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@Ucollection_version@23@@winrt@@U?$IIterator@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@QEAA@AEAUiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@Ucollection_version@23@@3@@Z @ 0x18027F3E0 (--0abi_guard@-$root_implements@Uiterator@-$iterable_base@U-$map_impl@Uhstring@winrt@@URemoteSyst.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1802AF714 (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ?DestroyDesktopThumbnail@TabletModeCoverWindow@@AEAAXXZ @ 0x1802AF974 (-DestroyDesktopThumbnail@TabletModeCoverWindow@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall TabletModeCoverWindow::CreateDesktopThumbnail(TabletModeCoverWindow *this)
{
  __int64 v2; // rdx
  TabletModeCoverWindow *v3; // rbx
  LPVOID *ppv; // rsi
  HRESULT Instance; // eax
  unsigned int v6; // edi
  __int64 v7; // rdx
  DCompThumbnailHelpers **v8; // r15
  LPVOID v9; // rsi
  __int64 (__fastcall *v10)(LPVOID, _QWORD, __int64, char *); // rdi
  int DesktopBackgroundThumbnail; // eax
  __int64 v12; // rdx
  DCompThumbnailHelpers *v13; // rsi
  __int64 (__fastcall *v14)(DCompThumbnailHelpers *, _QWORD, _QWORD, __int64, GUID *, __int64 *); // rdi
  __int64 *v15; // r14
  DWORD SysColor; // eax
  __int64 v17; // rdx
  __int64 v19; // [rsp+40h] [rbp-40h] BYREF
  __int64 v20[3]; // [rsp+48h] [rbp-38h] BYREF
  char v21; // [rsp+60h] [rbp-20h]
  __int64 v22; // [rsp+68h] [rbp-18h] BYREF
  int v23; // [rsp+70h] [rbp-10h]
  int v24; // [rsp+74h] [rbp-Ch]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v3 = (TabletModeCoverWindow *)*winrt::impl::root_implements<winrt::iterable_base<winrt::impl::map_impl<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem,std::map<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>>>::abi_guard::abi_guard(
                                   &v19,
                                   (__int64)this);
  v20[2] = (__int64)v3;
  v21 = 1;
  ppv = (LPVOID *)(v2 + 168);
  if ( !*(_QWORD *)(v2 + 168) )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(v2 + 168));
    Instance = CoCreateInstance(
                 &CLSID_SwitchThumbnailDeviceManager,
                 0LL,
                 1u,
                 &GUID_c08ee93c_e5a6_46f2_bdac_416ef1731a41,
                 ppv);
    v6 = Instance;
    if ( Instance < 0 )
    {
      v7 = 300LL;
LABEL_8:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodecoverwindow.cpp",
        (const char *)(unsigned int)Instance);
LABEL_20:
      TabletModeCoverWindow::DestroyDesktopThumbnail(v3);
      return v6;
    }
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)*ppv + 176LL))(*ppv);
  }
  v8 = (DCompThumbnailHelpers **)((char *)this + 160);
  if ( !*((_QWORD *)this + 20) )
  {
    v9 = *ppv;
    v10 = *(__int64 (__fastcall **)(LPVOID, _QWORD, __int64, char *))(*(_QWORD *)v9 + 56LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 20);
    Instance = v10(v9, *((_QWORD *)this + 13), 1LL, (char *)this + 160);
    v6 = Instance;
    if ( Instance < 0 )
    {
      v7 = 308LL;
      goto LABEL_8;
    }
  }
  v19 = (__int64)*v8;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v19);
  DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v20, &v19, (__int64)&GUID_NULL, 0LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v19);
  TabletModeCoverWindow::DestroyDesktopThumbnail(this);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 15);
  DesktopBackgroundThumbnail = DCompThumbnailHelpers::CreateDesktopBackgroundThumbnail(
                                 *v8,
                                 0LL,
                                 (TabletModeCoverWindow *)((char *)this + 204),
                                 0LL,
                                 (const struct tagSIZE *)this + 15);
  v6 = DesktopBackgroundThumbnail;
  if ( DesktopBackgroundThumbnail < 0 )
  {
    v12 = 317LL;
LABEL_19:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodecoverwindow.cpp",
      (const char *)(unsigned int)DesktopBackgroundThumbnail);
    DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v20);
    goto LABEL_20;
  }
  v22 = 0LL;
  v23 = *((_DWORD *)this + 53) - *((_DWORD *)this + 51);
  v24 = *((_DWORD *)this + 54) - *((_DWORD *)this + 52);
  DesktopBackgroundThumbnail = (*(__int64 (__fastcall **)(_QWORD, __int64 *, _QWORD, _QWORD))(**((_QWORD **)this + 15)
                                                                                            + 24LL))(
                                 *((_QWORD *)this + 15),
                                 &v22,
                                 0LL,
                                 0LL);
  v6 = DesktopBackgroundThumbnail;
  if ( DesktopBackgroundThumbnail < 0 )
  {
    v12 = 319LL;
    goto LABEL_19;
  }
  v13 = *v8;
  v14 = *(__int64 (__fastcall **)(DCompThumbnailHelpers *, _QWORD, _QWORD, __int64, GUID *, __int64 *))(*(_QWORD *)*v8 + 104LL);
  v15 = (__int64 *)((char *)this + 128);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v15);
  v19 = 0x100000001LL;
  SysColor = GetSysColor(8);
  DesktopBackgroundThumbnail = v14(v13, 0LL, SysColor, v19, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, v15);
  v6 = DesktopBackgroundThumbnail;
  if ( DesktopBackgroundThumbnail < 0 )
  {
    v12 = 323LL;
    goto LABEL_19;
  }
  DesktopBackgroundThumbnail = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)*v15 + 32LL))(
                                 *v15,
                                 v17,
                                 0LL,
                                 0LL);
  v6 = DesktopBackgroundThumbnail;
  if ( DesktopBackgroundThumbnail < 0 )
  {
    v12 = 325LL;
    goto LABEL_19;
  }
  DesktopBackgroundThumbnail = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)*v15 + 24LL))(
                                 *v15,
                                 &v22,
                                 0LL,
                                 0LL);
  v6 = DesktopBackgroundThumbnail;
  if ( DesktopBackgroundThumbnail < 0 )
  {
    v12 = 326LL;
    goto LABEL_19;
  }
  DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v20);
  return 0LL;
}
