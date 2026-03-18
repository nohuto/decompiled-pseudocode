/*
 * XREFs of ?InitializeForRendering@CBatchCommand@@QEAAXPEAVCDrawListEntry@@W4Enum@BlendMode@@MAEBVCMILMatrix@@_N@Z @ 0x1800C4BB0
 * Callers:
 *     ?Render@CDrawListEntry@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x18006E21C (-Render@CDrawListEntry@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 *     ?ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContext@@IPEAV?$list@USinkRenderCommand@CCpuClipAntialiasSinkContext@@V?$allocator@USinkRenderCommand@CCpuClipAntialiasSinkContext@@@std@@@std@@PEBV?$vector_facade@UBounds@CCpuClipAntialiasSink@@V?$buffer_impl@UBounds@CCpuClipAntialiasSink@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1800C0E10 (-ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContex.c)
 *     ?FlushDrawList@CCpuClipAntialiasSinkContext@@QEAAJPEAVCDrawingContext@@I@Z @ 0x1800C1C44 (-FlushDrawList@CCpuClipAntialiasSinkContext@@QEAAJPEAVCDrawingContext@@I@Z.c)
 *     ?PopCpuClipFromScope@CScopedClipStack@@QEAAXPEAVCDrawingContext@@PEA_N@Z @ 0x1800C2D20 (-PopCpuClipFromScope@CScopedClipStack@@QEAAXPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?PopCpuClip@CDrawingContext@@AEAAXXZ @ 0x1800C3820 (-PopCpuClip@CDrawingContext@@AEAAXXZ.c)
 * Callees:
 *     ??$Is90Or270RotationWithTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x180011FD0 (--$Is90Or270RotationWithTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBatchCommand::InitializeForRendering(__int64 a1, _BYTE *a2, int a3, float a4, __int64 a5, char a6)
{
  int v9; // ebx
  __int64 result; // rax
  char v12; // cl
  char v13; // al
  int v14; // ebx
  float v15; // xmm1_4
  float v16; // xmm3_4
  float v17; // xmm4_4
  float v18; // xmm2_4
  float v19; // xmm5_4
  float v20; // xmm9_4
  __m128 v21; // xmm0
  __m128 v22; // xmm1
  __m128 v23; // xmm0
  __m128 v24; // xmm1
  __m128 v25; // xmm1
  __m128 v26; // xmm1
  float v27; // xmm2_4
  float v28; // xmm3_4
  float v29; // xmm4_4
  float v30; // xmm1_4
  char v31; // dl
  char v32; // dl
  float v33; // xmm2_4
  float v34; // xmm3_4
  float v35; // xmm4_4
  float v36; // xmm1_4
  unsigned __int64 v37; // [rsp+28h] [rbp-59h]
  __int128 v38; // [rsp+28h] [rbp-59h]
  __int128 v39; // [rsp+28h] [rbp-59h]
  __m256i v40; // [rsp+38h] [rbp-49h]
  __m256i v41; // [rsp+38h] [rbp-49h]
  __m256i v42; // [rsp+38h] [rbp-49h]
  __m128 v43; // [rsp+58h] [rbp-29h]
  _BYTE v44[20]; // [rsp+58h] [rbp-29h]
  _BYTE v45[20]; // [rsp+58h] [rbp-29h]

  v9 = 1;
  if ( (a2[64] & 2) != 0 )
  {
    v12 = *(_BYTE *)(a5 + 64);
    if ( v12 >> 6 == 1 )
      goto LABEL_50;
    if ( v12 >> 6 < 0 )
      goto LABEL_8;
    v31 = *(_BYTE *)(a5 + 65);
    if ( (char)(4 * v31) >> 6 != 1 )
    {
      if ( (char)(4 * v31) >> 6 < 0 )
      {
LABEL_48:
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a5 + 4) - 0.0) & _xmm) < 0.000081380211
          && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a5 + 16) - 0.0) & _xmm) < 0.000081380211 )
        {
          *(_BYTE *)(a5 + 64) = v12 | 0xC0;
          goto LABEL_8;
        }
        goto LABEL_49;
      }
      v32 = v31 & 0xCF;
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                          (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(a5 + 28) & _xmm) * 61440.0)
                                        + (float)(COERCE_FLOAT(*(_DWORD *)(a5 + 12) & _xmm) * 61440.0))
                                + COERCE_FLOAT(*(_DWORD *)(a5 + 60) & _xmm))
                        - 1.0) & _xmm) < 0.000081380211 )
      {
        *(_BYTE *)(a5 + 65) = v32 ^ 0x30;
        goto LABEL_48;
      }
      *(_BYTE *)(a5 + 65) = v32 ^ 0x10;
    }
LABEL_49:
    *(_BYTE *)(a5 + 64) = v12 & 0x3F | 0x40;
LABEL_50:
    v13 = CMILMatrix::Is90Or270RotationWithTranslateAndScaleIgnoreZ<1>(a5);
    if ( !v13 )
    {
LABEL_9:
      v9 = 4;
      if ( !v13 )
        v9 = 1;
      goto LABEL_11;
    }
LABEL_8:
    v13 = 1;
    goto LABEL_9;
  }
  if ( (*(unsigned int (__fastcall **)(_BYTE *))(*(_QWORD *)a2 + 32LL))(a2) == 2 )
  {
LABEL_3:
    *(_DWORD *)a1 = 5;
    *(_QWORD *)(a1 + 8) = a2;
    (**(void (__fastcall ***)(_BYTE *))a2)(a2);
    if ( a6 )
    {
      v33 = *(float *)a5;
      v34 = *(float *)(a5 + 4);
      v35 = *(float *)(a5 + 16);
      v36 = *(float *)(a5 + 20);
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(COERCE_FLOAT(*(_DWORD *)a5 & _xmm) - 1.0) & _xmm) >= 0.000081380211 )
      {
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(COERCE_FLOAT(LODWORD(v34) & _xmm) - 1.0) & _xmm) < 0.000081380211 )
        {
          v33 = 0.0;
          if ( v34 > 0.0 )
            v34 = FLOAT_1_0;
          else
            v34 = FLOAT_N1_0;
        }
      }
      else
      {
        if ( v33 <= 0.0 )
          v33 = FLOAT_N1_0;
        else
          v33 = FLOAT_1_0;
        v34 = 0.0;
      }
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(COERCE_FLOAT(LODWORD(v36) & _xmm) - 1.0) & _xmm) >= 0.000081380211 )
      {
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(COERCE_FLOAT(LODWORD(v35) & _xmm) - 1.0) & _xmm) < 0.000081380211 )
        {
          if ( v35 <= 0.0 )
            v35 = FLOAT_N1_0;
          else
            v35 = FLOAT_1_0;
          v36 = 0.0;
        }
      }
      else
      {
        v35 = 0.0;
        if ( v36 <= 0.0 )
          v36 = FLOAT_N1_0;
        else
          v36 = FLOAT_1_0;
      }
      *(_QWORD *)&v44[12] = 0x28083F800000LL;
      v38 = __PAIR64__(LODWORD(v34), LODWORD(v33));
      v41.m256i_i64[0] = __PAIR64__(LODWORD(v36), LODWORD(v35));
      *(_DWORD *)v44 = *(_DWORD *)(a5 + 48);
      *(_QWORD *)&v44[4] = *(unsigned int *)(a5 + 52);
      *(_OWORD *)&v41.m256i_u64[1] = 0LL;
      v41.m256i_i64[3] = 1065353216LL;
    }
    else
    {
      *(_DWORD *)&v44[16] = *(_DWORD *)(a5 + 64);
      v38 = *(_OWORD *)a5;
      v41 = *(__m256i *)(a5 + 16);
      *(_OWORD *)v44 = *(_OWORD *)(a5 + 48);
    }
    *(float *)(a1 + 88) = a4;
    *(_DWORD *)(a1 + 84) = a3;
    *(_BYTE *)(a1 + 92) = a6;
    *(_OWORD *)(a1 + 16) = v38;
    *(__m256i *)(a1 + 32) = v41;
    result = *(unsigned int *)&v44[16];
    *(_OWORD *)(a1 + 64) = *(_OWORD *)v44;
    *(_DWORD *)(a1 + 80) = *(_DWORD *)&v44[16];
    *(_DWORD *)(a1 + 176) = 0;
    return result;
  }
LABEL_11:
  v14 = v9 - 4;
  if ( v14 )
  {
    if ( v14 == 1 )
      goto LABEL_3;
    *(_DWORD *)a1 = 1;
    *(_QWORD *)(a1 + 8) = a2;
    (**(void (__fastcall ***)(_BYTE *))a2)(a2);
    if ( a6 )
    {
      v27 = *(float *)a5;
      v28 = *(float *)(a5 + 4);
      v29 = *(float *)(a5 + 16);
      v30 = *(float *)(a5 + 20);
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(COERCE_FLOAT(*(_DWORD *)a5 & _xmm) - 1.0) & _xmm) >= 0.000081380211 )
      {
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(COERCE_FLOAT(LODWORD(v28) & _xmm) - 1.0) & _xmm) < 0.000081380211 )
        {
          v27 = 0.0;
          if ( v28 > 0.0 )
            v28 = FLOAT_1_0;
          else
            v28 = FLOAT_N1_0;
        }
      }
      else
      {
        if ( v27 <= 0.0 )
          v27 = FLOAT_N1_0;
        else
          v27 = FLOAT_1_0;
        v28 = 0.0;
      }
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(COERCE_FLOAT(LODWORD(v30) & _xmm) - 1.0) & _xmm) >= 0.000081380211 )
      {
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(COERCE_FLOAT(LODWORD(v29) & _xmm) - 1.0) & _xmm) < 0.000081380211 )
        {
          if ( v29 <= 0.0 )
            v29 = FLOAT_N1_0;
          else
            v29 = FLOAT_1_0;
          v30 = 0.0;
        }
      }
      else
      {
        v29 = 0.0;
        if ( v30 <= 0.0 )
          v30 = FLOAT_N1_0;
        else
          v30 = FLOAT_1_0;
      }
      *(_QWORD *)&v45[12] = 0x28083F800000LL;
      v39 = __PAIR64__(LODWORD(v28), LODWORD(v27));
      v42.m256i_i64[0] = __PAIR64__(LODWORD(v30), LODWORD(v29));
      *(_DWORD *)v45 = *(_DWORD *)(a5 + 48);
      *(_QWORD *)&v45[4] = *(unsigned int *)(a5 + 52);
      *(_OWORD *)&v42.m256i_u64[1] = 0LL;
      v42.m256i_i64[3] = 1065353216LL;
    }
    else
    {
      *(_DWORD *)&v45[16] = *(_DWORD *)(a5 + 64);
      v39 = *(_OWORD *)a5;
      v42 = *(__m256i *)(a5 + 16);
      *(_OWORD *)v45 = *(_OWORD *)(a5 + 48);
    }
    *(float *)(a1 + 88) = a4;
    *(_DWORD *)(a1 + 84) = a3;
    *(_BYTE *)(a1 + 92) = a6;
    *(_OWORD *)(a1 + 16) = v39;
    *(__m256i *)(a1 + 32) = v42;
    result = *(unsigned int *)&v45[16];
    *(_OWORD *)(a1 + 64) = *(_OWORD *)v45;
    *(_DWORD *)(a1 + 80) = *(_DWORD *)&v45[16];
  }
  else
  {
    *(_DWORD *)a1 = 4;
    *(_QWORD *)(a1 + 8) = a2;
    (**(void (__fastcall ***)(_BYTE *))a2)(a2);
    v15 = *(float *)a5;
    v16 = *(float *)(a5 + 4);
    v17 = *(float *)(a5 + 16);
    v18 = *(float *)(a5 + 20);
    v19 = *(float *)(a5 + 48);
    v20 = *(float *)(a5 + 52);
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(COERCE_FLOAT(*(_DWORD *)a5 & _xmm) - 1.0) & _xmm) >= 0.000081380211 )
    {
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(COERCE_FLOAT(LODWORD(v16) & _xmm) - 1.0) & _xmm) < 0.000081380211 )
      {
        v15 = 0.0;
        if ( v16 > 0.0 )
          v16 = FLOAT_1_0;
        else
          v16 = FLOAT_N1_0;
      }
    }
    else
    {
      if ( v15 <= 0.0 )
        v15 = FLOAT_N1_0;
      else
        v15 = FLOAT_1_0;
      v16 = 0.0;
    }
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(COERCE_FLOAT(LODWORD(v18) & _xmm) - 1.0) & _xmm) >= 0.000081380211 )
    {
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(COERCE_FLOAT(LODWORD(v17) & _xmm) - 1.0) & _xmm) < 0.000081380211 )
      {
        if ( v17 <= 0.0 )
          v17 = FLOAT_N1_0;
        else
          v17 = FLOAT_1_0;
        v18 = 0.0;
      }
    }
    else
    {
      v17 = 0.0;
      if ( v18 <= 0.0 )
        v18 = FLOAT_N1_0;
      else
        v18 = FLOAT_1_0;
    }
    *(_OWORD *)&v40.m256i_u64[1] = 0LL;
    v21 = (__m128)v37;
    *(_DWORD *)(a1 + 84) = a3;
    *(float *)(a1 + 88) = a4;
    v21.m128_f32[0] = v15;
    v22 = *(__m128 *)v40.m256i_i8;
    v43.m128_u64[1] = 0x3F80000000000000LL;
    v23 = _mm_shuffle_ps(v21, v21, 225);
    v22.m128_f32[0] = v17;
    v40.m256i_i64[3] = 1065353216LL;
    v24 = _mm_shuffle_ps(v22, v22, 225);
    v23.m128_f32[0] = v16;
    v24.m128_f32[0] = v18;
    *(__m128 *)(a1 + 16) = _mm_shuffle_ps(v23, v23, 225);
    *(__m128 *)(a1 + 32) = _mm_shuffle_ps(v24, v24, 225);
    v25 = v43;
    *(_OWORD *)(a1 + 48) = *(_OWORD *)&v40.m256i_u64[2];
    v25.m128_f32[0] = v19;
    v26 = _mm_shuffle_ps(v25, v25, 225);
    v26.m128_f32[0] = v20;
    *(__m128 *)(a1 + 64) = _mm_shuffle_ps(v26, v26, 225);
    *(_DWORD *)(a1 + 80) = 10248;
    *(_BYTE *)(a1 + 92) = a6;
    result = a1 + 104;
    *(_QWORD *)(a1 + 96) = a1 + 104;
    *(_DWORD *)(a1 + 104) = 0;
  }
  return result;
}
