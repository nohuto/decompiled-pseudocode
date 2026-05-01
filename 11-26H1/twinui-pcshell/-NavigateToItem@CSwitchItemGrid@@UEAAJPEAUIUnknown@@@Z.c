/*
 * XREFs of ?NavigateToItem@CSwitchItemGrid@@UEAAJPEAUIUnknown@@@Z @ 0x1804C6ED0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$FindEx@VCompareToItemData@@@?$CTSimpleFixedArray@V?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@VElementCompare@ElementHelpers@@@@QEBAJAEBVCompareToItemData@@AEBV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1804C577C (--$FindEx@VCompareToItemData@@@-$CTSimpleFixedArray@V-$ComPtr@UIMultitaskingViewElement@@@WRL@Mi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CSwitchItemGrid::NavigateToItem(CSwitchItemGrid *this, struct IUnknown *a2)
{
  __int64 v3; // r8
  int v4; // ebx
  struct IUnknown *v6; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 v7; // [rsp+58h] [rbp+10h] BYREF
  __int64 v8; // [rsp+60h] [rbp+18h] BYREF

  v7 = 0LL;
  v8 = 0LL;
  v6 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v6);
  v4 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IMultitaskingViewElement>,ElementHelpers::ElementCompare>::FindEx<CompareToItemData>(
         (_QWORD *)this - 24,
         &v6,
         v3,
         &v7);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v6);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v8);
  if ( v4 < 0 )
    return (unsigned int)v4;
  (*(void (__fastcall **)(char *, _QWORD))(*((_QWORD *)this - 26) + 288LL))(
    (char *)this - 208,
    *(_QWORD *)(*((_QWORD *)this - 24) + 8 * v7));
  return 0LL;
}
