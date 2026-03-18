/*
 * XREFs of ??$IsIdentity@$00@CMILMatrix@@AEBA_NXZ @ 0x1800B38B0
 * Callers:
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180042890 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800602F0 (-GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD.c)
 *     ?UpdateScopeTransforms@CCpuClippingData@@AEAAXPEAVCVisual@@_NPEBVCMILMatrix@@@Z @ 0x1800B1F20 (-UpdateScopeTransforms@CCpuClippingData@@AEAAXPEAVCVisual@@_NPEBVCMILMatrix@@@Z.c)
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@PEAV1@_N@Z @ 0x1800B3C80 (-ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@PEAV1@_N@Z.c)
 *     ?GetBlurredWallpaperEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x1800D2EB0 (-GetBlurredWallpaperEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z.c)
 *     ?RenderNoOpLayer@CExternalLayer@@MEAAJPEAVCDrawingContext@@@Z @ 0x18024F6C0 (-RenderNoOpLayer@CExternalLayer@@MEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CMILMatrix::IsIdentity<1>(__int64 a1)
{
  char v2; // cl
  char v3; // r8
  unsigned __int32 v4; // xmm2_4
  char result; // al
  char v6; // al
  char v7; // r8
  char v8; // r10
  char v9; // r9
  int v10; // xmm0_4
  char v11; // r8
  char v12; // r8

  v2 = *(_BYTE *)(a1 + 64);
  if ( (char)(v2 << 6) >> 6 == 1 )
    return 0;
  if ( (char)(v2 << 6) >> 6 < 0 )
    return 1;
  v3 = *(_BYTE *)(a1 + 65);
  if ( (v3 & 8) == 0 && 16 * (v3 & 0xFC) != 0 )
    goto LABEL_11;
  v4 = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0];
  if ( (v3 & 8) == 0 )
  {
    if ( (char)(4 * v3) >> 6 == 1
      || ((char)(4 * v3) >> 6 >= 0
        ? (COERCE_FLOAT(COERCE_UNSIGNED_INT(
                          (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(a1 + 28) & v4) * 61440.0)
                                        + (float)(COERCE_FLOAT(*(_DWORD *)(a1 + 12) & v4) * 61440.0))
                                + COERCE_FLOAT(*(_DWORD *)(a1 + 60) & v4))
                        - 1.0) & v4) >= 0.000081380211
         ? (v8 = 0, v9 = 16)
         : (v8 = 1, v9 = -16),
           v10 = *(_DWORD *)(a1 + 44) & v4,
           *(_BYTE *)(a1 + 65) = v9 ^ (v3 ^ v9) & 0xCF,
           v6 = v8 & (COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(*(float *)&v10 * 61440.0) - 0.0) & v4) < 0.000081380211))
        : (v6 = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(*(_DWORD *)(a1 + 44) & v4) * 61440.0) - 0.0) & v4) < 0.000081380211),
          !v6
       || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 32) - 0.0) & v4) >= 0.000081380211
       || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 36) - 0.0) & v4) >= 0.000081380211) )
    {
      *(_BYTE *)(a1 + 65) = *(_BYTE *)(a1 + 65) & 0xF3 ^ 4;
      goto LABEL_11;
    }
    v3 = *(_BYTE *)(a1 + 65) & 0xF3 ^ 0xC;
    *(_BYTE *)(a1 + 65) = v3;
  }
  if ( (char)(16 * v2) >> 6 == 1 )
    goto LABEL_11;
  if ( (char)(16 * v2) >> 6 >= 0 )
  {
    if ( (char)(4 * v3) >> 6 == 1 )
      goto LABEL_33;
    if ( (char)(4 * v3) >> 6 >= 0 )
    {
      v11 = v3 & 0xCF;
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                          (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(a1 + 28) & v4) * 61440.0)
                                        + (float)(COERCE_FLOAT(*(_DWORD *)(a1 + 12) & v4) * 61440.0))
                                + COERCE_FLOAT(*(_DWORD *)(a1 + 60) & v4))
                        - 1.0) & v4) >= 0.000081380211 )
      {
        *(_BYTE *)(a1 + 65) = v11 ^ 0x10;
        *(_BYTE *)(a1 + 64) = v2 & 0xF3 ^ 4;
        goto LABEL_11;
      }
      *(_BYTE *)(a1 + 65) = v11 ^ 0x30;
    }
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 8) - 0.0) & v4) >= 0.000081380211
      || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 24) - 0.0) & v4) >= 0.000081380211 )
    {
LABEL_33:
      *(_BYTE *)(a1 + 64) = v2 & 0xF3 ^ 4;
      goto LABEL_11;
    }
    v2 = v2 & 0xF3 ^ 0xC;
    *(_BYTE *)(a1 + 64) = v2;
  }
  if ( (char)(4 * v2) >> 6 == 1 )
  {
LABEL_11:
    result = 0;
    *(_BYTE *)(a1 + 64) = (*(_BYTE *)(a1 + 64) ^ 1) & 0xFC ^ 1;
    return result;
  }
  if ( (char)(4 * v2) >> 6 >= 0 )
  {
    if ( v2 >> 6 != 1 )
    {
      if ( v2 >> 6 < 0 )
      {
        v2 = *(_BYTE *)(a1 + 64);
LABEL_20:
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)a1 - 1.0) & v4) < 0.000081380211
          && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 20) - 1.0) & v4) < 0.000081380211 )
        {
          *(_BYTE *)(a1 + 64) = v2 & 0xCF ^ 0x30;
          goto LABEL_9;
        }
        goto LABEL_21;
      }
      v7 = *(_BYTE *)(a1 + 65);
      if ( (char)(4 * v7) >> 6 != 1 )
      {
        if ( (char)(4 * v7) >> 6 >= 0 )
        {
          v12 = v7 & 0xCF;
          if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                              (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(a1 + 28) & v4) * 61440.0)
                                            + (float)(COERCE_FLOAT(*(_DWORD *)(a1 + 12) & v4) * 61440.0))
                                    + COERCE_FLOAT(*(_DWORD *)(a1 + 60) & v4))
                            - 1.0) & v4) >= 0.000081380211 )
          {
            *(_BYTE *)(a1 + 65) = v12 ^ 0x10;
            v2 = v2 & 0x3F | 0x40;
            goto LABEL_21;
          }
          *(_BYTE *)(a1 + 65) = v12 ^ 0x30;
        }
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 4) - 0.0) & v4) < 0.000081380211
          && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 16) - 0.0) & v4) < 0.000081380211 )
        {
          v2 |= 0xC0u;
          goto LABEL_20;
        }
      }
      v2 = v2 & 0x3F | 0x40;
    }
LABEL_21:
    *(_BYTE *)(a1 + 64) = v2 & 0xCF ^ 0x10;
    goto LABEL_11;
  }
LABEL_9:
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 40) - 1.0) & v4) >= 0.000081380211
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 48) - 0.0) & v4) >= 0.000081380211
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 52) - 0.0) & v4) >= 0.000081380211
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 56) - 0.0) & v4) >= 0.000081380211 )
  {
    goto LABEL_11;
  }
  result = 1;
  *(_BYTE *)(a1 + 64) = ~(~*(_BYTE *)(a1 + 64) & 0xFC);
  return result;
}
