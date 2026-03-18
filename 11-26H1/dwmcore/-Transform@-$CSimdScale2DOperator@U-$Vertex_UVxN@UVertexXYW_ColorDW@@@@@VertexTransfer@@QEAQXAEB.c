/*
 * XREFs of ?Transform@?$CSimdScale2DOperator@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@VertexTransfer@@QEAQXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@T__m128@@2IPEAU3@@Z @ 0x18011F470
 * Callers:
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x18011F2A0 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdScale2DOperator_Vertex_UVxN_Verte_ea_18011F2A0.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
__m128 *__fastcall VertexTransfer::CSimdScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW>>::Transform(
        __m128 *a1,
        __m128 *a2,
        __m128 *a3,
        double a4,
        int a5,
        unsigned int a6,
        __m128 *a7)
{
  __m128 v7; // xmm4
  __m128 v8; // xmm5
  __m128 v9; // xmm6
  __m128 v10; // xmm3
  __m128 v11; // xmm8
  __m128 v12; // xmm4
  __m128 v13; // xmm3
  __m128 *result; // rax
  __m128 v15; // xmm1
  __m128 v16; // xmm0
  __m128 v17; // xmm4
  char *v18; // r8
  __int64 v19; // r9
  __m128 v20; // xmm2

  v8 = *a3;
  v9 = v7;
  v10 = _mm_sub_ps(_mm_shuffle_ps(*(__m128 *)&a4, DirectX::g_XMOne, 228), *a3);
  v11 = a1[1];
  v12 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v10, v10, 85), v11), _mm_mul_ps(_mm_shuffle_ps(v10, v10, 0), *a1));
  v13 = (__m128)DirectX::g_XMOne;
  result = (__m128 *)(_mm_movemask_ps(_mm_cmpeq_ps(v12, DirectX::g_XMZero)) & 3);
  if ( (_BYTE)result != 3 )
  {
    v15 = _mm_mul_ps(v12, v12);
    v13.m128_f32[0] = 1.0 / fsqrt(v15.m128_f32[0] + _mm_shuffle_ps(v15, v15, 85).m128_f32[0]);
    v13 = _mm_mul_ps(_mm_shuffle_ps(v13, v13, 0), _mm_shuffle_ps(v8, v8, 170));
  }
  v16 = _mm_mul_ps(v13, v12);
  v17 = (__m128)LODWORD(FLOAT_1_0);
  *a7 = _mm_shuffle_ps(
          _mm_add_ps(
            _mm_add_ps(
              _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v8, v8, 85), v11), a1[2]),
              _mm_mul_ps(_mm_shuffle_ps(v8, v8, 0), *a1)),
            v16),
          _mm_or_ps(
            _mm_andnot_ps(
              (__m128)`DirectX::MathInternal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
              DirectX::g_XMOne),
            _mm_and_ps(v9, (__m128)`DirectX::MathInternal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask)),
          228);
  if ( v13.m128_f32[0] <= 1.0 || a3->m128_f32[3] != 0.0 )
    v17 = v13;
  if ( a6 )
  {
    v18 = (char *)((char *)a3 - (char *)a2);
    result = a2 + 1;
    v19 = a6;
    v20 = _mm_shuffle_ps(v17, v17, 0);
    do
    {
      *(__m128 *)((char *)result + (char *)a7 - (char *)a2) = _mm_add_ps(
                                                                _mm_mul_ps(
                                                                  _mm_sub_ps(*result, *(__m128 *)&v18[(_QWORD)result]),
                                                                  v20),
                                                                *(__m128 *)&v18[(_QWORD)result]);
      ++result;
      --v19;
    }
    while ( v19 );
  }
  return result;
}
