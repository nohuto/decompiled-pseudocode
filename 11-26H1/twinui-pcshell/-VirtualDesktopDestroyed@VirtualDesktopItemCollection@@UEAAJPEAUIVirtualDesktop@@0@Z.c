/*
 * XREFs of ?VirtualDesktopDestroyed@VirtualDesktopItemCollection@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x1804B2300
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ObservableProperty@I@@QEAAAEBIAEBI@Z @ 0x1804B1C8C (--4-$ObservableProperty@I@@QEAAAEBIAEBI@Z.c)
 *     ?_RemoveDesktopItem@VirtualDesktopItemCollection@@AEAAJPEAUIVirtualDesktop@@@Z @ 0x1804B26B4 (-_RemoveDesktopItem@VirtualDesktopItemCollection@@AEAAJPEAUIVirtualDesktop@@@Z.c)
 *     ?_SetTitle@VirtualDesktopItemCollection@@AEAAXPEAUIVirtualDesktopItem@@@Z @ 0x1804B279C (-_SetTitle@VirtualDesktopItemCollection@@AEAAXPEAUIVirtualDesktopItem@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall VirtualDesktopItemCollection::VirtualDesktopDestroyed(
        VirtualDesktopItemCollection *this,
        struct IVirtualDesktop *a2,
        struct IVirtualDesktop *a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  unsigned int v7; // eax
  int v8; // ebp
  __int64 (__fastcall ***v9)(_QWORD, GUID *, struct IVirtualDesktopItem **); // rdi
  __int64 (__fastcall *v10)(_QWORD, GUID *, struct IVirtualDesktopItem **); // rbx
  int v11; // eax
  __int64 v12; // rax
  VirtualDesktopItemCollection *v13; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v15; // [rsp+40h] [rbp+8h] BYREF
  struct IVirtualDesktopItem *v16; // [rsp+58h] [rbp+20h] BYREF

  v4 = VirtualDesktopItemCollection::_RemoveDesktopItem((VirtualDesktopItemCollection *)((char *)this - 144), a2);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v15 = 0;
    v7 = 0;
    v8 = 0;
    while ( (unsigned __int64)v7 < *((_QWORD *)this - 15) )
    {
      _mm_lfence();
      v16 = 0LL;
      v9 = *(__int64 (__fastcall ****)(_QWORD, GUID *, struct IVirtualDesktopItem **))(*((_QWORD *)this - 16) + 8LL * v7);
      v10 = **v9;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v16);
      v11 = v10(v9, &GUID_8335a836_e567_41a4_8778_62f004524ceb, &v16);
      v5 = v11;
      if ( v11 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x7F,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopitemcollection.cpp",
          (const char *)(unsigned int)v11);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v16);
        return v5;
      }
      v12 = (*(__int64 (__fastcall **)(struct IVirtualDesktopItem *))(*(_QWORD *)v16 + 48LL))(v16);
      ObservableProperty<unsigned int>::operator=(v12, &v15);
      VirtualDesktopItemCollection::_SetTitle(v13, v16);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v16);
      v7 = v8 + 1;
      v15 = ++v8;
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7B,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopitemcollection.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
}
