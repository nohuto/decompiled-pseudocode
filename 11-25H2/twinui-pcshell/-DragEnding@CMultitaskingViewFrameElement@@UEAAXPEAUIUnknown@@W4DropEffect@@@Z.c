/*
 * XREFs of ?DragEnding@CMultitaskingViewFrameElement@@UEAAXPEAUIUnknown@@W4DropEffect@@@Z @ 0x1804B8020
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?DragEnding@CMultitaskingViewElementBase@@UEAAXPEAUIUnknown@@W4DropEffect@@@Z @ 0x1804AFDF0 (-DragEnding@CMultitaskingViewElementBase@@UEAAXPEAUIUnknown@@W4DropEffect@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CMultitaskingViewFrameElement::DragEnding(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  CMultitaskingViewElementBase::DragEnding(a1, a2, a3);
  result = Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 568));
  if ( a3 != 2 )
  {
    v6 = *(_QWORD *)(a1 + 264);
    if ( v6 )
    {
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 48LL))(v6, &v8);
      if ( v8 )
        (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v8 + 32LL))(v8, v7, 3LL);
      return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v8);
    }
  }
  return result;
}
