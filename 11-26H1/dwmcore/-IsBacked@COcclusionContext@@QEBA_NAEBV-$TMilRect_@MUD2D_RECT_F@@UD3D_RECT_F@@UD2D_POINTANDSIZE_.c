/*
 * XREFs of ?IsBacked@COcclusionContext@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@H_NPEBV?$vector@PEBVCVisual@@V?$allocator@PEBVCVisual@@@std@@@std@@@Z @ 0x18024FB90
 * Callers:
 *     ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M_NI@Z @ 0x1800C8918 (-PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D.c)
 * Callees:
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800797A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?IsOpaquelyBacked@CArrayBasedCoverageSet@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@HPEBV?$vector@PEBVCVisual@@V?$allocator@PEBVCVisual@@@std@@@std@@@Z @ 0x180258FE8 (-IsOpaquelyBacked@CArrayBasedCoverageSet@@QEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_.c)
 */

char __fastcall COcclusionContext::IsBacked(
        __int64 a1,
        const struct D2D_RECT_F *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int128 *v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int128 v9; // [rsp+20h] [rbp-18h] BYREF

  if ( IsEmpty(a2) )
    return 1;
  v9 = *v5;
  return ((__int64 (__fastcall *)(__int64, __int128 *, __int64, __int64))CArrayBasedCoverageSet::IsOpaquelyBacked)(
           v7 + 584,
           &v9,
           v6,
           a5);
}
