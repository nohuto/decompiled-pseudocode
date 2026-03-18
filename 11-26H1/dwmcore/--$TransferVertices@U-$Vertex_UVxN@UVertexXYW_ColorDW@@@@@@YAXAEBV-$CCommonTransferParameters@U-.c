/*
 * XREFs of ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBV?$CCommonTransferParameters@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBVCMILMatrix@@1_N@Z @ 0x18011D230
 * Callers:
 *     ?EmitGeometry@CCpuClipAntialiasBatchCommand@@QEBAJPEAVCD3DBatchExecutionContext@@_N@Z @ 0x18011C0F0 (-EmitGeometry@CCpuClipAntialiasBatchCommand@@QEBAJPEAVCD3DBatchExecutionContext@@_N@Z.c)
 * Callees:
 *     ?ComputeAdjointIgnoreZ@CMILMatrix@@SA?AV1@AEBV1@@Z @ 0x18011E240 (-ComputeAdjointIgnoreZ@CMILMatrix@@SA-AV1@AEBV1@@Z.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x18011E3A4 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdNonScale2DOperator_Vertex_UVxN_Ve_ea_18011E3A4.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x18011E5B4 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdScale2DOperator_Vertex_UVxN_Verte_ea_18011E5B4.c)
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x18011E9DC (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_V.c)
 *     VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x18011F1A8 (VertexTransfer--Transfer_VertexTransfer--CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_.c)
 *     VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x18011F224 (VertexTransfer--Transfer_VertexTransfer--CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x18011F2A0 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdScale2DOperator_Vertex_UVxN_Verte_ea_18011F2A0.c)
 *     VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x18011F5C0 (VertexTransfer--Transfer_VertexTransfer--CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x18021549C (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Ver.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x180215548 (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Ver.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x180217B80 (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Ver.c)
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x18025BA68 (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_V.c)
 *     sqrtf_0 @ 0x1802B978C (sqrtf_0.c)
 */

