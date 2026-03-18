/*
 * XREFs of ?Transform@?$CGeneral3DOperator@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@VertexTransfer@@QEAAXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@IAEBVCMILMatrix@@PEAU3@@Z @ 0x18011EB40
 * Callers:
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x18011E9DC (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_V.c)
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x18025BA68 (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_V.c)
 * Callees:
 *     sqrtf_0 @ 0x1802B978C (sqrtf_0.c)
 */

char __fastcall VertexTransfer::CGeneral3DOperator<Vertex_UVxN<VertexXYW_ColorDW>>::Transform(
        __int64 a1,
        float *a2,
        float *a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6)
{
  float v6; // xmm2_4
  float v8; // xmm3_4
  float v12; // xmm1_4
  float v13; // xmm4_4
  float v14; // xmm5_4
  char v15; // cl
  unsigned __int32 v16; // xmm8_4
  __m128 v17; // xmm13
  __m128 v18; // xmm14
  float v19; // xmm15_4
  float v20; // xmm7_4
  __m128 v21; // xmm9
  float v22; // xmm2_4
  float v23; // xmm3_4
  float v24; // xmm10_4
  float v25; // xmm10_4
  float v26; // xmm7_4
  float v27; // xmm0_4
  float v28; // xmm1_4
  char v29; // cl
  float v30; // xmm7_4
  float v31; // xmm3_4
  __m128 v32; // xmm2
  float v33; // xmm7_4
  char v34; // cl
  float v35; // xmm3_4
  float *v36; // rax
  __m128 v37; // xmm4
  __m128 v38; // xmm5
  float v39; // xmm2_4
  float v40; // xmm5_4
  unsigned int v41; // ecx
  __int64 v42; // rdx
  signed __int64 v43; // rbp
  __int64 v44; // r14
  float v45; // xmm6_4
  __int64 v46; // rcx
  float v47; // xmm1_4
  char v48; // cl
  char v49; // cl
  char v50; // cl
  char v51; // cl
  float v52; // xmm4_4
  float *v53; // r8
  char *v54; // r9
  char *v55; // r10
  unsigned int v56; // edx
  float v57; // xmm1_4
  float v58; // xmm1_4
  float v59; // xmm1_4
  float v61; // [rsp+20h] [rbp-C8h]

  v6 = *a2;
  v8 = a2[1];
  v12 = *(float *)(a5 + 52);
  v13 = *(float *)a5;
  v14 = *(float *)(a5 + 4);
  v15 = *(_BYTE *)(a5 + 65);
  v16 = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0];
  v17 = (__m128)*(unsigned int *)(a5 + 16);
  v18 = (__m128)*(unsigned int *)(a5 + 20);
  v19 = *(float *)(a5 + 48);
  v21 = v18;
  v20 = (float)((float)(*(float *)a5 * *a2) + (float)(*(float *)(a5 + 16) * v8)) + v19;
  v21.m128_f32[0] = (float)((float)(v18.m128_f32[0] * v8) + (float)(v14 * *a2)) + v12;
  if ( (char)(4 * v15) >> 6 != 1 )
  {
    if ( (char)(4 * v15) >> 6 < 0 )
    {
LABEL_3:
      v22 = FLOAT_1_0;
      goto LABEL_4;
    }
    v48 = v15 & 0xCF;
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                        (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(a5 + 28) & v16) * 61440.0)
                                      + (float)(COERCE_FLOAT(*(_DWORD *)(a5 + 12) & v16) * 61440.0))
                              + COERCE_FLOAT(*(_DWORD *)(a5 + 60) & v16))
                      - 1.0) & v16) < 0.000081380211 )
    {
      v15 = v48 ^ 0x30;
      *(_BYTE *)(a5 + 65) = v15;
      goto LABEL_3;
    }
    v15 = v48 ^ 0x10;
    *(_BYTE *)(a5 + 65) = v15;
  }
  v22 = (float)((float)(v6 * *(float *)(a5 + 12)) + (float)(v8 * *(float *)(a5 + 28))) + *(float *)(a5 + 60);
