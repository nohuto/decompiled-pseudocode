/*
 * XREFs of ?MapElementRectToAncestor@ElementHelpers@@YA?AUCRect@Geometry@@PEAUIMultitaskingViewElement@@0U23@@Z @ 0x1804CCC04
 * Callers:
 *     ?GetScreenLocation@ElementHelpers@@YA?AUCRect@Geometry@@PEAUIMultitaskingViewElement@@@Z @ 0x1804CCB08 (-GetScreenLocation@ElementHelpers@@YA-AUCRect@Geometry@@PEAUIMultitaskingViewElement@@@Z.c)
 *     ?GetDragSourceLocation@ElementDragData@@AEAAJPEAUCRect@Geometry@@@Z @ 0x1804DB54C (-GetDragSourceLocation@ElementDragData@@AEAAJPEAUCRect@Geometry@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x18020E5D4 (--4-$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?IsSameElement@ElementHelpers@@YA_NPEAUIMultitaskingViewElement@@0@Z @ 0x1804BABE8 (-IsSameElement@ElementHelpers@@YA_NPEAUIMultitaskingViewElement@@0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__m128i *__fastcall ElementHelpers::MapElementRectToAncestor(__m128i *a1, __int64 a2, struct IUnknown *a3, __m128i *a4)
{
  struct IUnknown *v6; // rbx
  struct IMultitaskingViewElement *v8; // r8
  _DWORD *v9; // rax
  __m128i v10; // xmm0
  int v11; // r8d
  int v12; // edx
  __int64 v13; // rcx
  char *v14; // rax
  struct IUnknown *v16; // [rsp+20h] [rbp-38h] BYREF
  __int64 v17; // [rsp+28h] [rbp-30h] BYREF
  char v18[40]; // [rsp+30h] [rbp-28h] BYREF

  v6 = (struct IUnknown *)a2;
  v16 = (struct IUnknown *)a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v16);
  while ( v6 && !ElementHelpers::IsSameElement(v6, a3, v8) )
  {
    v9 = (_DWORD *)((__int64 (__fastcall *)(struct IUnknown *, char *))v6->lpVtbl[5].QueryInterface)(v6, v18);
    v10 = *a4;
    v11 = v9[1];
    v12 = -*v9;
    v13 = a4->m128i_i64[0];
    a4->m128i_i32[0] = a4->m128i_i64[0] - *v9;
    a4->m128i_i32[1] = HIDWORD(v13) - v11;
    v10.m128i_i64[0] = _mm_srli_si128(v10, 8).m128i_u64[0];
    a4->m128i_i32[2] = v12 + v10.m128i_i32[0];
    a4->m128i_i32[3] = v10.m128i_i32[1] - v11;
    v14 = (char *)((__int64 (__fastcall *)(struct IUnknown *, __int64 *))v6->lpVtbl[1].QueryInterface)(v6, &v17);
    Microsoft::WRL::ComPtr<WeakReference::IWeakReference>::operator=((__int64 *)&v16, v14);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
    v6 = v16;
  }
  *a1 = *a4;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v16);
  return a1;
}
