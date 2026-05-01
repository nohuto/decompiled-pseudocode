/*
 * XREFs of ?GetFocusedDescendant@ElementHelpers@@YA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@PEAUIMultitaskingViewElement@@@Z @ 0x1804CC924
 * Callers:
 *     ?_RaiseFocusEvent@CMultitaskingViewElementBase@@IEAAJXZ @ 0x1804C3D6C (-_RaiseFocusEvent@CMultitaskingViewElementBase@@IEAAJXZ.c)
 *     ?GetFocus@AccessibleElementBase@@UEAAJPEAPEAUIRawElementProviderFragment@@@Z @ 0x1804D0E00 (-GetFocus@AccessibleElementBase@@UEAAJPEAPEAUIRawElementProviderFragment@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180052CE8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ??4?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x18020E5D4 (--4-$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall ElementHelpers::GetFocusedDescendant(__int64 *a1, __int64 a2)
{
  __int64 v4; // rbx
  char *v5; // rax
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF

  *a1 = 0LL;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 304LL))(a2) )
  {
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=(a1, a2);
    while ( 1 )
    {
      v4 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)*a1 + 280LL))(*a1, &v7);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v7);
      if ( !v4 )
        break;
      v5 = (char *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)*a1 + 280LL))(*a1, &v8);
      Microsoft::WRL::ComPtr<WeakReference::IWeakReference>::operator=(a1, v5);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v8);
    }
  }
  return a1;
}