LABEL_4:
  v23 = *a3;
  v24 = a3[1];
  v17.m128_f32[0] = (float)((float)(v17.m128_f32[0] * v24) + (float)(v13 * *a3)) + v19;
  v18.m128_f32[0] = (float)((float)(v18.m128_f32[0] * v24) + (float)(v14 * *a3)) + v12;
  if ( (char)(4 * v15) >> 6 != 1 )
  {
    if ( (char)(4 * v15) >> 6 < 0 )
    {
LABEL_6:
      v25 = FLOAT_1_0;
      goto LABEL_7;
    }
    v49 = v15 & 0xCF;
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                        (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(a5 + 28) & v16) * 61440.0)
                                      + (float)(COERCE_FLOAT(*(_DWORD *)(a5 + 12) & v16) * 61440.0))
                              + COERCE_FLOAT(*(_DWORD *)(a5 + 60) & v16))
                      - 1.0) & v16) < 0.000081380211 )
    {
      *(_BYTE *)(a5 + 65) = v49 ^ 0x30;
      goto LABEL_6;
    }
    *(_BYTE *)(a5 + 65) = v49 ^ 0x10;
  }
  v25 = (float)((float)(v24 * *(float *)(a5 + 28)) + (float)(v23 * *(float *)(a5 + 12))) + *(float *)(a5 + 60);
LABEL_7:
  v21.m128_f32[0] = (float)(v21.m128_f32[0] / v22) - (float)(v18.m128_f32[0] / v25);
  v26 = (float)(v20 / v22) - (float)(v17.m128_f32[0] / v25);
  v27 = sqrtf_0((float)(v21.m128_f32[0] * v21.m128_f32[0]) + (float)(v26 * v26));
  v28 = FLOAT_1_0;
  v61 = FLOAT_1_0;
  if ( v27 > 0.0 )
  {
    v28 = a3[2] / v27;
    v61 = v28;
  }
  v29 = *(_BYTE *)(a1 + 65);
  v30 = (float)(v26 * v28) + (float)(v17.m128_f32[0] / v25);
  v21.m128_f32[0] = (float)(v21.m128_f32[0] * v28) + (float)(v18.m128_f32[0] / v25);
  v32 = v21;
  v31 = (float)((float)(v21.m128_f32[0] * *(float *)(a1 + 16)) + (float)(v30 * *(float *)a1)) + *(float *)(a1 + 48);
  v32.m128_f32[0] = (float)((float)(v21.m128_f32[0] * *(float *)(a1 + 20)) + (float)(v30 * *(float *)(a1 + 4)))
                  + *(float *)(a1 + 52);
  if ( (char)(4 * v29) >> 6 != 1 )
  {
    if ( (char)(4 * v29) >> 6 < 0 )
    {
LABEL_11:
      v33 = FLOAT_1_0;
      goto LABEL_12;
    }
    v50 = v29 & 0xCF;
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                        (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(a1 + 28) & v16) * 61440.0)
                                      + (float)(COERCE_FLOAT(*(_DWORD *)(a1 + 12) & v16) * 61440.0))
                              + COERCE_FLOAT(*(_DWORD *)(a1 + 60) & v16))
                      - 1.0) & v16) < 0.000081380211 )
    {
      *(_BYTE *)(a1 + 65) = v50 ^ 0x30;
      goto LABEL_11;
    }
    *(_BYTE *)(a1 + 65) = v50 ^ 0x10;
  }
  v33 = (float)((float)(v30 * *(float *)(a1 + 12)) + (float)(v21.m128_f32[0] * *(float *)(a1 + 28)))
      + *(float *)(a1 + 60);
