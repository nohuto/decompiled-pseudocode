/*
 * XREFs of VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x180065540
 * Callers:
 *     ?EmitGeometry_TransferVertices@CRenderingBatchCommand@@KAXPEBUD2D_POINT_2F@@AEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@$$CBUVertexAAFixup_UVxN@@@@_K_NAEBVCMILMatrix@@54MAEBV?$StridedSpan@E@@4@Z @ 0x180065020 (-EmitGeometry_TransferVertices@CRenderingBatchCommand@@KAXPEBUD2D_POINT_2F@@AEBV-$StridedSpan@$$.c)
 *     ?EmitGeometry@CWarpRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand@@@Z @ 0x180066020 (-EmitGeometry@CWarpRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchComma.c)
 *     ?EmitGeometry@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand@@@Z @ 0x18011B180 (-EmitGeometry@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchComm.c)
 * Callees:
 *     <none>
 */

__m128 *__fastcall VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___(
        __int64 a1,
        unsigned __int64 *a2)
{
  __m128 *result; // rax
  unsigned int v3; // r11d
  unsigned int v4; // r14d
  unsigned int v6; // r9d
  __m128 v7; // xmm9
  __m128 v8; // xmm6
  __m128 v9; // xmm7
  __m128 *v10; // rbp
  __m128 *v11; // rbx
  int v12; // eax
  __m128 *v13; // rdi
  __m128 *v14; // r10
  __m128 *v15; // rsi
  __m128 *v16; // r8
  __m128 v17; // xmm2
  __m128 v18; // xmm0
  __m128 v19; // xmm5
  __m128 v20; // xmm1
  __m128 v21; // xmm0
  __m128 v22; // xmm3
  __int64 v23; // rcx
  signed __int64 v24; // rsi
  __m128 v25; // xmm2
  signed __int64 v26; // r10
  __m128 *v27; // rax
  __m128 v28; // xmm2
  __m128 v29; // xmm0
  __m128 v30; // xmm3
  __m128 v31; // xmm1
  __m128 v32; // xmm0
  __m128 v33; // xmm5
  __int64 v34; // rcx
  signed __int64 v35; // r8
  __m128 v36; // xmm2
  signed __int64 v37; // rdi
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h] BYREF

  result = (__m128 *)&retaddr;
  v3 = 0;
  v4 = *(_DWORD *)(a1 + 20);
  v6 = *(_DWORD *)(a1 + 40) >> 1;
  v7 = (__m128)a2[6];
  v8 = _mm_movelh_ps((__m128)*a2, (__m128)*a2);
  v9 = _mm_movelh_ps((__m128)a2[2], (__m128)a2[2]);
  if ( v4 )
  {
    do
    {
      v10 = (__m128 *)(*(_QWORD *)(a1 + 8) + (int)(*(_DWORD *)(a1 + 16) * v3));
      v11 = (__m128 *)(*(_QWORD *)(a1 + 8) + (int)(*(_DWORD *)(a1 + 16) * (v3 + 1)));
      v12 = *(_DWORD *)(a1 + 64);
      v13 = (__m128 *)(*(_QWORD *)(a1 + 56) + (int)((v3 + 1) * v12));
      v14 = (__m128 *)(*(_QWORD *)(a1 + 56) + (int)(v3 * v12));
      v15 = (__m128 *)(*(_QWORD *)(a1 + 24) + (int)(v3 * *(_DWORD *)(a1 + 32)));
      v16 = (__m128 *)(*(_QWORD *)(a1 + 24) + (int)((v3 + 1) * *(_DWORD *)(a1 + 32)));
      v17 = *v15;
      v18 = _mm_sub_ps(_mm_shuffle_ps(*v10, DirectX::g_XMOne, 228), *v15);
      v19 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v18, v18, 85), v9), _mm_mul_ps(_mm_shuffle_ps(v18, v18, 0), v8));
      if ( (_mm_movemask_ps(_mm_cmpeq_ps(v19, DirectX::g_XMZero)) & 3) == 3 )
      {
        v22 = (__m128)DirectX::g_XMOne;
      }
      else
      {
        v20 = _mm_mul_ps(v19, v19);
        v21 = (__m128)DirectX::g_XMOne;
        v21.m128_f32[0] = 1.0 / fsqrt(v20.m128_f32[0] + _mm_shuffle_ps(v20, v20, 85).m128_f32[0]);
        v22 = _mm_mul_ps(_mm_shuffle_ps(v17, v17, 170), _mm_shuffle_ps(v21, v21, 0));
      }
      *v14 = _mm_shuffle_ps(
               _mm_add_ps(
                 _mm_add_ps(
                   _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v17, v17, 85), v9), v7),
                   _mm_mul_ps(_mm_shuffle_ps(v17, v17, 0), v8)),
                 _mm_mul_ps(v22, v19)),
               _mm_or_ps(
                 _mm_and_ps(*v10, (__m128)`DirectX::MathInternal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask),
                 _mm_andnot_ps(
                   (__m128)`DirectX::MathInternal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
                   DirectX::g_XMOne)),
               228);
      if ( v22.m128_f32[0] > 1.0 && v15->m128_f32[3] == 0.0 )
        v22 = (__m128)LODWORD(FLOAT_1_0);
      if ( v6 )
      {
        v23 = v6;
        v24 = (char *)v15 - (char *)v10;
        v25 = _mm_shuffle_ps(v22, v22, 0);
        v26 = (char *)v14 - (char *)v10;
        v27 = v10 + 1;
        do
        {
          *(__m128 *)((char *)v27 + v26) = _mm_add_ps(
                                             _mm_mul_ps(_mm_sub_ps(*v27, *(__m128 *)((char *)v27 + v24)), v25),
                                             *(__m128 *)((char *)v27 + v24));
          ++v27;
          --v23;
        }
        while ( v23 );
      }
      v28 = *v16;
      v29 = _mm_sub_ps(_mm_shuffle_ps(*v11, DirectX::g_XMOne, 228), *v16);
      v30 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v29, v29, 85), v9), _mm_mul_ps(_mm_shuffle_ps(v29, v29, 0), v8));
      result = (__m128 *)(_mm_movemask_ps(_mm_cmpeq_ps(v30, DirectX::g_XMZero)) & 3);
      if ( (_BYTE)result == 3 )
      {
        v33 = (__m128)DirectX::g_XMOne;
      }
      else
      {
        v31 = _mm_mul_ps(v30, v30);
        v32 = (__m128)DirectX::g_XMOne;
        v32.m128_f32[0] = 1.0 / fsqrt(v31.m128_f32[0] + _mm_shuffle_ps(v31, v31, 85).m128_f32[0]);
        v33 = _mm_mul_ps(_mm_shuffle_ps(v28, v28, 170), _mm_shuffle_ps(v32, v32, 0));
      }
      *v13 = _mm_shuffle_ps(
               _mm_add_ps(
                 _mm_add_ps(
                   _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v28, v28, 85), v9), v7),
                   _mm_mul_ps(_mm_shuffle_ps(v28, v28, 0), v8)),
                 _mm_mul_ps(v33, v30)),
               _mm_or_ps(
                 _mm_and_ps(*v11, (__m128)`DirectX::MathInternal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask),
                 _mm_andnot_ps(
                   (__m128)`DirectX::MathInternal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
                   DirectX::g_XMOne)),
               228);
      if ( v33.m128_f32[0] > 1.0 && v16->m128_f32[3] == 0.0 )
        v33 = (__m128)LODWORD(FLOAT_1_0);
      if ( v6 )
      {
        v34 = v6;
        v35 = (char *)v16 - (char *)v11;
        v36 = _mm_shuffle_ps(v33, v33, 0);
        v37 = (char *)v13 - (char *)v11;
        result = v11 + 1;
        do
        {
          *(__m128 *)((char *)result + v37) = _mm_add_ps(
                                                _mm_mul_ps(_mm_sub_ps(*result, *(__m128 *)((char *)result + v35)), v36),
                                                *(__m128 *)((char *)result + v35));
          ++result;
          --v34;
        }
        while ( v34 );
      }
      v3 += 2;
    }
    while ( v3 < v4 );
  }
  return result;
}
