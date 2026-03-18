/*
 * XREFs of ??$IsPure2DUniformZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800B1BF0
 * Callers:
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180042890 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800602F0 (-GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180061980 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?CalcScopeTransformFromWorld@CCpuClippingData@@SA_NAEBVCMILMatrix@@0PEAV2@@Z @ 0x180063A00 (-CalcScopeTransformFromWorld@CCpuClippingData@@SA_NAEBVCMILMatrix@@0PEAV2@@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800831C0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@PEBVCMILMatrix@@PEBV1@W4D2D1_ANTIALIAS_MODE@@W4CpuClippingScopeMode@@@Z @ 0x1800A3010 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@P.c)
 *     ?GetRootTransform@CVisual@@QEBA_NPEAVCMILMatrix@@_N1@Z @ 0x1800AFF90 (-GetRootTransform@CVisual@@QEBA_NPEAVCMILMatrix@@_N1@Z.c)
 *     ?UpdateScopeTransforms@CCpuClippingData@@AEAAXPEAVCVisual@@_NPEBVCMILMatrix@@@Z @ 0x1800B1F20 (-UpdateScopeTransforms@CCpuClippingData@@AEAAXPEAVCVisual@@_NPEBVCMILMatrix@@@Z.c)
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@PEAV1@_N@Z @ 0x1800B3C80 (-ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@PEAV1@_N@Z.c)
 *     ??$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800B5B10 (--$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD.c)
 * Callees:
 *     <none>
 */

char __fastcall CMILMatrix::IsPure2DUniformZ<1>(__int64 a1)
{
  char v1; // dl
  char v2; // r8
  char result; // al
  char v4; // al
  char v5; // r8
  char v6; // al
  float v7; // xmm0_4
  char v8; // dl

  v1 = *(_BYTE *)(a1 + 65);
  if ( (v1 & 8) == 0 && 16 * (v1 & 0xFC) != 0 )
    return 0;
  if ( (v1 & 8) == 0 )
  {
    if ( (char)(4 * v1) >> 6 == 1
      || ((char)(4 * v1) >> 6 >= 0
        ? (COERCE_FLOAT(COERCE_UNSIGNED_INT(
                          (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(a1 + 28) & _xmm) * 61440.0)
                                        + (float)(COERCE_FLOAT(*(_DWORD *)(a1 + 12) & _xmm) * 61440.0))
                                + COERCE_FLOAT(*(_DWORD *)(a1 + 60) & _xmm))
                        - 1.0) & _xmm) >= 0.000081380211
         ? (v5 = 0, v6 = 16)
         : (v5 = 1, v6 = -16),
           LODWORD(v7) = *(_DWORD *)(a1 + 44) & _xmm,
           *(_BYTE *)(a1 + 65) = v6 ^ (v6 ^ v1) & 0xCF,
           v4 = v5 & (COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(v7 * 61440.0) - 0.0) & _xmm) < 0.000081380211))
        : (v4 = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(*(_DWORD *)(a1 + 44) & _xmm) * 61440.0) - 0.0) & _xmm) < 0.000081380211),
          !v4
       || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 32) - 0.0) & _xmm) >= 0.000081380211
       || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 36) - 0.0) & _xmm) >= 0.000081380211) )
    {
      *(_BYTE *)(a1 + 65) = *(_BYTE *)(a1 + 65) & 0xF3 ^ 4;
      return 0;
    }
    v1 = *(_BYTE *)(a1 + 65) & 0xF3 ^ 0xC;
    *(_BYTE *)(a1 + 65) = v1;
  }
  v2 = *(_BYTE *)(a1 + 64);
  if ( (char)(16 * v2) >> 6 == 1 )
    return 0;
  if ( (char)(16 * v2) >> 6 < 0 )
    return 1;
  if ( (char)(4 * v1) >> 6 == 1 )
    goto LABEL_21;
  if ( (char)(4 * v1) >> 6 >= 0 )
  {
    v8 = v1 & 0xCF;
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                        (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(a1 + 28) & _xmm) * 61440.0)
                                      + (float)(COERCE_FLOAT(*(_DWORD *)(a1 + 12) & _xmm) * 61440.0))
                              + COERCE_FLOAT(*(_DWORD *)(a1 + 60) & _xmm))
                      - 1.0) & _xmm) >= 0.000081380211 )
    {
      *(_BYTE *)(a1 + 65) = v8 ^ 0x10;
      goto LABEL_21;
    }
    *(_BYTE *)(a1 + 65) = v8 ^ 0x30;
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 8) - 0.0) & _xmm) < 0.000081380211
    && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 24) - 0.0) & _xmm) < 0.000081380211 )
  {
    result = 1;
    *(_BYTE *)(a1 + 64) = v2 & 0xF3 ^ 0xC;
    return result;
  }
LABEL_21:
  result = 0;
  *(_BYTE *)(a1 + 64) = v2 & 0xF3 ^ 4;
  return result;
}