__int64 __fastcall TransferVertices<Vertex_UVxN<VertexXYW_ColorDW>>(__int64 a1, __int64 a2, float *a3)
{
  bool v5; // cl
  __int64 v6; // r8
  unsigned __int32 v7; // xmm10_4
  float v8; // xmm15_4
  float v9; // xmm9_4
  char v10; // r9
  char v11; // dl
  __m128 v12; // xmm2
  __m128 v13; // xmm5
  __m128 v14; // xmm3
  __m128 v15; // xmm4
  char v16; // al
  __int64 result; // rax
  unsigned int v18; // edi
  unsigned int v19; // r14d
  unsigned int v20; // r11d
  __m128 v21; // xmm4
  __m128 v22; // xmm5
  __m128 j; // xmm6
  int v24; // ecx
  __m128 *v25; // r10
  __m128 *v26; // r9
  __m128 *v27; // rbx
  __m128 *v28; // r8
  _OWORD *v29; // rax
  __int64 v30; // rcx
  signed __int64 v31; // r10
  _OWORD *v32; // rax
  __int64 v33; // rcx
  signed __int64 v34; // r9
  char v35; // al
  unsigned int v36; // r11d
  __m128 v37; // xmm7
  unsigned int v38; // ebx
  unsigned int v39; // r14d
  __m128 v40; // xmm5
  __m128 v41; // xmm6
  __m128 v42; // xmm7
  __m128 i; // xmm8
  int v44; // ecx
  __m128 *v45; // r10
  __m128 *v46; // r9
  __m128 *v47; // rdi
  __m128 *v48; // r8
  __m128i v49; // xmm3
  __m128i v50; // xmm3
  _OWORD *m128_f32; // rax
  __int64 v52; // rcx
  signed __int64 v53; // r10
  __m128i v54; // xmm3
  __m128i v55; // xmm3
  _OWORD *v56; // rax
  __int64 v57; // rcx
  signed __int64 v58; // r9
  __int64 v59; // rax
  unsigned int v60; // r12d
  char v61; // si
  __m128 v62; // xmm13
  float v63; // xmm3_4
  __m128 v64; // xmm14
  float v65; // xmm4_4
  char v66; // di
  float v67; // xmm11_4
  float v68; // xmm12_4
  unsigned int v69; // r8d
  __int64 v70; // r10
  float v71; // xmm2_4
  float v72; // xmm5_4
  __int64 v73; // r13
  float *v74; // rbp
  float v75; // xmm7_4
  __m128 v76; // xmm8
  float v77; // xmm5_4
  float v78; // xmm2_4
  float v79; // xmm9_4
  float v80; // xmm9_4
  float v81; // xmm7_4
  float v82; // xmm1_4
  float v83; // xmm0_4
  float v84; // xmm15_4
  float v85; // xmm7_4
  __m128 v86; // xmm2
  float v87; // xmm1_4
  float v88; // xmm3_4
  __m128 v89; // xmm4
  __m128 v90; // xmm5
  float v91; // xmm2_4
  unsigned int v92; // r11d
  __int64 v93; // rcx
  __int64 v94; // rax
  __int64 v95; // rcx
  float v96; // xmm3_4
  float *v97; // rax
  __int64 v98; // rdx
  __int64 v99; // r8
  float v100; // xmm1_4
  char v101; // di
  char v102; // di
  char v103; // si
  char v104; // di
  float *v105; // r8
  float v106; // xmm4_4
  __int64 v107; // r10
  char *v108; // r9
  unsigned int v109; // edx
  __int64 v110; // rax
  float v111; // xmm1_4
  float v112; // xmm1_4
  float v113; // xmm1_4
  unsigned int v114; // r14d
  unsigned int v115; // ebp
  __m128 v116; // xmm10
  unsigned int v117; // r10d
  __m128 v118; // xmm7
  __m128 v119; // xmm8
  __m128 v120; // xmm7
  __m128 v121; // xmm8
  int v122; // ecx
  __m128 *v123; // rsi
  __m128 *v124; // r11
  __m128 *v125; // r9
  __int64 v126; // rbx
  int v127; // ecx
  __m128 *v128; // rbx
  __m128 *v129; // rdi
  __m128 *v130; // r8
  __m128 v131; // xmm2
  __m128 v132; // xmm0
  __m128 v133; // xmm5
  __m128 v134; // xmm1
  __m128 v135; // xmm0
  __m128 v136; // xmm3
  __int64 v137; // rcx
  signed __int64 v138; // rdi
  __m128 v139; // xmm2
  signed __int64 v140; // r9
  __m128 *v141; // rax
  __m128 v142; // xmm5
  __m128 v143; // xmm2
  __m128 v144; // xmm0
  __m128 v145; // xmm3
  __m128 v146; // xmm1
  __int64 v147; // rcx
  signed __int64 v148; // r8
  __m128 v149; // xmm2
  signed __int64 v150; // rbx
  __m128 *v151; // rax
  unsigned int v152; // [rsp+20h] [rbp-188h]
  unsigned int v153; // [rsp+24h] [rbp-184h]
  __int64 v154; // [rsp+28h] [rbp-180h]
  __int128 v155; // [rsp+30h] [rbp-178h]
  float v156[8]; // [rsp+40h] [rbp-168h]
  __int128 v157; // [rsp+60h] [rbp-148h]
  _BYTE v158[80]; // [rsp+80h] [rbp-128h] BYREF

  v5 = (*(_BYTE *)(a1 + 40) & 1) == 0 && (*(_BYTE *)(a1 + 56) & 0xF) == 0;
  v6 = *((unsigned __int8 *)a3 + 65);
  v7 = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0];
  v8 = FLOAT_61440_0;
  v9 = *(float *)&FLOAT_0_000081380211;
  if ( (char)(4 * (v6 & 0xF0)) > 0
    || (v6 & 0x20) == 0
    && (COERCE_FLOAT(COERCE_UNSIGNED_INT(
                       (float)((float)((float)(COERCE_FLOAT((_DWORD)a3[7] & v7) * 61440.0)
                                     + (float)(COERCE_FLOAT((_DWORD)a3[3] & v7) * 61440.0))
                             + COERCE_FLOAT((_DWORD)a3[15] & v7))
                     - 1.0) & v7) < 0.000081380211
      ? (v10 = 1, v11 = -16)
      : (v10 = 0, v11 = 16),
        *((_BYTE *)a3 + 65) = v11 ^ (v6 ^ v11) & 0xCF,
        !v10) )
  {
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 44) - 1.0) & v7) >= 0.0000011920929 )
    {
      if ( *(_BYTE *)(a1 + 48) )
        VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(
          a1,
          a3);
      else
        VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(
          a1,
          a3);
    }
    else
    {
      v59 = CMILMatrix::ComputeAdjointIgnoreZ(v158, a3, v6);
      v60 = 0;
      *(_OWORD *)v156 = *(_OWORD *)(v59 + 16);
      v155 = *(_OWORD *)v59;
      v157 = *(_OWORD *)(v59 + 48);
      v153 = *(_DWORD *)(a1 + 20);
      if ( v153 )
      {
        v61 = BYTE1(*(_DWORD *)(v59 + 64));
        do
        {
          v62 = (__m128)*((unsigned int *)a3 + 4);
          v63 = *a3;
          v64 = (__m128)*((unsigned int *)a3 + 5);
          v65 = a3[1];
          v76 = v64;
          v66 = *((_BYTE *)a3 + 65);
          v67 = a3[12];
          v68 = a3[13];
          v69 = *(_DWORD *)(a1 + 40);
          v70 = *(_QWORD *)(a1 + 8) + (int)(*(_DWORD *)(a1 + 16) * v60);
          v154 = v70;
          v152 = v69;
          v71 = *(float *)v70;
          v72 = *(float *)(v70 + 4);
          v73 = *(_QWORD *)(a1 + 56) + (int)(*(_DWORD *)(a1 + 64) * v60);
          v74 = (float *)(*(_QWORD *)(a1 + 24) + (int)(*(_DWORD *)(a1 + 32) * v60));
          v75 = (float)((float)(*(float *)v70 * *a3) + (float)(a3[4] * v72)) + v67;
          v76.m128_f32[0] = (float)((float)(v64.m128_f32[0] * v72) + (float)(v65 * *(float *)v70)) + v68;
          if ( (char)(4 * v66) >> 6 != 1 )
          {
            if ( (char)(4 * v66) >> 6 < 0 )
              goto LABEL_45;
            v101 = v66 & 0xCF;
            if ( v9 > COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                     (float)((float)((float)(COERCE_FLOAT((_DWORD)a3[7] & v7) * v8)
                                                   + (float)(COERCE_FLOAT((_DWORD)a3[3] & v7) * v8))
                                           + COERCE_FLOAT((_DWORD)a3[15] & v7))
                                   - 1.0) & v7) )
            {
              v66 = v101 ^ 0x30;
              *((_BYTE *)a3 + 65) = v66;
LABEL_45:
              v77 = FLOAT_1_0;
              goto LABEL_46;
            }
            v66 = v101 ^ 0x10;
            *((_BYTE *)a3 + 65) = v66;
          }
          v77 = (float)((float)(v72 * a3[7]) + (float)(v71 * a3[3])) + a3[15];
LABEL_46:
          v78 = *v74;
          v79 = v74[1];
          v62.m128_f32[0] = (float)((float)(v62.m128_f32[0] * v79) + (float)(v63 * *v74)) + v67;
          v64.m128_f32[0] = (float)((float)(v64.m128_f32[0] * v79) + (float)(v65 * *v74)) + v68;
          if ( (char)(4 * v66) >> 6 != 1 )
          {
            if ( (char)(4 * v66) >> 6 < 0 )
              goto LABEL_48;
            v102 = v66 & 0xCF;
            if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                (float)((float)((float)(COERCE_FLOAT((_DWORD)a3[7] & v7) * v8)
                                              + (float)(COERCE_FLOAT((_DWORD)a3[3] & v7) * v8))
                                      + COERCE_FLOAT((_DWORD)a3[15] & v7))
                              - 1.0) & v7) < 0.000081380211 )
            {
              v66 = v102 ^ 0x30;
              *((_BYTE *)a3 + 65) = v66;
LABEL_48:
              v80 = FLOAT_1_0;
              goto LABEL_49;
            }
            v66 = v102 ^ 0x10;
            *((_BYTE *)a3 + 65) = v66;
          }
          v80 = (float)((float)(v79 * a3[7]) + (float)(v78 * a3[3])) + a3[15];