LABEL_12:
  v34 = *(_BYTE *)(a5 + 65);
  v35 = v31 / v33;
  LOBYTE(v36) = (char)(4 * v34) >> 6;
  v32.m128_f32[0] = v32.m128_f32[0] / v33;
  v37 = v32;
  v38 = v32;
  v37.m128_f32[0] = (float)((float)(v32.m128_f32[0] * *(float *)(a5 + 16)) + (float)(v35 * *(float *)a5))
                  + *(float *)(a5 + 48);
  v38.m128_f32[0] = (float)((float)(v32.m128_f32[0] * *(float *)(a5 + 20)) + (float)(v35 * *(float *)(a5 + 4)))
                  + *(float *)(a5 + 52);
  if ( (_BYTE)v36 != 1 )
  {
    if ( (char)v36 < 0 )
    {
LABEL_14:
      v39 = FLOAT_1_0;
      goto LABEL_15;
    }
    v51 = v34 & 0xCF;
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                        (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(a5 + 28) & v16) * 61440.0)
                                      + (float)(COERCE_FLOAT(*(_DWORD *)(a5 + 12) & v16) * 61440.0))
                              + COERCE_FLOAT(*(_DWORD *)(a5 + 60) & v16))
                      - 1.0) & v16) < 0.000081380211 )
    {
      *(_BYTE *)(a5 + 65) = v51 ^ 0x30;
      goto LABEL_14;
    }
    *(_BYTE *)(a5 + 65) = v51 ^ 0x10;
  }
  v39 = (float)((float)(v32.m128_f32[0] * *(float *)(a5 + 28)) + (float)(v35 * *(float *)(a5 + 12)))
      + *(float *)(a5 + 60);
LABEL_15:
  if ( v39 <= 0.0 )
  {
    *(_QWORD *)a6 = _mm_unpacklo_ps(v17, v18).m128_u64[0];
    *(float *)(a6 + 8) = v25;
  }
  else
  {
    *(_QWORD *)a6 = _mm_unpacklo_ps(v37, v38).m128_u64[0];
    *(float *)(a6 + 8) = v39;
  }
  v40 = v61;
  if ( v61 > 1.0 && a3[3] == 0.0 )
    v40 = FLOAT_1_0;
  v41 = 0;
  if ( a4 < 3 )
  {
    if ( !a4 )
      return (char)v36;
    v42 = 0LL;
    goto LABEL_21;
  }
  v52 = 1.0 - v40;
  v53 = (float *)(a6 + 28);
  v54 = (char *)a3 - a6;
  v55 = (char *)a2 - a6;
  v56 = (a4 - 3) / 3 + 1;
  v36 = (float *)v56;
  v41 = 3 * v56;
  v42 = 3LL * v56;
  do
  {
    v57 = (float)(v52 * *(float *)((char *)v53 + (_QWORD)v54 - 12)) + (float)(v40 * *(float *)&v55[(_QWORD)v53 - 12]);
    *(v53 - 2) = (float)(v52 * *(float *)((char *)v53 + (_QWORD)v54 - 8))
               + (float)(v40 * *(float *)&v55[(_QWORD)v53 - 8]);
    *(v53 - 3) = v57;
    v58 = (float)(v52 * *(float *)((char *)v53 + (_QWORD)v54 - 4)) + (float)(v40 * *(float *)&v55[(_QWORD)v53 - 4]);
    *v53 = (float)(v40 * *(float *)&v55[(_QWORD)v53]) + (float)(v52 * *(float *)((char *)v53 + (_QWORD)v54));
    *(v53 - 1) = v58;
    v59 = (float)(v52 * *(float *)((char *)v53 + (_QWORD)v54 + 4)) + (float)(v40 * *(float *)&v55[(_QWORD)v53 + 4]);
    v53[2] = (float)(v52 * *(float *)((char *)v53 + (_QWORD)v54 + 8)) + (float)(v40 * *(float *)&v55[(_QWORD)v53 + 8]);
    v53[1] = v59;
    v53 += 6;
    v36 = (float *)((char *)v36 - 1);
  }
  while ( v36 );
  if ( v41 < a4 )
  {
LABEL_21:
    v43 = (char *)a2 - (char *)a3;
    v44 = a6 - (_QWORD)a3;
    v45 = 1.0 - v40;
    v36 = &a3[2 * v42 + 4];
    v46 = a4 - v41;
    do
    {
      v47 = (float)(v45 * *v36) + (float)(v40 * *(float *)((char *)v36 + v43));
      *(float *)((char *)v36 + v44 + 4) = (float)(v45 * v36[1]) + (float)(v40 * *(float *)((char *)v36 + v43 + 4));
      *(float *)((char *)v36 + v44) = v47;
      v36 += 2;
      --v46;
    }
    while ( v46 );
  }
  return (char)v36;
}
