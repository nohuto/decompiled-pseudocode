/*
 * XREFs of ??$IsTranslateIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800CDD20
 * Callers:
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x18006CFD0 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x1800BB010 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ?ProcessPostSubgraphWindowBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@@Z @ 0x1800CC140 (-ProcessPostSubgraphWindowBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@@Z.c)
 *     ?PageInPixelsRectToDeviceRect@COcclusionContext@@AEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1800CCA58 (-PageInPixelsRectToDeviceRect@COcclusionContext@@AEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F.c)
 *     ?FillContainsRect@CRoundedRectangleGeometryData@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800CD210 (-FillContainsRect@CRoundedRectangleGeometryData@@QEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F.c)
 *     ?GetLocalClipRect@OverlayPlaneInfo@COverlayContext@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@@Z @ 0x1800CDBA0 (-GetLocalClipRect@OverlayPlaneInfo@COverlayContext@@QEBA-AV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F.c)
 *     ?GetWorldBounds@CRenderingBatchCommand@@QEBAXPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800CDE50 (-GetWorldBounds@CRenderingBatchCommand@@QEBAXPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POI.c)
 *     ?IsOccluded@COcclusionContext@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@H_N@Z @ 0x1800CE6C0 (-IsOccluded@COcclusionContext@@QEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CMILMatrix::IsTranslateIgnoreZ<1>(__int64 a1)
{
  char v1; // dl
  char result; // al
  unsigned __int32 v4; // xmm3_4
  char v5; // r9
  char v6; // al
  char v7; // cl
  char v8; // cl
  char v9; // cl

  v1 = *(_BYTE *)(a1 + 64);
  if ( (char)(4 * v1) >> 6 == 1 )
    return 0;
  if ( (char)(4 * v1) >> 6 < 0 )
    return 1;
  if ( v1 >> 6 == 1 )
    goto LABEL_11;
  v4 = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0];
  if ( v1 >> 6 >= 0 )
  {
    v8 = *(_BYTE *)(a1 + 65);
    if ( (char)(4 * v8) >> 6 != 1 )
    {
      if ( (char)(4 * v8) >> 6 >= 0 )
      {
        v9 = v8 & 0xCF;
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                            (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(a1 + 28) & v4) * 61440.0)
                                          + (float)(COERCE_FLOAT(*(_DWORD *)(a1 + 12) & v4) * 61440.0))
                                  + COERCE_FLOAT(*(_DWORD *)(a1 + 60) & v4))
                          - 1.0) & v4) >= 0.000081380211 )
        {
          *(_BYTE *)(a1 + 65) = v9 ^ 0x10;
          goto LABEL_10;
        }
        *(_BYTE *)(a1 + 65) = v9 ^ 0x30;
      }
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 4) - 0.0) & v4) < 0.000081380211
        && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 16) - 0.0) & v4) < 0.000081380211 )
      {
        v1 |= 0xC0u;
        goto LABEL_7;
      }
    }
LABEL_10:
    v1 = v1 & 0x3F | 0x40;
LABEL_11:
    v5 = 0;
    v6 = 16;
    goto LABEL_12;
  }
LABEL_7:
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)a1 - 1.0) & v4) >= 0.000081380211
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 20) - 1.0) & v4) >= 0.000081380211 )
  {
    goto LABEL_11;
  }
  v5 = 1;
  v6 = -16;
LABEL_12:
  v7 = v6 ^ (v1 ^ v6) & 0xCF;
  result = v5;
  *(_BYTE *)(a1 + 64) = v7;
  return result;
}