LABEL_49:
          v81 = (float)(v75 / v77) - (float)(v62.m128_f32[0] / v80);
          v76.m128_f32[0] = (float)(v76.m128_f32[0] / v77) - (float)(v64.m128_f32[0] / v80);
          v82 = (float)(v76.m128_f32[0] * v76.m128_f32[0]) + (float)(v81 * v81);
          if ( v82 < 0.0 )
          {
            v83 = sqrtf_0(v82);
            v70 = v154;
            v69 = v152;
          }
          else
          {
            v83 = fsqrt(v82);
          }
          v84 = FLOAT_1_0;
          if ( v83 > 0.0 )
            v84 = v74[2] / v83;
          v85 = (float)(v81 * v84) + (float)(v62.m128_f32[0] / v80);
          v76.m128_f32[0] = (float)(v76.m128_f32[0] * v84) + (float)(v64.m128_f32[0] / v80);
          v86 = v76;
          v86.m128_f32[0] = (float)((float)(v76.m128_f32[0] * v156[1]) + (float)(v85 * *((float *)&v155 + 1)))
                          + *((float *)&v157 + 1);
          if ( (char)(4 * v61) >> 6 != 1 )
          {
            if ( (char)(4 * v61) >> 6 < 0 )
              goto LABEL_55;
            v103 = v61 & 0xCF;
            if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                (float)((float)((float)(COERCE_FLOAT(LODWORD(v156[3]) & v7) * 61440.0)
                                              + (float)(COERCE_FLOAT(HIDWORD(v155) & v7) * 61440.0))
                                      + COERCE_FLOAT(HIDWORD(v157) & v7))
                              - 1.0) & v7) < 0.000081380211 )
            {
              v61 = v103 ^ 0x30;
LABEL_55:
              v87 = FLOAT_1_0;
              goto LABEL_56;
            }
            v61 = v103 ^ 0x10;
          }
          v87 = (float)((float)(*((float *)&v155 + 3) * v85) + (float)(v156[3] * v76.m128_f32[0]))
              + *((float *)&v157 + 3);
