/*
 * XREFs of ?get_IsSelected@AccessibleElementBase@@UEAAJPEAH@Z @ 0x1804D2B10
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_GetElement@AccessibleElementBase@@IEAAJPEAPEAUIMultitaskingViewElement@@@Z @ 0x1804D2038 (-_GetElement@AccessibleElementBase@@IEAAJPEAPEAUIMultitaskingViewElement@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AccessibleElementBase::get_IsSelected(AccessibleElementBase *this, int *a2)
{
  int Element; // ebx
  struct IMultitaskingViewElement *v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v6);
  Element = AccessibleElementBase::_GetElement((AccessibleElementBase *)((char *)this - 40), &v6);
  if ( Element >= 0 )
  {
    *a2 = (*(unsigned __int8 (__fastcall **)(struct IMultitaskingViewElement *))(*(_QWORD *)v6 + 344LL))(v6);
    Element = 0;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v6);
  return (unsigned int)Element;
}
