/*
 * XREFs of ?_RemoveDesktopItem@VirtualDesktopItemCollection@@AEAAJPEAUIVirtualDesktop@@@Z @ 0x1804A13A0
 * Callers:
 *     ?VirtualDesktopDestroyed@VirtualDesktopItemCollection@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x1804A1000 (-VirtualDesktopDestroyed@VirtualDesktopItemCollection@@UEAAJPEAUIVirtualDesktop@@0@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$As@UIVirtualDesktopItemInternal@@@?$ComPtr@UIObservableItem@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVirtualDesktopItemInternal@@@WRL@Microsoft@@@Details@12@@Z @ 0x1804A0770 (--$As@UIVirtualDesktopItemInternal@@@-$ComPtr@UIObservableItem@@@WRL@Microsoft@@QEBAJV-$ComPtrRe.c)
 *     ?_RemoveItem@ObservableObjectArray@@IEAAJAEBV?$ComPtr@UIObservableItem@@@WRL@Microsoft@@W4ObservableArrayOperation@@@Z @ 0x1804AC82C (-_RemoveItem@ObservableObjectArray@@IEAAJAEBV-$ComPtr@UIObservableItem@@@WRL@Microsoft@@W4Observ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualDesktopItemCollection::_RemoveDesktopItem(
        VirtualDesktopItemCollection *this,
        struct IVirtualDesktop *a2)
{
  __int64 (__fastcall ****v4)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall ****v5)(_QWORD, GUID *, __int64 *); // rbp
  int v6; // eax
  unsigned int v7; // ebx
  struct IVirtualDesktop *v8; // rbx
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF
  __int64 v13; // [rsp+50h] [rbp+18h] BYREF

  v4 = (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 2);
  v5 = &v4[*((_QWORD *)this + 3)];
  while ( v4 != v5 )
  {
    v12 = 0LL;
    v6 = Microsoft::WRL::ComPtr<IObservableItem>::As<IVirtualDesktopItemInternal>(v4, &v12);
    v7 = v6;
    if ( v6 < 0 )
    {
      v9 = 96LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopitemcollection.cpp",
        (const char *)(unsigned int)v6);
LABEL_10:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v12);
      return v7;
    }
    v8 = *(struct IVirtualDesktop **)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v12 + 72LL))(v12, &v13);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
    if ( v8 == a2 )
    {
      v6 = ObservableObjectArray::_RemoveItem(this, v4, 1LL);
      v7 = v6;
      if ( v6 < 0 )
      {
        v9 = 99LL;
        goto LABEL_9;
      }
      goto LABEL_10;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v12);
    ++v4;
  }
  return 2147942487LL;
}
