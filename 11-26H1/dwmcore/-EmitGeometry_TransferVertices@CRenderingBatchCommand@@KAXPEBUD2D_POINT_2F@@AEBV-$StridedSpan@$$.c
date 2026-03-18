/*
 * XREFs of ?EmitGeometry_TransferVertices@CRenderingBatchCommand@@KAXPEBUD2D_POINT_2F@@AEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@$$CBUVertexAAFixup_UVxN@@@@_K_NAEBVCMILMatrix@@54MAEBV?$StridedSpan@E@@4@Z @ 0x180065020
 * Callers:
 *     _CCpuClipAntialiasBatchCommand::EmitGeometry_::_2_::_lambda_1_::operator() @ 0x18011CACC (_CCpuClipAntialiasBatchCommand--EmitGeometry_--_2_--_lambda_1_--operator().c)
 * Callees:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBV?$CCommonTransferParameters@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@AEBVCMILMatrix@@1_N@Z @ 0x180064D98 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBV-$CCommonTran.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x180065540 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_.c)
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x18006587C (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_V.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x180065E30 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_Color.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x18011E3A4 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdNonScale2DOperator_Vertex_UVxN_Ve_ea_18011E3A4.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x18011E5B4 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdScale2DOperator_Vertex_UVxN_Verte_ea_18011E5B4.c)
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x18011E9DC (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_V.c)
 *     VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x18011F1A8 (VertexTransfer--Transfer_VertexTransfer--CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_.c)
 *     VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x18011F224 (VertexTransfer--Transfer_VertexTransfer--CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x18011F2A0 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdScale2DOperator_Vertex_UVxN_Verte_ea_18011F2A0.c)
 *     VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x18011F5C0 (VertexTransfer--Transfer_VertexTransfer--CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_.c)
 *     ?TransferAliasedVertices@@YAXAEBV?$CCommonTransferParameters@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x18020BE40 (-TransferAliasedVertices@@YAXAEBV-$CCommonTransferParameters@U-$Vertex_UVxN@UVertexXYW_ColorDW@@.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x18021549C (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Ver.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x180215548 (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Ver.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x180217B80 (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Ver.c)
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x18025BA68 (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_V.c)
 */

