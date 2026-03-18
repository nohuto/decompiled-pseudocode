/*
 * XREFs of ??$IsTranslate@$00@CMILMatrix@@AEBA_NXZ @ 0x18005FDD0
 * Callers:
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180042890 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800602F0 (-GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD.c)
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@PEBVCMILMatrix@@PEBV1@W4D2D1_ANTIALIAS_MODE@@W4CpuClippingScopeMode@@@Z @ 0x1800A3010 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@P.c)
 *     ?GetRootTransform@CVisual@@QEBA_NPEAVCMILMatrix@@_N1@Z @ 0x1800AFF90 (-GetRootTransform@CVisual@@QEBA_NPEAVCMILMatrix@@_N1@Z.c)
 *     ?UpdateScopeTransforms@CCpuClippingData@@AEAAXPEAVCVisual@@_NPEBVCMILMatrix@@@Z @ 0x1800B1F20 (-UpdateScopeTransforms@CCpuClippingData@@AEAAXPEAVCVisual@@_NPEBVCMILMatrix@@@Z.c)
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@PEAV1@_N@Z @ 0x1800B3C80 (-ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@PEAV1@_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CMILMatrix::IsTranslate<1>(__int64 a1)
{
  char v1; // r8
  unsigned __int32 v2; // xmm2_4
  char v3; // dl
  char v5; // al
  char v6; // dl
  char v7; // r9
  char v8; // dl
  int v9; // xmm0_4
  char v10; // r8
  char v11; // dl

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
         ? (v7 = 0, v8 = 16)
         : (v7 = 1, v8 = -16),
           v9 = *(_DWORD *)(a1 + 44) & v2,
           *(_BYTE *)(a1 + 65) = v8 ^ (v1 ^ v8) & 0xCF,
           v5 = v7 & (COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(*(float *)&v9 * 61440.0) - 0.0) & v2) < 0.000081380211))
        : (v5 = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(*(_DWORD *)(a1 + 44) & v2) * 61440.0) - 0.0) & v2) < 0.000081380211),
          !v5
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
  if ( (char)(16 * v3) >> 6 < 0 )
  {
LABEL_5:
    if ( (char)(4 * v3) >> 6 != 1 )
    {
      if ( (char)(4 * v3) >> 6 < 0 )
        return COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 40) - 1.0) & v2) < 0.000081380211;
      if ( v3 >> 6 == 1 )
        goto LABEL_9;
      if ( v3 >> 6 < 0 )
      {
        v3 = *(_BYTE *)(a1 + 64);
LABEL_14:
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)a1 - 1.0) & v2) < 0.000081380211
          && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 20) - 1.0) & v2) < 0.000081380211 )
        {
          *(_BYTE *)(a1 + 64) = v3 & 0xCF ^ 0x30;
          return COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 40) - 1.0) & v2) < 0.000081380211;
        }
        goto LABEL_9;
      }
      v6 = *(_BYTE *)(a1 + 65);
      if ( (char)(4 * v6) >> 6 != 1 )
      {
        if ( (char)(4 * v6) >> 6 >= 0 )
        {
          v11 = v6 & 0xCF;
          if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                              (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(a1 + 28) & v2) * 61440.0)
                                            + (float)(COERCE_FLOAT(*(_DWORD *)(a1 + 12) & v2) * 61440.0))
                                    + COERCE_FLOAT(*(_DWORD *)(a1 + 60) & v2))
                            - 1.0) & v2) >= 0.000081380211 )
          {
            *(_BYTE *)(a1 + 65) = v11 ^ 0x10;
            v3 = *(_BYTE *)(a1 + 64) & 0x3F | 0x40;
            goto LABEL_9;
          }
          *(_BYTE *)(a1 + 65) = v11 ^ 0x30;
        }
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 4) - 0.0) & v2) < 0.000081380211
          && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 16) - 0.0) & v2) < 0.000081380211 )
        {
          v3 = *(_BYTE *)(a1 + 64) | 0xC0;
          goto LABEL_14;
        }
      }
      v3 = *(_BYTE *)(a1 + 64) & 0x3F | 0x40;
LABEL_9:
      *(_BYTE *)(a1 + 64) = v3 & 0xCF ^ 0x10;
    }
    return 0;
  }
  if ( (char)(4 * v1) >> 6 == 1 )
    goto LABEL_26;
  if ( (char)(4 * v1) >> 6 < 0 )
  {
LABEL_25:
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 8) - 0.0) & v2) < 0.000081380211
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 24) - 0.0) & v2) < 0.000081380211 )
    {
      v3 = v3 & 0xF3 ^ 0xC;
      *(_BYTE *)(a1 + 64) = v3;
      goto LABEL_5;
    }
LABEL_26:
    *(_BYTE *)(a1 + 64) = v3 & 0xF3 ^ 4;
    return 0;
  }
  v10 = v1 & 0xCF;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                      (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(a1 + 28) & v2) * 61440.0)
                                    + (float)(COERCE_FLOAT(*(_DWORD *)(a1 + 12) & v2) * 61440.0))
                            + COERCE_FLOAT(*(_DWORD *)(a1 + 60) & v2))
                    - 1.0) & v2) < 0.000081380211 )
  {
    *(_BYTE *)(a1 + 65) = v10 ^ 0x30;
    goto LABEL_25;
  }
  *(_BYTE *)(a1 + 65) = v10 ^ 0x10;
  *(_BYTE *)(a1 + 64) = v3 & 0xF3 ^ 4;
  return 0;
}