LABEL_56:
          v88 = (float)((float)((float)(v76.m128_f32[0] * v156[0]) + (float)(v85 * *(float *)&v155)) + *(float *)&v157)
              / v87;
          v86.m128_f32[0] = v86.m128_f32[0] / v87;
          v89 = v86;
          v90 = v86;
          v89.m128_f32[0] = (float)((float)(v86.m128_f32[0] * a3[4]) + (float)(v88 * *a3)) + a3[12];
          v90.m128_f32[0] = (float)((float)(v86.m128_f32[0] * a3[5]) + (float)(v88 * a3[1])) + a3[13];
          if ( (char)(4 * v66) >> 6 != 1 )
          {
            if ( (char)(4 * v66) >> 6 < 0 )
              goto LABEL_58;
            v104 = v66 & 0xCF;
            if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                (float)((float)((float)(COERCE_FLOAT((_DWORD)a3[7] & v7) * 61440.0)
                                              + (float)(COERCE_FLOAT((_DWORD)a3[3] & v7) * 61440.0))
                                      + COERCE_FLOAT((_DWORD)a3[15] & v7))
                              - 1.0) & v7) < 0.000081380211 )
            {
              *((_BYTE *)a3 + 65) = v104 ^ 0x30;
LABEL_58:
              v91 = FLOAT_1_0;
              goto LABEL_59;
            }
            *((_BYTE *)a3 + 65) = v104 ^ 0x10;
          }
          v91 = (float)((float)(v86.m128_f32[0] * a3[7]) + (float)(v88 * a3[3])) + a3[15];
