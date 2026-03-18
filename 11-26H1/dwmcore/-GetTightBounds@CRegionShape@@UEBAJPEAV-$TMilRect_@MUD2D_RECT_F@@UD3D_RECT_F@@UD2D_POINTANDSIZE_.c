/*
 * XREFs of ?GetTightBounds@CRegionShape@@UEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800F18E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUD2D_RECT_F@@QEAUD2D_POINT_2F@@@Z @ 0x1800757E0 (-Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUD2D_RECT_F@@QEAUD2D_POINT_2F@@@Z.c)
 *     ??$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800B1E20 (--$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x1800F2210 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

__int64 __fastcall CRegionShape::GetTightBounds(__int64 a1, __int64 a2, __int64 a3)
{
  int *v4; // rdx
  __int64 v5; // rax
  __m128i v6; // xmm2
  __m128i v7; // xmm3
  __m128i v8; // xmm1
  __int64 result; // rax
  float *v10; // r10
  __int64 v11; // r11
  float v12; // xmm0_4
  CMILMatrix *v13; // rcx
  struct D2D_RECT_F *v14; // r10
  float *v15; // r11
  float top; // xmm2_4
  float v17; // xmm4_4
  float v18; // xmm2_4
  float v19; // xmm3_4
  float v20; // xmm1_4
  __int32 v21; // xmm2_4
  FLOAT *v22; // r10
  float x; // xmm0_4
  unsigned __int64 v24; // rax
  float y; // xmm1_4
  float v26; // xmm2_4
  float v27; // xmm3_4
  struct D2D_POINT_2F v28[4]; // [rsp+20h] [rbp-38h] BYREF

  v4 = *(int **)(a1 + 16);
  v5 = *v4;
  if ( !(_DWORD)v5 )
  {
    result = 0LL;
    *(_QWORD *)(a2 + 8) = 0LL;
    *(_QWORD *)a2 = 0LL;
    return result;
  }
  v6 = _mm_cvtsi32_si128(v4[3]);
  v7 = _mm_cvtsi32_si128(v4[2]);
  v8 = _mm_cvtsi32_si128(v4[2 * v5 + 1]);
  *(float *)a2 = (float)v4[1];
  *(_DWORD *)(a2 + 4) = _mm_cvtepi32_ps(v6).m128_u32[0];
  *(_DWORD *)(a2 + 8) = _mm_cvtepi32_ps(v7).m128_u32[0];
  *(_DWORD *)(a2 + 12) = _mm_cvtepi32_ps(v8).m128_u32[0];
  if ( !a3 || (unsigned __int8)CMILMatrix::IsIdentity<0>(a3) )
    return 0LL;
  if ( (char)(4 * *(_BYTE *)(v11 + 64)) >> 6 != 1 )
  {
    if ( (char)(4 * *(_BYTE *)(v11 + 64)) >> 6 < 0 )
    {
LABEL_9:
      *v10 = *v10 + *(float *)(v11 + 48);
      v12 = v10[2];
      v10[1] = *(float *)(v11 + 52) + v10[1];
      v10[2] = v12 + *(float *)(v11 + 48);
      v10[3] = *(float *)(v11 + 52) + v10[3];
      return 0LL;
    }
    if ( CMILMatrix::IsTranslateAndScaleIgnoreZ<1>(v11) )
    {
      COERCE_FLOAT(v21 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)v11 - 1.0) & v21) < 0.000081380211
        && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v11 + 20) - 1.0) & v21) < 0.000081380211 )
      {
        *(_BYTE *)(v11 + 64) = *(_BYTE *)(v11 + 64) & 0xCF ^ 0x30;
        goto LABEL_9;
      }
    }
    *(_BYTE *)(v11 + 64) = *(_BYTE *)(v11 + 64) & 0xCF ^ 0x10;
  }
  if ( !CMILMatrix::IsTranslateAndScaleIgnoreZ<1>(v11) )
  {
    CMILMatrix::Transform2DRectToPerspective(v13, v14, v28);
    x = v28[0].x;
    v24 = 1LL;
    y = v28[0].y;
    v26 = v28[0].x;
    *v22 = v28[0].x;
    v27 = y;
    v22[1] = y;
    v22[2] = v26;
    v22[3] = y;
    do
    {
      x = fminf(x, v28[v24].x);
      *v22 = x;
      y = fminf(y, v28[v24].y);
      v22[1] = y;
      v26 = fmaxf(v26, v28[v24].x);
      v22[2] = v26;
      v27 = fmaxf(v27, v28[v24++].y);
      v22[3] = v27;
    }
    while ( v24 < 4 );
    return 0LL;
  }
  top = v14->top;
  v17 = (float)(v14->left * *v15) + v15[12];
  v14->left = v17;
  v18 = (float)(top * v15[5]) + v15[13];
  v14->top = v18;
  v19 = (float)(*v15 * v14->right) + v15[12];
  v14->right = v19;
  v20 = (float)(v15[5] * v14->bottom) + v15[13];
  v14->bottom = v20;
  if ( *v15 > 0.0 && v15[5] > 0.0 )
    return 0LL;
  if ( v17 > v19 )
  {
    v14->left = v19;
    v14->right = v17;
  }
  result = 0LL;
  if ( v18 > v20 )
  {
    v14->top = v20;
    v14->bottom = v18;
  }
  return result;
}
