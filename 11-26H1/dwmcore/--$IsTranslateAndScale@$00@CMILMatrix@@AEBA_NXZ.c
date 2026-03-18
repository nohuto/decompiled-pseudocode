/*
 * XREFs of ??$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ @ 0x1800B1930
 * Callers:
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180042890 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?CalcDecodedSourceRectAndTransform@CDxHandleYUVBitmapRealization@@IEBAXPEAVCMILMatrix@@PEAV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@1@Z @ 0x18005EFCC (-CalcDecodedSourceRectAndTransform@CDxHandleYUVBitmapRealization@@IEBAXPEAVCMILMatrix@@PEAV-$TMi.c)
 *     ?GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800602F0 (-GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD.c)
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@PEBVCMILMatrix@@PEBV1@W4D2D1_ANTIALIAS_MODE@@W4CpuClippingScopeMode@@@Z @ 0x1800A3010 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@P.c)
 *     ?DeriveOverlayRotationParameters@COverlayContext@@QEAA_NAEBVCMILMatrix@@PEAW4DXGI_MODE_ROTATION@@PEAIPEA_N@Z @ 0x1800AFEA0 (-DeriveOverlayRotationParameters@COverlayContext@@QEAA_NAEBVCMILMatrix@@PEAW4DXGI_MODE_ROTATION@.c)
 *     ?GetRootTransform@CVisual@@QEBA_NPEAVCMILMatrix@@_N1@Z @ 0x1800AFF90 (-GetRootTransform@CVisual@@QEBA_NPEAVCMILMatrix@@_N1@Z.c)
 *     ?UpdateScopeTransforms@CCpuClippingData@@AEAAXPEAVCVisual@@_NPEBVCMILMatrix@@@Z @ 0x1800B1F20 (-UpdateScopeTransforms@CCpuClippingData@@AEAAXPEAVCVisual@@_NPEBVCMILMatrix@@@Z.c)
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@PEAV1@_N@Z @ 0x1800B3C80 (-ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@PEAV1@_N@Z.c)
 *     ??$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800B5B10 (--$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD.c)
 *     ?CalculateCasterBounds@CProjectedShadowCaster@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCVisualTree@@PEA_N@Z @ 0x1800CAB74 (-CalculateCasterBounds@CProjectedShadowCaster@@QEBA-AV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2.c)
 *     ?CalcAttributes@DesktopPlaneInfo@COverlayContext@@QEAAXPEBVIOverlayMonitorTarget@@AEBVOverlayCaps@@_N@Z @ 0x1802392A0 (-CalcAttributes@DesktopPlaneInfo@COverlayContext@@QEAAXPEBVIOverlayMonitorTarget@@AEBVOverlayCap.c)
 * Callees:
 *     <none>
 */

