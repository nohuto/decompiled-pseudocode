/*
 * XREFs of ?CanDiscardCornerRect@COcclusionContext@@AEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@H_N@Z @ 0x18024FA50
 * Callers:
 *     ?OptimizeCornerRects@COcclusionContext@@QEBAXPEAVCCornerRects@@H@Z @ 0x18024FBD4 (-OptimizeCornerRects@COcclusionContext@@QEBAXPEAVCCornerRects@@H@Z.c)
 * Callees:
 *     ?PageInPixelsRectToDeviceRect@COcclusionContext@@AEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1800CCA58 (-PageInPixelsRectToDeviceRect@COcclusionContext@@AEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F.c)
 *     ?TrimCornerRect@CArrayBasedCoverageSet@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@H@Z @ 0x1802590E4 (-TrimCornerRect@CArrayBasedCoverageSet@@QEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_PO.c)
 */

__int64 __fastcall COcclusionContext::CanDiscardCornerRect(__int64 a1, __int128 *a2, unsigned int a3)
{
  bool v3; // zf
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF

  v3 = *(_BYTE *)(a1 + 1124) == 0;
  v7 = 0LL;
  if ( v3 )
    v7 = *a2;
  else
    COcclusionContext::PageInPixelsRectToDeviceRect(a1, a2, (__int64)&v7);
  return CArrayBasedCoverageSet::TrimCornerRect(a1 + 584, &v7, a3);
}
