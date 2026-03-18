/*
 * XREFs of ?InitializeMegaRectVisibleRegion@CMegaRectBatchCommand@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180174500
 * Callers:
 *     ?Render@CDrawListEntry@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x18006E21C (-Render@CDrawListEntry@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall CMegaRectBatchCommand::InitializeMegaRectVisibleRegion(__int64 a1, float *a2)
{
  _DWORD *result; // rax
  float *v3; // r8
  float v4; // xmm0_4
  float v5; // xmm10_4
  float v6; // xmm11_4
  float v7; // xmm3_4
  float v8; // xmm7_4
  float v9; // xmm1_4
  float v10; // xmm11_4
  __m128 v11; // xmm0
  __m128 v12; // xmm1
  __m128i v13; // xmm2
  int v14; // r9d
  int v15; // r10d
  int v16; // eax
  int v17; // r11d
  _DWORD *v18; // rdx
  __m128 v19; // [rsp+0h] [rbp-78h]

  result = *(_DWORD **)(a1 + 8);
  v3 = (float *)*((_QWORD *)result + 2);
  v4 = v3[14];
  v5 = (float)((float)(v3[15] * *(float *)(a1 + 32)) + (float)(v4 * *(float *)(a1 + 16))) + *(float *)(a1 + 64);
  v6 = (float)((float)(v3[15] * *(float *)(a1 + 36)) + (float)(v4 * *(float *)(a1 + 20))) + *(float *)(a1 + 68);
  v7 = (float)((float)(v3[17] * *(float *)(a1 + 32)) + (float)(v3[16] * *(float *)(a1 + 16))) + *(float *)(a1 + 64);
  v8 = (float)((float)(v3[17] * *(float *)(a1 + 36)) + (float)(v3[16] * *(float *)(a1 + 20))) + *(float *)(a1 + 68);
  v9 = fmaxf(fminf(v6, v8), a2[1]);
  v10 = fminf(fmaxf(v6, v8), a2[3]);
  v19.m128_u64[0] = __PAIR64__(LODWORD(v9), COERCE_UNSIGNED_INT(fmaxf(fminf(v5, v7), *a2)));
  v19.m128_u64[1] = __PAIR64__(LODWORD(v10), COERCE_UNSIGNED_INT(fminf(fmaxf(v5, v7), a2[2])));
  if ( v19.m128_f32[2] > v19.m128_f32[0] && v10 > v9 )
  {
    v11 = _mm_mul_ps(_mm_add_ps(v19, g_halfFixedPointForRounding), (__m128)_xmm);
    v12 = _mm_cmplt_ps(DirectX::g_XMMaxInt, v11);
    v13 = (__m128i)_mm_or_ps(_mm_andnot_ps(v12, (__m128)_mm_cvttps_epi32(v11)), _mm_and_ps(v12, DirectX::g_XMAbsMask));
    v14 = _mm_cvtsi128_si32(v13);
    v15 = _mm_cvtsi128_si32(_mm_srli_si128(v13, 8));
    if ( v14 >= v15
      || (v16 = _mm_cvtsi128_si32(_mm_srli_si128(v13, 4)), v17 = _mm_cvtsi128_si32(_mm_srli_si128(v13, 12)), v16 >= v17) )
    {
      result = *(_DWORD **)(a1 + 96);
      *result = 0;
    }
    else
    {
      v18 = *(_DWORD **)(a1 + 96);
      v18[3] = v16;
      *v18 = 2;
      v18[1] = v14;
      v18[2] = v15;
      v18[4] = 16;
      result = v18 + 5;
      v18[7] = v14;
      v18[8] = v15;
      v18[5] = v17;
      v18[6] = 16;
    }
  }
  return result;
}
