/*
 * XREFs of VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x18011E5B4
 * Callers:
 *     ?EmitGeometry_TransferVertices@CRenderingBatchCommand@@KAXPEBUD2D_POINT_2F@@AEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@$$CBUVertexAAFixup_UVxN@@@@_K_NAEBVCMILMatrix@@54MAEBV?$StridedSpan@E@@4@Z @ 0x180065020 (-EmitGeometry_TransferVertices@CRenderingBatchCommand@@KAXPEBUD2D_POINT_2F@@AEBV-$StridedSpan@$$.c)
 *     ?EmitGeometry@CWarpRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand@@@Z @ 0x180066020 (-EmitGeometry@CWarpRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchComma.c)
 *     ?EmitGeometry@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand@@@Z @ 0x18011B180 (-EmitGeometry@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchComm.c)
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBV?$CCommonTransferParameters@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBVCMILMatrix@@1_N@Z @ 0x18011D230 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBV-$CCommonTransferParameters@U-.c)
 * Callees:
 *     <none>
 */

__m128 *__fastcall VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(
        __int64 a1,
        unsigned __int64 *a2)
{
  __m128 *result; // rax
  unsigned int v3; // ebx
  unsigned int v5; // r15d
  __m128 v6; // xmm8
  unsigned int v7; // r9d
  __m128 v8; // xmm11
  __m128 v9; // xmm4
  __m128 v10; // xmm5
  __m128 *v11; // rbp
  __m128 *v12; // r14
  int v13; // eax
  __m128 *v14; // rdi
  __m128 *v15; // r11
  __m128 *v16; // r10
  __m128 *v17; // r8
  __m128 v18; // xmm3
  __m128 v19; // xmm2
  __m128i v20; // xmm6
  __m128i v21; // xmm6
  __m128 v22; // xmm6
  __m128 v23; // xmm7
  __m128 v24; // xmm2
  __m128 v25; // xmm1
  __int64 v26; // rcx
  signed __int64 v27; // r10
  __m128 v28; // xmm1
  signed __int64 v29; // r11
  __m128 *v30; // rax
  __m128 v31; // xmm3
  __m128 v32; // xmm2
  __m128 v33; // xmm7
  __m128 v34; // xmm2
  __m128i v35; // xmm6
  __m128i v36; // xmm6
  __m128 v37; // xmm6
  __m128 v38; // xmm1
  __int64 v39; // rcx
  signed __int64 v40; // r8
  __m128 v41; // xmm1
  signed __int64 v42; // rdi
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h] BYREF

  result = (__m128 *)&retaddr;
  v3 = 0;
  v5 = *(_DWORD *)(a1 + 20);
  v6 = (__m128)a2[6];
  v7 = *(_DWORD *)(a1 + 40) >> 1;
  v8 = _mm_shuffle_ps((__m128)*(unsigned int *)(a1 + 44), (__m128)*(unsigned int *)(a1 + 44), 0);
  v9 = _mm_movelh_ps((__m128)*a2, (__m128)*a2);
  v10 = _mm_movelh_ps((__m128)a2[2], (__m128)a2[2]);
  if ( v5 )
  {
    do
    {
      v11 = (__m128 *)(*(_QWORD *)(a1 + 8) + (int)(v3 * *(_DWORD *)(a1 + 16)));
      v12 = (__m128 *)(*(_QWORD *)(a1 + 8) + (int)(*(_DWORD *)(a1 + 16) * (v3 + 1)));
      v13 = *(_DWORD *)(a1 + 64);
      v14 = (__m128 *)(*(_QWORD *)(a1 + 56) + (int)((v3 + 1) * v13));
      v15 = (__m128 *)(*(_QWORD *)(a1 + 56) + (int)(v3 * v13));
      v16 = (__m128 *)(*(_QWORD *)(a1 + 24) + (int)(v3 * *(_DWORD *)(a1 + 32)));
      v17 = (__m128 *)(*(_QWORD *)(a1 + 24) + (int)((v3 + 1) * *(_DWORD *)(a1 + 32)));
      v18 = *v16;
      v19 = _mm_sub_ps(_mm_shuffle_ps(*v11, DirectX::g_XMOne, 228), *v16);
      v20 = _mm_cvttps_epi32(
              _mm_mul_ps(
                _mm_mul_ps(
                  _mm_add_ps(
                    _mm_cvtepi32_ps((__m128i)_mm_xor_ps(
                                               _mm_and_ps(_mm_shuffle_ps(*v11, *v11, 255), g_MaskA8B8G8R8),
                                               g_FlipA8R8G8B8)),
                    g_FixAA8R8G8B8),
                  g_NormalizeA8R8G8B8),
                v8));
      v21 = _mm_packs_epi32(v20, v20);
      v22 = (__m128)_mm_packus_epi16(v21, v21);
      v23 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v19, v19, 85), v10), _mm_mul_ps(_mm_shuffle_ps(v19, v19, 0), v9));
      v24 = (__m128)DirectX::g_XMOne;
      if ( (_mm_movemask_ps(_mm_cmpeq_ps(v23, DirectX::g_XMZero)) & 3) != 3 )
      {
        v25 = _mm_mul_ps(v23, v23);
        v24.m128_f32[0] = 1.0 / fsqrt(v25.m128_f32[0] + _mm_shuffle_ps(v25, v25, 85).m128_f32[0]);
        v24 = _mm_mul_ps(_mm_shuffle_ps(v24, v24, 0), _mm_shuffle_ps(v18, v18, 170));
      }
      *v15 = _mm_shuffle_ps(
               _mm_add_ps(
                 _mm_add_ps(
                   _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v18, v18, 85), v10), v6),
                   _mm_mul_ps(_mm_shuffle_ps(v18, v18, 0), v9)),
                 _mm_mul_ps(v24, v23)),
               _mm_or_ps(
                 _mm_and_ps(v22, (__m128)`DirectX::MathInternal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask),
                 _mm_andnot_ps(
                   (__m128)`DirectX::MathInternal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
                   DirectX::g_XMOne)),
               228);
      if ( v24.m128_f32[0] > 1.0 && v16->m128_f32[3] == 0.0 )
        v24 = (__m128)LODWORD(FLOAT_1_0);
      if ( v7 )
      {
        v26 = v7;
        v27 = (char *)v16 - (char *)v11;
        v28 = _mm_shuffle_ps(v24, v24, 0);
        v29 = (char *)v15 - (char *)v11;
        v30 = v11 + 1;
        do
        {
          *(__m128 *)((char *)v30 + v29) = _mm_add_ps(
                                             _mm_mul_ps(_mm_sub_ps(*v30, *(__m128 *)((char *)v30 + v27)), v28),
                                             *(__m128 *)((char *)v30 + v27));
          ++v30;
          --v26;
        }
        while ( v26 );
      }
      v31 = *v17;
      v32 = _mm_sub_ps(_mm_shuffle_ps(*v12, DirectX::g_XMOne, 228), *v17);
      v33 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v32, v32, 85), v10), _mm_mul_ps(_mm_shuffle_ps(v32, v32, 0), v9));
      v34 = (__m128)DirectX::g_XMOne;
      v35 = _mm_cvttps_epi32(
              _mm_mul_ps(
                _mm_mul_ps(
                  _mm_add_ps(
                    _mm_cvtepi32_ps((__m128i)_mm_xor_ps(
                                               _mm_and_ps(_mm_shuffle_ps(*v12, *v12, 255), g_MaskA8B8G8R8),
                                               g_FlipA8R8G8B8)),
                    g_FixAA8R8G8B8),
                  g_NormalizeA8R8G8B8),
                v8));
      v36 = _mm_packs_epi32(v35, v35);
      v37 = (__m128)_mm_packus_epi16(v36, v36);
      result = (__m128 *)(_mm_movemask_ps(_mm_cmpeq_ps(v33, DirectX::g_XMZero)) & 3);
      if ( (_BYTE)result != 3 )
      {
        v38 = _mm_mul_ps(v33, v33);
        v34.m128_f32[0] = 1.0 / fsqrt(v38.m128_f32[0] + _mm_shuffle_ps(v38, v38, 85).m128_f32[0]);
        v34 = _mm_mul_ps(_mm_shuffle_ps(v34, v34, 0), _mm_shuffle_ps(v31, v31, 170));
      }
      *v14 = _mm_shuffle_ps(
               _mm_add_ps(
                 _mm_add_ps(
                   _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v31, v31, 85), v10), v6),
                   _mm_mul_ps(_mm_shuffle_ps(v31, v31, 0), v9)),
                 _mm_mul_ps(v34, v33)),
               _mm_or_ps(
                 _mm_and_ps(v37, (__m128)`DirectX::MathInternal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask),
                 _mm_andnot_ps(
                   (__m128)`DirectX::MathInternal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
                   DirectX::g_XMOne)),
               228);
      if ( v34.m128_f32[0] > 1.0 && v17->m128_f32[3] == 0.0 )
        v34 = (__m128)LODWORD(FLOAT_1_0);
      if ( v7 )
      {
        v39 = v7;
        v40 = (char *)v17 - (char *)v12;
        v41 = _mm_shuffle_ps(v34, v34, 0);
        v42 = (char *)v14 - (char *)v12;
        result = v12 + 1;
        do
        {
          *(__m128 *)((char *)result + v42) = _mm_add_ps(
                                                _mm_mul_ps(_mm_sub_ps(*result, *(__m128 *)((char *)result + v40)), v41),
                                                *(__m128 *)((char *)result + v40));
          ++result;
          --v39;
        }
        while ( v39 );
      }
      v3 += 2;
    }
    while ( v3 < v5 );
  }
  return result;
}