__int64 __fastcall CRenderingBatchCommand::EmitGeometry_TransferVertices(
        __int64 a1,
        __int64 *a2,
        __int64 *a3,
        unsigned int a4,
        char a5,
        __m128 *a6,
        struct Windows::Foundation::Numerics::float4x4 *a7,
        char a8,
        float a9,
        __int64 *a10,
        char a11)
{
  __int64 v11; // r12
  int v12; // r13d
  unsigned int v13; // r11d
  int v14; // edi
  __int64 v15; // r15
  int v16; // r10d
  __int64 v17; // rdx
  int v18; // eax
  int v19; // ebx
  unsigned __int32 v20; // xmm5_4
  char v21; // r10
  bool v22; // r11
  char v23; // bl
  char v24; // cl
  __m128 v25; // xmm2
  __m128 v26; // xmm7
  __m128 v27; // xmm4
  __int64 result; // rax
  __m128 v29; // xmm5
  unsigned int v30; // r9d
  __m128 v31; // xmm4
  __m128 v32; // xmm6
  int v33; // r10d
  int v34; // r11d
  int v35; // ebx
  __int64 v36; // rdi
  __m128 *v37; // rdx
  __m128 *v38; // r8
  __m128 *v39; // rcx
  __m128 *v40; // r10
  _OWORD *m128_f32; // rax
  signed __int64 v42; // r8
  __int64 v43; // rcx
  _OWORD *v44; // rax
  __int64 v45; // rcx
  signed __int64 v46; // rdx
  int v47; // [rsp+20h] [rbp-99h]
  _QWORD v48[2]; // [rsp+30h] [rbp-89h] BYREF
  int v49; // [rsp+40h] [rbp-79h]
  unsigned int v50; // [rsp+44h] [rbp-75h]
  __int64 v51; // [rsp+48h] [rbp-71h]
  int v52; // [rsp+50h] [rbp-69h]
  int v53; // [rsp+54h] [rbp-65h]
  unsigned int v54; // [rsp+58h] [rbp-61h]
  float v55; // [rsp+5Ch] [rbp-5Dh]
  char v56; // [rsp+60h] [rbp-59h]
  __int64 v57; // [rsp+68h] [rbp-51h]
  int v58; // [rsp+70h] [rbp-49h]
  int v59; // [rsp+74h] [rbp-45h]

  v11 = *a2;
  v12 = *((_DWORD *)a2 + 2);
  v13 = *((_DWORD *)a2 + 3);
  v14 = *((_DWORD *)a10 + 2);
  v15 = *a10;
  v16 = *((_DWORD *)a10 + 3);
  v17 = *a3;
  v18 = *((_DWORD *)a3 + 3);
  v19 = *((_DWORD *)a3 + 2);
  v53 = v18;
  v57 = v15;
  v47 = v14;
  v48[0] = a1;
  v48[1] = v11;
  v49 = v12;
  v50 = v13;
  v51 = v17;
  v52 = v19;
  v54 = a4;
  v58 = v14;
  v59 = v16;
  if ( a11 )
  {
    v55 = a9;
    v56 = a5;
    return TransferVertices<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>((__int64)v48, a6, a7, a8);
  }
  v55 = a9;
  v56 = a5;
  if ( !v18 )
    return TransferAliasedVertices(v48);
  v20 = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0];
  v21 = *((_BYTE *)a7 + 65);
  v22 = (a4 & 1) == 0 && (v15 & 0xF) == 0;
  if ( ((v21 & 0x20) != 0 || 4 * (v21 & 0xF0) == 0)
    && ((v21 & 0x20) != 0
     || (COERCE_FLOAT(COERCE_UNSIGNED_INT(
                        (float)((float)((float)(COERCE_FLOAT(*((_DWORD *)a7 + 7) & v20) * 61440.0)
                                      + (float)(COERCE_FLOAT(*((_DWORD *)a7 + 3) & v20) * 61440.0))
                              + COERCE_FLOAT(*((_DWORD *)a7 + 15) & v20))
                      - 1.0) & v20) < 0.000081380211
       ? (v23 = 1, v24 = -16)
       : (v23 = 0, v24 = 16),
         *((_BYTE *)a7 + 65) = v24 ^ (v21 ^ v24) & 0xCF,
         v23)) )
  {
    v25 = (__m128)*(unsigned int *)a7;
    v26 = (__m128)*((unsigned int *)a7 + 5);
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v25.m128_f32[0] - v26.m128_f32[0]) & v20) > 0.000081380211
      || (v27 = (__m128)*((unsigned int *)a7 + 4),
          COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a7 + 1) - COERCE_FLOAT(*((_DWORD *)a7 + 4) ^ _xmm)) & v20) > 0.000081380211)
      || COERCE_FLOAT(COERCE_UNSIGNED_INT(
                        (float)((float)(v25.m128_f32[0] * v25.m128_f32[0]) + (float)(v27.m128_f32[0] * v27.m128_f32[0]))
                      - 1.0) & v20) >= 0.000081380211 )
    {
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(a9 - 1.0) & v20) < 0.0000011920929 )
      {
        if ( !v22 )
        {
          VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___(v48);
          result = v50;
          dword_1803DE488 += v50;
          return result;
        }
        VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___(v48);
      }
      else
      {
        if ( v22 )
        {
          if ( a5 )
            VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(v48);
          else
            VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(v48);
          result = v50;
          dword_1803DE488 += v50;
          return result;
        }
        if ( a5 )
        {
          VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(v48);
          result = v50;
          dword_1803DE488 += v50;
          return result;
        }
        VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(v48);
      }
      result = v50;
      dword_1803DE488 += v50;
      return result;
    }
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(a9 - 1.0) & v20) >= 0.0000011920929 )
    {
      if ( v22 )
      {
        if ( a5 )
          VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(v48);
        else
          VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(v48);
      }
      else if ( a5 )
      {
        VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(v48);
      }
      else
      {
        VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(v48);
      }
    }
    else if ( v22 )
    {
      v29 = _mm_movelh_ps(_mm_unpacklo_ps(v25, (__m128)*((unsigned int *)a7 + 1)), (__m128)0LL);
      v30 = a4 >> 1;
      v31 = _mm_movelh_ps(_mm_unpacklo_ps(v27, v26), (__m128)0LL);
      v32 = _mm_movelh_ps((__m128)*((unsigned __int64 *)a7 + 6), (__m128)_mm_load_si128((const __m128i *)&_xmm));
      if ( v50 )
      {
        v33 = v14;
        v34 = 0;
        v35 = 0;
        v36 = ((v50 - 1) >> 1) + 1;
        do
        {
          v37 = (__m128 *)(v11 + v35 + v12);
          v38 = (__m128 *)(v11 + v35);
          v39 = (__m128 *)(v15 + v34);
          v40 = (__m128 *)(v15 + v33 + v34);
          *v39 = _mm_or_ps(
                   _mm_andnot_ps(
                     (__m128)`DirectX::MathInternal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
                     _mm_add_ps(
                       _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(*v38, *v38, 85), v31), v32),
                       _mm_mul_ps(_mm_shuffle_ps(*v38, *v38, 0), v29))),
                   _mm_and_ps(
                     *v38,
                     (__m128)`DirectX::MathInternal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask));
          if ( v30 )
          {
            m128_f32 = (_OWORD *)v39[1].m128_f32;
            v42 = (char *)v38 - (char *)v39;
            v43 = v30;
            do
            {
              *m128_f32 = *(_OWORD *)((char *)m128_f32 + v42);
              ++m128_f32;
              --v43;
            }
            while ( v43 );
          }
          *v40 = _mm_or_ps(
                   _mm_andnot_ps(
                     (__m128)`DirectX::MathInternal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
                     _mm_add_ps(
                       _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(*v37, *v37, 85), v31), v32),
                       _mm_mul_ps(_mm_shuffle_ps(*v37, *v37, 0), v29))),
                   _mm_and_ps(
                     *v37,
                     (__m128)`DirectX::MathInternal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask));
          if ( v30 )
          {
            v44 = (_OWORD *)v40[1].m128_f32;
            v45 = v30;
            v46 = (char *)v37 - (char *)v40;
            do
            {
              *v44 = *(_OWORD *)((char *)v44 + v46);
              ++v44;
              --v45;
            }
            while ( v45 );
          }
          v33 = v47;
          v35 += 2 * v12;
          v34 += 2 * v47;
          --v36;
        }
        while ( v36 );
      }
    }
    else
    {
      VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___(v48);
    }
    result = v50;
    dword_1803DE484 += v50;
  }
  else
  {
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(a9 - 1.0) & v20) >= 0.0000011920929 )
    {
      if ( a5 )
        VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(
          v48,
          a7);
      else
        VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(
          v48,
          a7);
    }
    else
    {
      VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___(
        v48,
        a7);
    }
    result = v50;
    dword_1803DE48C += v50;
  }
  return result;
}
