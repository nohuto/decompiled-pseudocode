/*
 * XREFs of ?IsOpaquelyBacked@CArrayBasedCoverageSet@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@HPEBV?$vector@PEBVCVisual@@V?$allocator@PEBVCVisual@@@std@@@std@@@Z @ 0x180258FE8
 * Callers:
 *     ?IsBacked@COcclusionContext@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@H_NPEBV?$vector@PEBVCVisual@@V?$allocator@PEBVCVisual@@@std@@@std@@@Z @ 0x18024FB90 (-IsBacked@COcclusionContext@@QEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_.c)
 * Callees:
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800797A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?CheckOccludedAndOptimize@@YA_NPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBV1@@Z @ 0x1800CEB44 (-CheckOccludedAndOptimize@@YA_NPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     __std_find_trivial_8 @ 0x180220100 (__std_find_trivial_8.c)
 */

char __fastcall CArrayBasedCoverageSet::IsOpaquelyBacked(__int64 a1, struct D2D_RECT_F *a2, int a3, const __m128i **a4)
{
  unsigned int v4; // ebp
  __int64 i; // rdi
  __int64 v9; // rbx
  const struct D2D_RECT_F *v10; // rcx
  unsigned __int64 v11; // r8
  struct D2D_RECT_F v13; // [rsp+20h] [rbp-28h] BYREF

  v4 = *(_DWORD *)(a1 + 24);
  v13 = *a2;
  for ( i = 0LL; (unsigned int)i < v4; i = (unsigned int)(i + 1) )
  {
    v9 = *(_QWORD *)a1 + 48 * i;
    if ( *(_DWORD *)(v9 + 16) > a3
      && !IsEmpty((const struct D2D_RECT_F *)(*(_QWORD *)a1 + 48 * i))
      && !IsEmpty(v10)
      && !IsEmpty(&v13)
      && *(float *)(v9 + 8) > v13.left
      && v13.right > *(float *)v9
      && *(float *)(v9 + 12) > v13.top
      && v13.bottom > *(float *)(v9 + 4) )
    {
      v11 = *(_QWORD *)(v9 + 24);
      if ( v11 && a4 && _std_find_trivial_8(*a4, a4[1], v11) != a4[1] )
        return 0;
      if ( CheckOccludedAndOptimize((__m128i *)&v13, (float *)v9, v11) )
        return 1;
    }
  }
  return 0;
}
