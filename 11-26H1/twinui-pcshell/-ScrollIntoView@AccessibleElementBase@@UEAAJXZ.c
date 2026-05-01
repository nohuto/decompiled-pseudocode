/*
 * XREFs of ?ScrollIntoView@AccessibleElementBase@@UEAAJXZ @ 0x1804D1CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_GetElement@AccessibleElementBase@@IEAAJPEAPEAUIMultitaskingViewElement@@@Z @ 0x1804D2038 (-_GetElement@AccessibleElementBase@@IEAAJPEAPEAUIMultitaskingViewElement@@@Z.c)
 *     ?_GetParentScrollViewer@AccessibleElementBase@@IEAAJPEAPEAUIScrollViewer@@@Z @ 0x1804D22A0 (-_GetParentScrollViewer@AccessibleElementBase@@IEAAJPEAPEAUIScrollViewer@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AccessibleElementBase::ScrollIntoView(AccessibleElementBase *this)
{
  AccessibleElementBase *v1; // rdi
  int ParentScrollViewer; // ebx
  struct IMultitaskingViewElement *v4; // [rsp+30h] [rbp+8h] BYREF
  struct IScrollViewer *v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0LL;
  v1 = (AccessibleElementBase *)((char *)this - 56);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v5);
  ParentScrollViewer = AccessibleElementBase::_GetParentScrollViewer(v1, &v5);
  if ( ParentScrollViewer >= 0 )
  {
    v4 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v4);
    ParentScrollViewer = AccessibleElementBase::_GetElement(v1, &v4);
    if ( ParentScrollViewer >= 0 )
    {
      (*(void (__fastcall **)(struct IScrollViewer *, struct IMultitaskingViewElement *))(*(_QWORD *)v5 + 24LL))(v5, v4);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v4);
      ParentScrollViewer = 0;
    }
    else
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v4);
    }
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v5);
  return (unsigned int)ParentScrollViewer;
}