LABEL_59:
          if ( v91 <= 0.0 )
          {
            *(_QWORD *)v73 = _mm_unpacklo_ps(v62, v64).m128_u64[0];
            *(float *)(v73 + 8) = v80;
          }
          else
          {
            *(_QWORD *)v73 = _mm_unpacklo_ps(v89, v90).m128_u64[0];
            *(float *)(v73 + 8) = v91;
          }
          if ( v84 > 1.0 && v74[3] == 0.0 )
            v84 = FLOAT_1_0;
          v92 = 0;
          if ( v69 >= 3 )
          {
            v105 = (float *)(v73 + 28);
            v106 = 1.0 - v84;
            v107 = v70 - v73;
            v108 = (char *)v74 - v73;
            v109 = (v152 - 3) / 3 + 1;
            v110 = v109;
            v92 = 3 * v109;
            v93 = 3LL * v109;
            do
            {
              v111 = (float)(v106 * *(float *)&v108[(_QWORD)v105 - 12])
                   + (float)(v84 * *(float *)((char *)v105 + v107 - 12));
              *(v105 - 2) = (float)(v106 * *(float *)&v108[(_QWORD)v105 - 8])
                          + (float)(v84 * *(float *)((char *)v105 + v107 - 8));
              *(v105 - 3) = v111;
              v112 = (float)(v106 * *(float *)&v108[(_QWORD)v105 - 4])
                   + (float)(v84 * *(float *)((char *)v105 + v107 - 4));
              *v105 = (float)(v84 * *(float *)((char *)v105 + v107)) + (float)(v106 * *(float *)&v108[(_QWORD)v105]);
              *(v105 - 1) = v112;
              v113 = (float)(v106 * *(float *)&v108[(_QWORD)v105 + 4])
                   + (float)(v84 * *(float *)((char *)v105 + v107 + 4));
              v105[2] = (float)(v106 * *(float *)&v108[(_QWORD)v105 + 8])
                      + (float)(v84 * *(float *)((char *)v105 + v107 + 8));
              v105[1] = v113;
              v105 += 6;
              --v110;
            }
            while ( v110 );
            v69 = v152;
            v70 = v154;
            if ( v92 >= v152 )
              goto LABEL_67;
            goto LABEL_65;
          }
          if ( v69 )
          {
            v93 = 0LL;
LABEL_65:
            v94 = 8 * v93 + 16;
            v95 = v70 - (_QWORD)v74;
            v96 = 1.0 - v84;
            v97 = (float *)((char *)v74 + v94);
            v98 = v73 - (_QWORD)v74;
            v99 = v69 - v92;
            do
            {
              v100 = (float)(v96 * *v97) + (float)(v84 * *(float *)((char *)v97 + v95));
              *(float *)((char *)v97 + v98 + 4) = (float)(v96 * v97[1])
                                                + (float)(v84 * *(float *)((char *)v97 + v95 + 4));
              *(float *)((char *)v97 + v98) = v100;
              v97 += 2;
              --v99;
            }
            while ( v99 );
          }
