/*
 * XREFs of ?RuntimeClassInitialize@SwitchItemThumbnailElement@@QEAAJAEBUThumbnailSizeMetrics@@PEAUISwitchThumbnailFactory@@PEAUISwitchItem@@@Z @ 0x1804D3898
 * Callers:
 *     ??$MakeAndInitialize@VSwitchItemThumbnailElement@@UIMultitaskingViewElement@@AEBUThumbnailSizeMetrics@@AEBQEAUISwitchThumbnailFactory@@AEBQEAUISwitchItem@@@Details@WRL@Microsoft@@YAJPEAPEAUIMultitaskingViewElement@@AEBUThumbnailSizeMetrics@@AEBQEAUISwitchThumbnailFactory@@AEBQEAUISwitchItem@@@Z @ 0x1804BF340 (--$MakeAndInitialize@VSwitchItemThumbnailElement@@UIMultitaskingViewElement@@AEBUThumbnailSizeMe.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180052CE8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ??0abi_guard@?$root_implements@Uiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@Ucollection_version@23@@winrt@@U?$IIterator@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@QEAA@AEAUiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@Ucollection_version@23@@3@@Z @ 0x18027F3E0 (--0abi_guard@-$root_implements@Uiterator@-$iterable_base@U-$map_impl@Uhstring@winrt@@URemoteSyst.c)
 *     ?Initialize@?$CWeakRefSource@VSwitchItemThumbnailElement@@@WeakReference@@QEAAJPEAVSwitchItemThumbnailElement@@@Z @ 0x1804C8890 (-Initialize@-$CWeakRefSource@VSwitchItemThumbnailElement@@@WeakReference@@QEAAJPEAVSwitchItemThu.c)
 *     ?RuntimeClassInitialize@CShrinkButtonElement@@QEAAJNPEAUISwitchThumbnailFactory@@@Z @ 0x1804CF08C (-RuntimeClassInitialize@CShrinkButtonElement@@QEAAJNPEAUISwitchThumbnailFactory@@@Z.c)
 *     ObservableProperty_HWND_____::AddListener__lambda_3d6638088535fad8bc54773006e1fbb5___ @ 0x1804D2EE4 (ObservableProperty_HWND_____--AddListener__lambda_3d6638088535fad8bc54773006e1fbb5___.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall SwitchItemThumbnailElement::RuntimeClassInitialize(
        SwitchItemThumbnailElement *this,
        const struct ThumbnailSizeMetrics *a2,
        struct ISwitchThumbnailFactory *a3,
        struct ISwitchItem *a4)
{
  const struct ThumbnailSizeMetrics *v5; // rbx
  int v7; // eax
  unsigned int v8; // esi
  _OWORD *v10; // rcx
  __int64 v11; // rax
  _QWORD *v12; // rsi
  int v13; // eax
  unsigned int v14; // ebx
  __int64 v15; // rbx
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // r8
  int v19; // eax
  int v20[2]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v21[2]; // [rsp+28h] [rbp-30h] BYREF
  char v22; // [rsp+38h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v24; // [rsp+68h] [rbp+10h] BYREF

  v5 = a2;
  v7 = CShrinkButtonElement::RuntimeClassInitialize(this, *((double *)a2 + 15), a3);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v10 = (_OWORD *)((char *)this + 296);
    v11 = 2LL;
    do
    {
      *v10 = *(_OWORD *)v5;
      v10[1] = *((_OWORD *)v5 + 1);
      v10[2] = *((_OWORD *)v5 + 2);
      v10[3] = *((_OWORD *)v5 + 3);
      v10[4] = *((_OWORD *)v5 + 4);
      v10[5] = *((_OWORD *)v5 + 5);
      v10[6] = *((_OWORD *)v5 + 6);
      v10 += 8;
      *(v10 - 1) = *((_OWORD *)v5 + 7);
      v5 = (const struct ThumbnailSizeMetrics *)((char *)v5 + 128);
      --v11;
    }
    while ( v11 );
    *v10 = *(_OWORD *)v5;
    *((_QWORD *)v10 + 2) = *((_QWORD *)v5 + 2);
    v12 = (_QWORD *)((char *)this + 576);
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 72, (__int64)a4);
    v13 = WeakReference::CWeakRefSource<SwitchItemThumbnailElement>::Initialize((__int64 *)this + 75, (__int64)this);
    v14 = v13;
    if ( v13 >= 0 )
    {
      *(_QWORD *)v20 = *((_QWORD *)this + 75);
      v15 = *(_QWORD *)v20;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)v20);
      v16 = *winrt::impl::root_implements<winrt::iterable_base<winrt::impl::map_impl<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem,std::map<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>>>::abi_guard::abi_guard(
               v21,
               (__int64)this);
      v21[1] = v16;
      v22 = 1;
      v17 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v12 + 40LL))(*v12);
      v24 = v15;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v24);
      v19 = ObservableProperty_HWND_____::AddListener__lambda_3d6638088535fad8bc54773006e1fbb5___(v17, &v24, v18);
      v14 = v19;
      if ( v19 >= 0 )
      {
        v14 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x29,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\switchitemthumbnailelement.cpp",
          (const char *)(unsigned int)v19);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 80LL))(v16);
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v20);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x19,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\switchitemthumbnailelement.cpp",
        (const char *)(unsigned int)v13);
    }
    return v14;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\switchitemthumbnailelement.cpp",
      (const char *)(unsigned int)v7);
    return v8;
  }
}
