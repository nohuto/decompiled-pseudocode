/*
 * XREFs of ?CalcNodeWorldBounds@COcclusionContext@@AEBA_NPEBVCVisual@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180028F30
 * Callers:
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180088B00 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x180029120 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

char __fastcall COcclusionContext::CalcNodeWorldBounds(__m128 **a1, __int64 a2, __m128 *a3)
{
  __m128 *v5; // rax
  unsigned int v6; // eax
  int v7; // eax
  char *v8; // rcx
  __m128 v9; // xmm0
  float v10; // xmm1_4
  bool v11; // cc
  float v12; // xmm3_4
  float v13; // xmm2_4
  int v14; // eax
  __m128 v15; // xmm5
  float v16; // xmm6_4
  float v17; // xmm4_4
  float v18; // xmm2_4
  float v19; // xmm0_4
  float v20; // xmm1_4
  __m128 v21; // xmm0
  __m128 v22; // xmm0
  __m128 v23; // xmm0
  char result; // al
  __m128 v25; // [rsp+20h] [rbp-58h] BYREF
  __int64 v26; // [rsp+30h] [rbp-48h]
  __m128 v27; // [rsp+38h] [rbp-40h] BYREF
  unsigned __int64 v28; // [rsp+48h] [rbp-30h]

  if ( a2 == (*a1)[4].m128_u64[1] )
    v5 = *a1 + 5;
  else
    v5 = (__m128 *)(a2 + 148);
  v27 = *v5;
  v28 = v5[1].m128_u64[0];
  v6 = _mm_shuffle_ps((__m128)v28, (__m128)v28, 85).m128_f32[0] <= *(float *)&v28;
  if ( _mm_shuffle_ps(v27, v27, 170).m128_f32[0] <= v27.m128_f32[0] )
    ++v6;
  if ( _mm_shuffle_ps(v27, v27, 255).m128_f32[0] <= _mm_shuffle_ps(v27, v27, 85).m128_f32[0] )
    ++v6;
  if ( v6 <= 1 )
  {
    v7 = *((_DWORD *)a1 + 8);
    v26 = 0LL;
    v25 = 0LL;
    v8 = v7 ? (char *)a1[3] + 68 * (unsigned int)(v7 - 1) : (char *)&CMILMatrix::Identity;
    CMILMatrix::Transform3DBoundsHelper<1>(v8, &v27, &v25);
    v9 = v25;
    v10 = _mm_shuffle_ps(v25, v25, 170).m128_f32[0];
    v11 = v10 <= v25.m128_f32[0];
    *a3 = v25;
    if ( !v11 )
    {
      v12 = a3->m128_f32[3];
      v13 = a3->m128_f32[1];
      if ( v12 > v13 )
      {
        v14 = *((_DWORD *)a1 + 32);
        if ( v14 )
        {
          v25 = a1[15][v14 - 1];
          v15 = v25;
          if ( v9.m128_f32[0] > v25.m128_f32[0] )
            v15 = v9;
          v16 = v25.m128_f32[1];
          v17 = v25.m128_f32[1];
          if ( v13 > v25.m128_f32[1] )
          {
            v16 = v13;
            v17 = v13;
          }
          v18 = v25.m128_f32[2];
          v19 = v25.m128_f32[2];
          if ( v25.m128_f32[2] > v10 )
          {
            v18 = v10;
            v19 = v10;
          }
          v20 = v25.m128_f32[3];
          if ( v25.m128_f32[3] > v12 )
            v20 = v12;
          if ( v19 <= v15.m128_f32[0] || v20 <= v17 )
          {
            v18 = 0.0;
            v16 = 0.0;
            v15 = 0LL;
            v20 = 0.0;
          }
          v21 = _mm_shuffle_ps(v15, v15, 225);
          v21.m128_f32[0] = v16;
          v22 = _mm_shuffle_ps(v21, v21, 198);
          v22.m128_f32[0] = v18;
          v23 = _mm_shuffle_ps(v22, v22, 39);
          v23.m128_f32[0] = v20;
          v9 = _mm_shuffle_ps(v23, v23, 57);
        }
        *a3 = v9;
        if ( a3->m128_f32[2] > a3->m128_f32[0] && a3->m128_f32[3] > a3->m128_f32[1] )
          return 1;
      }
    }
  }
  a3->m128_u64[1] = 0LL;
  result = 0;
  a3->m128_u64[0] = 0LL;
  return result;
}
