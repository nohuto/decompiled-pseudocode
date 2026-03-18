/*
 * XREFs of VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x18006587C
 * Callers:
 *     ?EmitGeometry_TransferVertices@CRenderingBatchCommand@@KAXPEBUD2D_POINT_2F@@AEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@$$CBUVertexAAFixup_UVxN@@@@_K_NAEBVCMILMatrix@@54MAEBV?$StridedSpan@E@@4@Z @ 0x180065020 (-EmitGeometry_TransferVertices@CRenderingBatchCommand@@KAXPEBUD2D_POINT_2F@@AEBV-$StridedSpan@$$.c)
 *     ?EmitGeometry@CWarpRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand@@@Z @ 0x180066020 (-EmitGeometry@CWarpRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchComma.c)
 *     ?EmitGeometry@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand@@@Z @ 0x18011B180 (-EmitGeometry@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchComm.c)
 * Callees:
 *     ?ComputeAdjointIgnoreZ@CMILMatrix@@SA?AV1@AEBV1@@Z @ 0x18011E240 (-ComputeAdjointIgnoreZ@CMILMatrix@@SA-AV1@AEBV1@@Z.c)
 *     sqrtf_0 @ 0x1802B978C (sqrtf_0.c)
 */

__int64 __fastcall VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // r8
  unsigned int v5; // r13d
  unsigned int v6; // r15d
  __int128 v7; // xmm1
  __int64 result; // rax
  unsigned __int32 v9; // xmm10_4
  char v10; // r12
  __m128 v11; // xmm13
  float v12; // xmm4_4
  float v13; // xmm5_4
  __m128 v14; // xmm14
  char v15; // di
  float v16; // xmm3_4
  float v17; // xmm2_4
  __int64 v18; // r14
  float *v19; // rsi
  float v20; // xmm6_4
  float v21; // xmm9_4
  float v22; // xmm2_4
  float v23; // xmm1_4
  float v24; // xmm3_4
  float v25; // xmm8_4
  float v26; // xmm8_4
  float v27; // xmm1_4
  float v28; // xmm6_4
  float v29; // xmm9_4
  float v30; // xmm0_4
  float v31; // xmm3_4
  float v32; // xmm6_4
  float v33; // xmm9_4
  __m128 v34; // xmm4
  __m128 v35; // xmm2
  float v36; // xmm6_4
  float v37; // xmm1_4
  __m128 v38; // xmm5
  __m128 v39; // xmm6
  float v40; // xmm2_4
  float v41; // xmm1_4
  __int64 v42; // r8
  float *v43; // rax
  __int64 v44; // rcx
  float v45; // xmm4_4
  __int64 v46; // rdx
  float v47; // xmm1_4
  unsigned int v48; // [rsp+20h] [rbp-E0h]
  __int64 v49; // [rsp+28h] [rbp-D8h]
  __int128 v50; // [rsp+30h] [rbp-D0h]
  float v51[8]; // [rsp+40h] [rbp-C0h]
  __int128 v52; // [rsp+60h] [rbp-A0h]
  _BYTE v54[232]; // [rsp+88h] [rbp-78h] BYREF

  v3 = CMILMatrix::ComputeAdjointIgnoreZ(v54, a2, a1);
  v5 = *(_DWORD *)(v4 + 20);
  v6 = 0;
  *(_OWORD *)v51 = *(_OWORD *)(v3 + 16);
  v50 = *(_OWORD *)v3;
  v7 = *(_OWORD *)(v3 + 48);
  result = *(unsigned int *)(v3 + 64);
  v52 = v7;
  if ( v5 )
  {
    v9 = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0];
    v10 = BYTE1(result);
    do
    {
      v11 = (__m128)*(unsigned int *)(a2 + 16);
      v12 = *(float *)a2;
      v13 = *(float *)(a2 + 20);
      v14 = (__m128)*(unsigned int *)(a2 + 4);
      v15 = *(_BYTE *)(a2 + 65);
      v49 = *(_QWORD *)(v4 + 8) + (int)(*(_DWORD *)(v4 + 16) * v6);
      v16 = *(float *)v49;
      v17 = *(float *)(v49 + 4);
      v18 = *(_QWORD *)(v4 + 56) + (int)(*(_DWORD *)(v4 + 64) * v6);
      v19 = (float *)(*(_QWORD *)(v4 + 24) + (int)(*(_DWORD *)(v4 + 32) * v6));
      v48 = *(_DWORD *)(v4 + 40);
      v20 = (float)((float)(*(float *)(a2 + 16) * v17) + (float)(*(float *)a2 * *(float *)v49)) + *(float *)(a2 + 48);
      v21 = (float)((float)(v13 * v17) + (float)(v14.m128_f32[0] * *(float *)v49)) + *(float *)(a2 + 52);
      if ( (char)(4 * v15) >> 6 == 1
        || (char)(4 * v15) >> 6 >= 0
        && (LODWORD(v23) = COERCE_UNSIGNED_INT(
                             (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(a2 + 28) & v9) * 61440.0)
                                           + (float)(COERCE_FLOAT(*(_DWORD *)(a2 + 12) & v9) * 61440.0))
                                   + COERCE_FLOAT(*(_DWORD *)(a2 + 60) & v9))
                           - 1.0) & v9,
            v15 = (32 * (v23 >= 0.000081380211) - 16) ^ ((32 * (v23 >= 0.000081380211) - 16) ^ v15) & 0xCF,
            *(_BYTE *)(a2 + 65) = v15,
            v23 >= 0.000081380211) )
      {
        v22 = (float)((float)(v17 * *(float *)(a2 + 28)) + (float)(v16 * *(float *)(a2 + 12))) + *(float *)(a2 + 60);
      }
      else
      {
        v22 = FLOAT_1_0;
      }
      v24 = *v19;
      v25 = v19[1];
      v11.m128_f32[0] = (float)((float)(v11.m128_f32[0] * v25) + (float)(v12 * *v19)) + *(float *)(a2 + 48);
      v14.m128_f32[0] = (float)((float)(v14.m128_f32[0] * *v19) + (float)(v13 * v25)) + *(float *)(a2 + 52);
      if ( (char)(4 * v15) >> 6 == 1
        || (char)(4 * v15) >> 6 >= 0
        && (LODWORD(v27) = COERCE_UNSIGNED_INT(
                             (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(a2 + 28) & v9) * 61440.0)
                                           + (float)(COERCE_FLOAT(*(_DWORD *)(a2 + 12) & v9) * 61440.0))
                                   + COERCE_FLOAT(*(_DWORD *)(a2 + 60) & v9))
                           - 1.0) & v9,
            v15 = (32 * (v27 >= 0.000081380211) - 16) ^ ((32 * (v27 >= 0.000081380211) - 16) ^ v15) & 0xCF,
            *(_BYTE *)(a2 + 65) = v15,
            v27 >= 0.000081380211) )
      {
        v26 = (float)((float)(v25 * *(float *)(a2 + 28)) + (float)(v24 * *(float *)(a2 + 12))) + *(float *)(a2 + 60);
      }
      else
      {
        v26 = FLOAT_1_0;
      }
      v28 = (float)(v20 / v22) - (float)(v11.m128_f32[0] / v26);
      v29 = (float)(v21 / v22) - (float)(v14.m128_f32[0] / v26);
      v30 = sqrtf_0((float)(v29 * v29) + (float)(v28 * v28));
      v31 = FLOAT_1_0;
      if ( v30 > 0.0 )
        v31 = v19[2] / v30;
      v34 = (__m128)LODWORD(v51[0]);
      v35 = (__m128)LODWORD(v51[1]);
      v32 = (float)(v28 * v31) + (float)(v11.m128_f32[0] / v26);
      v33 = (float)(v29 * v31) + (float)(v14.m128_f32[0] / v26);
      v34.m128_f32[0] = (float)((float)(v51[0] * v33) + (float)(*(float *)&v50 * v32)) + *(float *)&v52;
      v35.m128_f32[0] = (float)((float)(v51[1] * v33) + (float)(*((float *)&v50 + 1) * v32)) + *((float *)&v52 + 1);
      if ( (char)(4 * v10) >> 6 == 1
        || (char)(4 * v10) >> 6 >= 0
        && (LODWORD(v37) = COERCE_UNSIGNED_INT(
                             (float)((float)((float)(COERCE_FLOAT(LODWORD(v51[3]) & v9) * 61440.0)
                                           + (float)(COERCE_FLOAT(HIDWORD(v50) & v9) * 61440.0))
                                   + COERCE_FLOAT(HIDWORD(v52) & v9))
                           - 1.0) & v9,
            v10 = (32 * (v37 >= 0.000081380211) - 16) ^ ((32 * (v37 >= 0.000081380211) - 16) ^ v10) & 0xCF,
            v37 >= 0.000081380211) )
      {
        v36 = (float)((float)(v32 * *((float *)&v50 + 3)) + (float)(v33 * v51[3])) + *((float *)&v52 + 3);
      }
      else
      {
        v36 = FLOAT_1_0;
      }
      v35.m128_f32[0] = v35.m128_f32[0] / v36;
      v34.m128_f32[0] = v34.m128_f32[0] / v36;
      v38 = v35;
      v39 = v34;
      v38.m128_f32[0] = (float)((float)(v35.m128_f32[0] * *(float *)(a2 + 16)) + (float)(v34.m128_f32[0] * *(float *)a2))
                      + *(float *)(a2 + 48);
      v39.m128_f32[0] = (float)((float)(v34.m128_f32[0] * *(float *)(a2 + 4))
                              + (float)(v35.m128_f32[0] * *(float *)(a2 + 20)))
                      + *(float *)(a2 + 52);
      if ( (char)(4 * v15) >> 6 == 1
        || (char)(4 * v15) >> 6 >= 0
        && (LODWORD(v41) = COERCE_UNSIGNED_INT(
                             (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(a2 + 28) & v9) * 61440.0)
                                           + (float)(COERCE_FLOAT(*(_DWORD *)(a2 + 12) & v9) * 61440.0))
                                   + COERCE_FLOAT(*(_DWORD *)(a2 + 60) & v9))
                           - 1.0) & v9,
            *(_BYTE *)(a2 + 65) = (32 * (v41 >= 0.000081380211) - 16) ^ (v15 ^ (32 * (v41 >= 0.000081380211) - 16)) & 0xCF,
            v41 >= 0.000081380211) )
      {
        v40 = (float)((float)(v35.m128_f32[0] * *(float *)(a2 + 28)) + (float)(v34.m128_f32[0] * *(float *)(a2 + 12)))
            + *(float *)(a2 + 60);
      }
      else
      {
        v40 = FLOAT_1_0;
      }
      if ( v40 <= 0.0 )
      {
        *(_QWORD *)v18 = _mm_unpacklo_ps(v11, v14).m128_u64[0];
        *(float *)(v18 + 8) = v26;
      }
      else
      {
        *(_QWORD *)v18 = _mm_unpacklo_ps(v38, v39).m128_u64[0];
        *(float *)(v18 + 8) = v40;
      }
      if ( v31 > 1.0 && v19[3] == 0.0 )
        v31 = FLOAT_1_0;
      v42 = v48;
      if ( v48 )
      {
        v43 = v19 + 4;
        v44 = v49 - (_QWORD)v19;
        v45 = 1.0 - v31;
        v46 = v18 - (_QWORD)v19;
        do
        {
          v47 = (float)(v45 * *v43) + (float)(v31 * *(float *)((char *)v43 + v44));
          *(float *)((char *)v43 + v46 + 4) = (float)(v31 * *(float *)((char *)v43 + v44 + 4)) + (float)(v45 * v43[1]);
          *(float *)((char *)v43 + v46) = v47;
          v43 += 2;
          --v42;
        }
        while ( v42 );
      }
      result = *(unsigned int *)(v49 + 12);
      ++v6;
      v4 = a1;
      *(_DWORD *)(v18 + 12) = result;
    }
    while ( v6 < v5 );
  }
  return result;
}