LABEL_67:
          ++v60;
          v8 = FLOAT_61440_0;
          v9 = *(float *)&FLOAT_0_000081380211;
          *(_DWORD *)(v73 + 12) = *(_DWORD *)(v70 + 12);
        }
        while ( v60 < v153 );
      }
    }
    result = *(unsigned int *)(a1 + 20);
    dword_1803DE48C += result;
    return result;
  }
  v12 = (__m128)*(unsigned int *)a3;
  v13 = (__m128)*((unsigned int *)a3 + 5);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*a3 - v13.m128_f32[0]) & v7) > 0.000081380211
    || (v14 = (__m128)*((unsigned int *)a3 + 4),
        v15 = (__m128)*((unsigned int *)a3 + 1),
        COERCE_FLOAT(COERCE_UNSIGNED_INT(a3[1] - COERCE_FLOAT(*((_DWORD *)a3 + 4) ^ _xmm)) & v7) > 0.000081380211)
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(
                      (float)((float)(v12.m128_f32[0] * v12.m128_f32[0]) + (float)(v14.m128_f32[0] * v14.m128_f32[0]))
                    - 1.0) & v7) >= 0.000081380211 )
  {
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 44) - 1.0) & v7) < 0.0000011920929 )
    {
      if ( !v5 )
      {
        VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___(a1);
        result = *(unsigned int *)(a1 + 20);
        dword_1803DE488 += result;
        return result;
      }
      v114 = 0;
      v115 = *(_DWORD *)(a1 + 20);
      v116 = (__m128)*((unsigned __int64 *)a3 + 6);
      v117 = *(_DWORD *)(a1 + 40) >> 1;
      v118 = _mm_unpacklo_ps(v12, (__m128)*((unsigned int *)a3 + 1));
      v119 = _mm_unpacklo_ps((__m128)*((unsigned int *)a3 + 4), v13);
      v120 = _mm_movelh_ps(v118, v118);
      v121 = _mm_movelh_ps(v119, v119);
      if ( v115 )
      {
        do
        {
          v122 = *(_DWORD *)(a1 + 64);
          v123 = (__m128 *)(*(_QWORD *)(a1 + 8) + (int)(*(_DWORD *)(a1 + 16) * v114));
          v124 = (__m128 *)(*(_QWORD *)(a1 + 8) + (int)(*(_DWORD *)(a1 + 16) * (v114 + 1)));
          v125 = (__m128 *)(*(_QWORD *)(a1 + 56) + (int)(v122 * v114));
          v126 = (int)((v114 + 1) * v122);
          v127 = *(_DWORD *)(a1 + 32);
          v128 = (__m128 *)(*(_QWORD *)(a1 + 56) + v126);
          v129 = (__m128 *)(*(_QWORD *)(a1 + 24) + (int)(v127 * v114));
          v130 = (__m128 *)(*(_QWORD *)(a1 + 24) + (int)((v114 + 1) * v127));
          v131 = *v129;
          v132 = _mm_sub_ps(_mm_shuffle_ps(*v123, DirectX::g_XMOne, 228), *v129);
          v133 = _mm_add_ps(
                   _mm_mul_ps(_mm_shuffle_ps(v132, v132, 85), v121),
                   _mm_mul_ps(_mm_shuffle_ps(v132, v132, 0), v120));
          if ( (_mm_movemask_ps(_mm_cmpeq_ps(v133, DirectX::g_XMZero)) & 3) == 3 )
          {
            v136 = (__m128)DirectX::g_XMOne;
          }
          else
          {
            v134 = _mm_mul_ps(v133, v133);
            v135 = (__m128)DirectX::g_XMOne;
            v135.m128_f32[0] = 1.0 / fsqrt(v134.m128_f32[0] + _mm_shuffle_ps(v134, v134, 85).m128_f32[0]);
            v136 = _mm_mul_ps(_mm_shuffle_ps(v131, v131, 170), _mm_shuffle_ps(v135, v135, 0));
          }
          *v125 = _mm_shuffle_ps(
                    _mm_add_ps(
                      _mm_add_ps(
                        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v131, v131, 85), v121), v116),
                        _mm_mul_ps(_mm_shuffle_ps(v131, v131, 0), v120)),
                      _mm_mul_ps(v136, v133)),
                    _mm_or_ps(
                      _mm_and_ps(
                        *v123,
                        (__m128)`DirectX::MathInternal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask),
                      _mm_andnot_ps(
                        (__m128)`DirectX::MathInternal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
                        DirectX::g_XMOne)),
                    228);
          if ( v136.m128_f32[0] > 1.0 && v129->m128_f32[3] == 0.0 )
            v136 = (__m128)LODWORD(FLOAT_1_0);
          if ( v117 )
          {
            v137 = v117;
            v138 = (char *)v129 - (char *)v123;
            v139 = _mm_shuffle_ps(v136, v136, 0);
            v140 = (char *)v125 - (char *)v123;
            v141 = v123 + 1;
            do
            {
              *(__m128 *)((char *)v141 + v140) = _mm_add_ps(
                                                   _mm_mul_ps(_mm_sub_ps(*v141, *(__m128 *)((char *)v141 + v138)), v139),
                                                   *(__m128 *)((char *)v141 + v138));
              ++v141;
              --v137;
            }
            while ( v137 );
          }
          v142 = (__m128)DirectX::g_XMOne;
          v143 = *v130;
          v144 = _mm_sub_ps(_mm_shuffle_ps(*v124, DirectX::g_XMOne, 228), *v130);
          v145 = _mm_add_ps(
                   _mm_mul_ps(_mm_shuffle_ps(v144, v144, 85), v121),
                   _mm_mul_ps(_mm_shuffle_ps(v144, v144, 0), v120));
          if ( (_mm_movemask_ps(_mm_cmpeq_ps(v145, DirectX::g_XMZero)) & 3) != 3 )
          {
            v146 = _mm_mul_ps(v145, v145);
            v142.m128_f32[0] = 1.0 / fsqrt(v146.m128_f32[0] + _mm_shuffle_ps(v146, v146, 85).m128_f32[0]);
            v142 = _mm_mul_ps(_mm_shuffle_ps(v142, v142, 0), _mm_shuffle_ps(v143, v143, 170));
          }
          *v128 = _mm_shuffle_ps(
                    _mm_add_ps(
                      _mm_add_ps(
                        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v143, v143, 85), v121), v116),
                        _mm_mul_ps(_mm_shuffle_ps(v143, v143, 0), v120)),
                      _mm_mul_ps(v142, v145)),
                    _mm_or_ps(
                      _mm_and_ps(
                        *v124,
                        (__m128)`DirectX::MathInternal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask),
                      _mm_andnot_ps(
                        (__m128)`DirectX::MathInternal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
                        DirectX::g_XMOne)),
                    228);
          if ( v142.m128_f32[0] > 1.0 && v130->m128_f32[3] == 0.0 )
            v142 = (__m128)LODWORD(FLOAT_1_0);
          if ( v117 )
          {
            v147 = v117;
            v148 = (char *)v130 - (char *)v124;
            v149 = _mm_shuffle_ps(v142, v142, 0);
            v150 = (char *)v128 - (char *)v124;
            v151 = v124 + 1;
            do
            {
              *(__m128 *)((char *)v151 + v150) = _mm_add_ps(
                                                   _mm_mul_ps(_mm_sub_ps(*v151, *(__m128 *)((char *)v151 + v148)), v149),
                                                   *(__m128 *)((char *)v151 + v148));
              ++v151;
              --v147;
            }
            while ( v147 );
          }
          v114 += 2;
        }
        while ( v114 < v115 );
      }
    }
    else
    {
      v16 = *(_BYTE *)(a1 + 48);
      if ( v5 )
      {
        if ( v16 )
          VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(a1);
        else
          VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(a1);
        result = *(unsigned int *)(a1 + 20);
        dword_1803DE488 += result;
        return result;
      }
      if ( v16 )
      {
        VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(a1);
        result = *(unsigned int *)(a1 + 20);
        dword_1803DE488 += result;
        return result;
      }
      VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(a1);
    }
    result = *(unsigned int *)(a1 + 20);
    dword_1803DE488 += result;
    return result;
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 44) - 1.0) & v7) >= 0.0000011920929 )
  {
    v35 = *(_BYTE *)(a1 + 48);
    if ( v5 )
    {
      if ( v35 )
      {
        VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(a1);
      }
      else
      {
        v36 = *(_DWORD *)(a1 + 40) >> 1;
        v37 = (__m128)*((unsigned __int64 *)a3 + 6);
        v38 = *(_DWORD *)(a1 + 20);
        v39 = 0;
        v40 = _mm_movelh_ps(_mm_unpacklo_ps(v14, v13), (__m128)0LL);
        v41 = _mm_movelh_ps(_mm_unpacklo_ps(v12, v15), (__m128)0LL);
        v42 = _mm_movelh_ps(v37, (__m128)_mm_load_si128((const __m128i *)&_xmm));
        for ( i = _mm_shuffle_ps((__m128)*(unsigned int *)(a1 + 44), (__m128)*(unsigned int *)(a1 + 44), 0);
              v39 < v38;
              v39 += 2 )
        {
          v44 = *(_DWORD *)(a1 + 64);
          v45 = (__m128 *)(*(_QWORD *)(a1 + 8) + (int)(*(_DWORD *)(a1 + 16) * v39));
          v46 = (__m128 *)(*(_QWORD *)(a1 + 8) + (int)(*(_DWORD *)(a1 + 16) * (v39 + 1)));
          v47 = (__m128 *)(*(_QWORD *)(a1 + 56) + (int)(v44 * v39));
          v48 = (__m128 *)(*(_QWORD *)(a1 + 56) + (int)((v39 + 1) * v44));
          v49 = _mm_cvttps_epi32(
                  _mm_mul_ps(
                    _mm_mul_ps(
                      _mm_add_ps(
                        _mm_cvtepi32_ps((__m128i)_mm_xor_ps(
                                                   _mm_and_ps(_mm_shuffle_ps(*v45, *v45, 255), g_MaskA8B8G8R8),
                                                   g_FlipA8R8G8B8)),
                        g_FixAA8R8G8B8),
                      g_NormalizeA8R8G8B8),
                    i));
          v50 = _mm_packs_epi32(v49, v49);
          *v47 = _mm_or_ps(
                   _mm_andnot_ps(
                     (__m128)`DirectX::MathInternal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
                     _mm_add_ps(
                       _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(*v45, *v45, 85), v40), v42),
                       _mm_mul_ps(_mm_shuffle_ps(*v45, *v45, 0), v41))),
                   _mm_and_ps(
                     (__m128)_mm_packus_epi16(v50, v50),
                     (__m128)`DirectX::MathInternal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask));
          if ( v36 )
          {
            m128_f32 = (_OWORD *)v47[1].m128_f32;
            v52 = v36;
            v53 = (char *)v45 - (char *)v47;
            do
            {
              *m128_f32 = *(_OWORD *)((char *)m128_f32 + v53);
              ++m128_f32;
              --v52;
            }
            while ( v52 );
          }
          v54 = _mm_cvttps_epi32(
                  _mm_mul_ps(
                    _mm_mul_ps(
                      _mm_add_ps(
                        _mm_cvtepi32_ps((__m128i)_mm_xor_ps(
                                                   _mm_and_ps(_mm_shuffle_ps(*v46, *v46, 255), g_MaskA8B8G8R8),
                                                   g_FlipA8R8G8B8)),
                        g_FixAA8R8G8B8),
                      g_NormalizeA8R8G8B8),
                    i));
          v55 = _mm_packs_epi32(v54, v54);
          *v48 = _mm_or_ps(
                   _mm_andnot_ps(
                     (__m128)`DirectX::MathInternal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
                     _mm_add_ps(
                       _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(*v46, *v46, 85), v40), v42),
                       _mm_mul_ps(_mm_shuffle_ps(*v46, *v46, 0), v41))),
                   _mm_and_ps(
                     (__m128)_mm_packus_epi16(v55, v55),
                     (__m128)`DirectX::MathInternal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask));
          if ( v36 )
          {
            v56 = (_OWORD *)v48[1].m128_f32;
            v57 = v36;
            v58 = (char *)v46 - (char *)v48;
            do
            {
              *v56 = *(_OWORD *)((char *)v56 + v58);
              ++v56;
              --v57;
            }
            while ( v57 );
          }
        }
      }
    }
    else if ( v35 )
    {
      VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(a1);
    }
    else
    {
      VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(a1);
    }
  }
  else if ( v5 )
  {
    v18 = *(_DWORD *)(a1 + 20);
    v19 = 0;
    v20 = *(_DWORD *)(a1 + 40) >> 1;
    v21 = _mm_movelh_ps(_mm_unpacklo_ps(v12, v15), (__m128)0LL);
    v22 = _mm_movelh_ps(_mm_unpacklo_ps(v14, v13), (__m128)0LL);
    for ( j = _mm_movelh_ps((__m128)*((unsigned __int64 *)a3 + 6), (__m128)_mm_load_si128((const __m128i *)&_xmm));
          v19 < v18;
          v19 += 2 )
    {
      v24 = *(_DWORD *)(a1 + 64);
      v25 = (__m128 *)(*(_QWORD *)(a1 + 8) + (int)(*(_DWORD *)(a1 + 16) * v19));
      v26 = (__m128 *)(*(_QWORD *)(a1 + 8) + (int)(*(_DWORD *)(a1 + 16) * (v19 + 1)));
      v27 = (__m128 *)(*(_QWORD *)(a1 + 56) + (int)(v24 * v19));
      v28 = (__m128 *)(*(_QWORD *)(a1 + 56) + (int)((v19 + 1) * v24));
      *v27 = _mm_or_ps(
               _mm_andnot_ps(
                 (__m128)`DirectX::MathInternal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
                 _mm_add_ps(
                   _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(*v25, *v25, 85), v22), j),
                   _mm_mul_ps(_mm_shuffle_ps(*v25, *v25, 0), v21))),
               _mm_and_ps(*v25, (__m128)`DirectX::MathInternal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask));
      if ( v20 )
      {
        v29 = (_OWORD *)v27[1].m128_f32;
        v30 = v20;
        v31 = (char *)v25 - (char *)v27;
        do
        {
          *v29 = *(_OWORD *)((char *)v29 + v31);
          ++v29;
          --v30;
        }
        while ( v30 );
      }
      *v28 = _mm_or_ps(
               _mm_andnot_ps(
                 (__m128)`DirectX::MathInternal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
                 _mm_add_ps(
                   _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(*v26, *v26, 85), v22), j),
                   _mm_mul_ps(_mm_shuffle_ps(*v26, *v26, 0), v21))),
               _mm_and_ps(*v26, (__m128)`DirectX::MathInternal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask));
      if ( v20 )
      {
        v32 = (_OWORD *)v28[1].m128_f32;
        v33 = v20;
        v34 = (char *)v26 - (char *)v28;
        do
        {
          *v32 = *(_OWORD *)((char *)v32 + v34);
          ++v32;
          --v33;
        }
        while ( v33 );
      }
    }
  }
  else
  {
    VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___(a1);
  }
  result = *(unsigned int *)(a1 + 20);
  dword_1803DE484 += result;
  return result;
}
