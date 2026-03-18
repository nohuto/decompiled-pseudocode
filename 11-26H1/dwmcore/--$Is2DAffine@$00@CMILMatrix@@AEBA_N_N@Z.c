/*
 * XREFs of ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x180014280
 * Callers:
 *     TryFillRenderState @ 0x1800139C4 (TryFillRenderState.c)
 *     ?GetD2DGeometry@CPolygonShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180013B50 (-GetD2DGeometry@CPolygonShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?TransformGeometry@CTransformedGeometryHelper@@SAJPEBVCMILMatrix@@PEAUID2D1Geometry@@PEAPEAU3@@Z @ 0x180013CC0 (-TransformGeometry@CTransformedGeometryHelper@@SAJPEBVCMILMatrix@@PEAUID2D1Geometry@@PEAPEAU3@@Z.c)
 *     _anonymous_namespace_::DecomposeMatrix @ 0x180014474 (_anonymous_namespace_--DecomposeMatrix.c)
 *     ?GetD2DGeometry@CPathSegmentsShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x1800505E0 (-GetD2DGeometry@CPathSegmentsShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?GetD2DGeometry@CRoundedRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180050A30 (-GetD2DGeometry@CRoundedRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?AffectsVisual@CSpotLight@@UEAA_NPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x180281E60 (-AffectsVisual@CSpotLight@@UEAA_NPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CMILMatrix::Is2DAffine<1>(__int64 a1, char a2)
{
  char v2; // r8
  char result; // al
  __int32 v5; // xmm2_4
  char v6; // cl
  unsigned __int32 v7; // xmm2_4
  char v8; // al
  char v9; // cl
  char v10; // al
  int v11; // xmm0_4

  v2 = *(_BYTE *)(a1 + 65);
  if ( a2 )
  {
    if ( (char)(4 * (v2 & 0xF0)) <= 0 )
    {
      if ( (v2 & 0x20) != 0 )
        return 1;
      COERCE_FLOAT(v5 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                          (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(a1 + 28) & v5) * 61440.0)
                                        + (float)(COERCE_FLOAT(*(_DWORD *)(a1 + 12) & v5) * 61440.0))
                                + COERCE_FLOAT(*(_DWORD *)(a1 + 60) & v5))
                        - 1.0) & v5) < 0.000081380211 )
      {
        result = 1;
        v6 = -16;
      }
      else
      {
        result = 0;
        v6 = 16;
      }
      *(_BYTE *)(a1 + 65) = v6 ^ (v6 ^ v2) & 0xCF;
      return result;
    }
    return 0;
  }
  if ( (char)(16 * (v2 & 0xFC)) > 0 )
    return 0;
  if ( (v2 & 8) != 0 )
    return 1;
  if ( (char)(4 * v2) >> 6 == 1
    || ((v7 = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0], (char)(4 * v2) >> 6 >= 0)
      ? (COERCE_FLOAT(COERCE_UNSIGNED_INT(
                        (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(a1 + 28) & v7) * 61440.0)
                                      + (float)(COERCE_FLOAT(*(_DWORD *)(a1 + 12) & v7) * 61440.0))
                              + COERCE_FLOAT(*(_DWORD *)(a1 + 60) & v7))
                      - 1.0) & v7) >= 0.000081380211
       ? (v9 = 0, v10 = 16)
       : (v9 = 1, v10 = -16),
         v11 = *(_DWORD *)(a1 + 44) & v7,
         *(_BYTE *)(a1 + 65) = v10 ^ (v10 ^ v2) & 0xCF,
         v8 = v9 & (COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(*(float *)&v11 * 61440.0) - 0.0) & v7) < 0.000081380211))
      : (v8 = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(*(_DWORD *)(a1 + 44) & v7) * 61440.0) - 0.0) & v7) < 0.000081380211),
        !v8
     || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 32) - 0.0) & v7) >= 0.000081380211
     || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 36) - 0.0) & v7) >= 0.000081380211) )
  {
    result = 0;
    *(_BYTE *)(a1 + 65) = (*(_BYTE *)(a1 + 65) ^ 4) & 0xF3 ^ 4;
  }
  else
  {
    result = 1;
    *(_BYTE *)(a1 + 65) = (*(_BYTE *)(a1 + 65) ^ 0xFC) & 0xF3 ^ 0xFC;
  }
  return result;
}
