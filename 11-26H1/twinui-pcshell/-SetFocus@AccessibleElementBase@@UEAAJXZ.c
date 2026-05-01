/*
 * XREFs of ?SetFocus@AccessibleElementBase@@UEAAJXZ @ 0x1804D1E00
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_GetElement@AccessibleElementBase@@IEAAJPEAPEAUIMultitaskingViewElement@@@Z @ 0x1804D2038 (-_GetElement@AccessibleElementBase@@IEAAJPEAPEAUIMultitaskingViewElement@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AccessibleElementBase::SetFocus(AccessibleElementBase *this)
{
  int Element; // ebx
  __int64 v3; // rdx
  struct IMultitaskingViewElement *v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v5);
  Element = AccessibleElementBase::_GetElement((AccessibleElementBase *)((char *)this - 8), &v5);
  if ( Element >= 0 )
  {
    (*(void (__fastcall **)(struct IMultitaskingViewElement *, __int64 *))(*(_QWORD *)v5 + 24LL))(v5, &v6);
    if ( v6 )
    {
      (*(void (__fastcall **)(__int64, struct IMultitaskingViewElement *))(*(_QWORD *)v6 + 288LL))(v6, v5);
    }
    else
    {
      LOBYTE(v3) = 1;
      (*(void (__fastcall **)(struct IMultitaskingViewElement *, __int64))(*(_QWORD *)v5 + 296LL))(v5, v3);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v6);
    Element = 0;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v5);
  return (unsigned int)Element;
}
