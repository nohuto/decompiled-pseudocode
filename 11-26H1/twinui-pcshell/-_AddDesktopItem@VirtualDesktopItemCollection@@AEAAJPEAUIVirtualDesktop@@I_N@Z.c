/*
 * XREFs of ?_AddDesktopItem@VirtualDesktopItemCollection@@AEAAJPEAUIVirtualDesktop@@I_N@Z @ 0x1804B2528
 * Callers:
 *     ?RuntimeClassInitialize@VirtualDesktopItemCollection@@QEAAJPEAUIVirtualDesktopItemFactory@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopNotificationService@@@Z @ 0x1804B20E4 (-RuntimeClassInitialize@VirtualDesktopItemCollection@@QEAAJPEAUIVirtualDesktopItemFactory@@PEAUI.c)
 *     ?VirtualDesktopCreated@VirtualDesktopItemCollection@@UEAAJPEAUIVirtualDesktop@@@Z @ 0x1804B22B0 (-VirtualDesktopCreated@VirtualDesktopItemCollection@@UEAAJPEAUIVirtualDesktop@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180063200 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ??4?$ObservableProperty@I@@QEAAAEBIAEBI@Z @ 0x1804B1C8C (--4-$ObservableProperty@I@@QEAAAEBIAEBI@Z.c)
 *     ??4?$ObservableProperty@_N@@QEAAAEB_N$$QEA_N@Z @ 0x1804B1D3C (--4-$ObservableProperty@_N@@QEAAAEB_N$$QEA_N@Z.c)
 *     ?_SetTitle@VirtualDesktopItemCollection@@AEAAXPEAUIVirtualDesktopItem@@@Z @ 0x1804B279C (-_SetTitle@VirtualDesktopItemCollection@@AEAAXPEAUIVirtualDesktopItem@@@Z.c)
 *     ?_AddItem@ObservableObjectArray@@IEAAJAEBV?$ComPtr@UIObservableItem@@@WRL@Microsoft@@W4ObservableArrayOperation@@@Z @ 0x1804BDFC0 (-_AddItem@ObservableObjectArray@@IEAAJAEBV-$ComPtr@UIObservableItem@@@WRL@Microsoft@@W4Observabl.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall VirtualDesktopItemCollection::_AddDesktopItem(
        VirtualDesktopItemCollection *this,
        struct IUnknown *a2,
        int a3,
        unsigned __int8 a4)
{
  int v4; // r15d
  __int64 v7; // rdi
  __int64 (__fastcall *v8)(__int64, struct IUnknown *, GUID *, struct IVirtualDesktopItem **); // rbx
  int v9; // eax
  int v10; // ebx
  __int64 v11; // rax
  VirtualDesktopItemCollection *v12; // rcx
  __int64 v13; // rdi
  __int64 (__fastcall *v14)(__int64, struct IUnknown **); // rbx
  int v15; // eax
  unsigned __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rax
  struct IVirtualDesktopItem *v20; // [rsp+30h] [rbp-10h] BYREF
  struct IUnknown *v21; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  struct IVirtualDesktopItem *v23; // [rsp+70h] [rbp+30h] BYREF
  int v24; // [rsp+80h] [rbp+40h] BYREF

  v24 = a3;
  v4 = a4;
  v20 = 0LL;
  v7 = *((_QWORD *)this + 20);
  v8 = *(__int64 (__fastcall **)(__int64, struct IUnknown *, GUID *, struct IVirtualDesktopItem **))(*(_QWORD *)v7 + 24LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v20);
  v9 = v8(v7, a2, &GUID_8335a836_e567_41a4_8778_62f004524ceb, &v20);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v11 = (*(__int64 (__fastcall **)(struct IVirtualDesktopItem *))(*(_QWORD *)v20 + 48LL))(v20);
    ObservableProperty<unsigned int>::operator=(v11, &v24);
    VirtualDesktopItemCollection::_SetTitle(v12, v20);
    v21 = 0LL;
    v13 = *((_QWORD *)this + 21);
    v14 = *(__int64 (__fastcall **)(__int64, struct IUnknown **))(*(_QWORD *)v13 + 48LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v21);
    v15 = v14(v13, &v21);
    v10 = v15;
    if ( v15 >= 0 )
    {
      LOBYTE(v23) = SHIsSameObject(v21, a2);
      v18 = (*(__int64 (__fastcall **)(struct IVirtualDesktopItem *))(*(_QWORD *)v20 + 56LL))(v20);
      ObservableProperty<bool>::operator=(v18, &v23);
      v23 = v20;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v23);
      v10 = ObservableObjectArray::_AddItem(this, &v23, (unsigned int)(2 * v4));
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v23);
      if ( v10 >= 0 )
      {
LABEL_8:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v21);
        goto LABEL_9;
      }
      v16 = (unsigned int)v10;
      v17 = 88LL;
    }
    else
    {
      v16 = (unsigned int)v15;
      v17 = 85LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopitemcollection.cpp",
      (const char *)v16);
    goto LABEL_8;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x4F,
    (int)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopitemcollection.cpp",
    (const char *)(unsigned int)v9);
LABEL_9:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v20);
  return (unsigned int)v10;
}