char __fastcall CMILMatrix::IsTranslateAndScale<1>(__int64 a1)
{
  char v1; // r8
  unsigned __int32 v2; // xmm2_4
  char v3; // al
  char v4; // al
  char v6; // dl
  char v7; // dl
  char v8; // al
  char v9; // al
  char v10; // dl
  char v11; // al
  int v12; // xmm0_4
  char v13; // r8

  v1 = *(_BYTE *)(a1 + 65);
  if ( (v1 & 8) == 0 && 16 * (v1 & 0xFC) != 0 )
    return 0;
  v2 = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0];
  if ( (v1 & 8) == 0 )
  {
    if ( (char)(4 * v1) >> 6 == 1
      || ((char)(4 * v1) >> 6 >= 0
        ? (COERCE_FLOAT(COERCE_UNSIGNED_INT(
                          (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(a1 + 28) & v2) * 61440.0)
                                        + (float)(COERCE_FLOAT(*(_DWORD *)(a1 + 12) & v2) * 61440.0))
                                + COERCE_FLOAT(*(_DWORD *)(a1 + 60) & v2))
                        - 1.0) & v2) >= 0.000081380211
         ? (v10 = 0, v11 = 16)
         : (v10 = 1, v11 = -16),
           v12 = *(_DWORD *)(a1 + 44) & v2,
           *(_BYTE *)(a1 + 65) = v11 ^ (v11 ^ v1) & 0xCF,
           v9 = v10 & (COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(*(float *)&v12 * 61440.0) - 0.0) & v2) < 0.000081380211))
        : (v9 = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(*(_DWORD *)(a1 + 44) & v2) * 61440.0) - 0.0) & v2) < 0.000081380211),
          !v9
       || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 32) - 0.0) & v2) >= 0.000081380211
       || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 36) - 0.0) & v2) >= 0.000081380211) )
    {
      *(_BYTE *)(a1 + 65) = *(_BYTE *)(a1 + 65) & 0xF3 ^ 4;
      return 0;
    }
    v1 = *(_BYTE *)(a1 + 65) & 0xF3 ^ 0xC;
    *(_BYTE *)(a1 + 65) = v1;
  }
  v3 = *(_BYTE *)(a1 + 64);
  if ( (char)(16 * v3) >> 6 == 1 )
    return 0;
  if ( (char)(16 * v3) >> 6 >= 0 )
  {
    if ( (char)(4 * v1) >> 6 == 1 )
      goto LABEL_27;
    if ( (char)(4 * v1) >> 6 >= 0 )
    {
      v13 = v1 & 0xCF;
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                          (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(a1 + 28) & v2) * 61440.0)
                                        + (float)(COERCE_FLOAT(*(_DWORD *)(a1 + 12) & v2) * 61440.0))
                                + COERCE_FLOAT(*(_DWORD *)(a1 + 60) & v2))
                        - 1.0) & v2) >= 0.000081380211 )
      {
        *(_BYTE *)(a1 + 65) = v13 ^ 0x10;
        *(_BYTE *)(a1 + 64) = v3 & 0xF3 ^ 4;
        return 0;
      }
      *(_BYTE *)(a1 + 65) = v13 ^ 0x30;
    }
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 8) - 0.0) & v2) >= 0.000081380211
      || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 24) - 0.0) & v2) >= 0.000081380211 )
    {
LABEL_27:
      *(_BYTE *)(a1 + 64) = v3 & 0xF3 ^ 4;
      return 0;
    }
    v3 = v3 & 0xF3 ^ 0xC;
    *(_BYTE *)(a1 + 64) = v3;
  }
  v4 = v3 >> 6;
  if ( v4 > 0 )
    return 0;
  if ( v4 < 0 )
    return 1;
  v6 = *(_BYTE *)(a1 + 65);
  if ( (char)(4 * v6) >> 6 == 1 )
  {
LABEL_8:
    *(_BYTE *)(a1 + 64) = *(_BYTE *)(a1 + 64) & 0x3F | 0x40;
    return 0;
  }
  if ( (char)(4 * v6) >> 6 < 0 )
  {
LABEL_12:
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 4) - 0.0) & v2) < 0.000081380211
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 16) - 0.0) & v2) < 0.000081380211 )
    {
      *(_BYTE *)(a1 + 64) |= 0xC0u;
      return 1;
    }
    goto LABEL_8;
  }
  v7 = v6 & 0xCF;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                      (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(a1 + 28) & v2) * 61440.0)
                                    + (float)(COERCE_FLOAT(*(_DWORD *)(a1 + 12) & v2) * 61440.0))
                            + COERCE_FLOAT(*(_DWORD *)(a1 + 60) & v2))
                    - 1.0) & v2) < 0.000081380211 )
  {
    *(_BYTE *)(a1 + 65) = v7 ^ 0x30;
    goto LABEL_12;
  }
  v8 = *(_BYTE *)(a1 + 64);
  *(_BYTE *)(a1 + 65) = v7 ^ 0x10;
  *(_BYTE *)(a1 + 64) = v8 & 0x3F | 0x40;
  return 0;
}
