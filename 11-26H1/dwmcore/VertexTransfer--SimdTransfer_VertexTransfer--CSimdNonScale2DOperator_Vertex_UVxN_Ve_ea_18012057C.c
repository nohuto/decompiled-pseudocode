/*
 * XREFs of VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x18012057C
 * Callers:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBV?$CCommonTransferParameters@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@AEBVCMILMatrix@@1_N@Z @ 0x180064D98 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBV-$CCommonTran.c)
 * Callees:
 *     ?XMStoreHalf2@PackedVector@DirectX@@YQXPEAUXMHALF2@12@T__m128@@@Z @ 0x180120BF0 (-XMStoreHalf2@PackedVector@DirectX@@YQXPEAUXMHALF2@12@T__m128@@@Z.c)
 *     ?CalculateTBNFrameFrom3Vertices@@YA?AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBVCMILMatrix@@2@Z @ 0x1801212BC (-CalculateTBNFrameFrom3Vertices@@YA-AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV-$StridedSpan@$$CBU-$.c)
 */

void __fastcall VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
        __int64 *a1,
        struct DirectX::PackedVector::XMHALF2 *a2,
        unsigned __int64 *a3,
        __int64 a4)
{
  __int64 *v4; // r13
  __int64 v5; // r15
  unsigned int v9; // ebp
  __m128i si128; // xmm11
  __m128 v11; // xmm10
  unsigned int v12; // r14d
  unsigned int v13; // r12d
  __m128 v14; // xmm7
  __m128 v15; // xmm8
  __m128 v16; // xmm9
  union __m128 *v17; // r8
  __m128 *v18; // r11
  __m128 *v19; // r10
  __int64 v20; // r9
  __int64 v21; // rdi
  __m128i v22; // xmm3
  __m128i v23; // xmm3
  _OWORD *v24; // rax
  __int64 v25; // rcx
  char *v26; // r11
  __m128i v27; // xmm3
  __m128i v28; // xmm3
  _OWORD *v29; // rax
  __int64 v30; // rcx
  char *v31; // r10
  __m128 v32; // xmm6
  __m128 v33; // xmm5
  __m128 v34; // xmm4
  __m128 v35; // xmm3
  __m128 v36; // xmm1
  __m128 v37; // xmm2
  struct DirectX::PackedVector::XMHALF2 *v38; // rdx
  union __m128 *v39; // r8
  __m128i v40; // [rsp+30h] [rbp-98h] BYREF

  v4 = a1 + 1;
  v5 = *a1;
  v9 = *((_DWORD *)a1 + 10) >> 1;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v11 = _mm_shuffle_ps((__m128)*((unsigned int *)a1 + 11), (__m128)*((unsigned int *)a1 + 11), 0);
  if ( a3 && a4 )
  {
    CalculateTBNFrameFrom3Vertices((unsigned int)&v40, v5, (_DWORD)v4, (_DWORD)a3, a4);
    si128 = v40;
  }
  v12 = 0;
  v13 = *((_DWORD *)a1 + 5);
  v14 = (__m128)*(unsigned __int64 *)a2;
  v15 = (__m128)*((unsigned __int64 *)a2 + 2);
  v16 = _mm_movelh_ps((__m128)*((unsigned __int64 *)a2 + 6), (__m128)_mm_load_si128((const __m128i *)&_xmm));
  if ( v13 )
  {
    do
    {
      v17 = (union __m128 *)(v12 + 1);
      v18 = (__m128 *)(*v4 + (int)(v12 * *((_DWORD *)v4 + 2)));
      v19 = (__m128 *)(*v4 + (int)(*((_DWORD *)v4 + 2) * (v12 + 1)));
      v20 = a1[7] + (int)(v12 * *((_DWORD *)a1 + 16));
      v21 = a1[7] + (int)v17 * *((_DWORD *)a1 + 16);
      v22 = _mm_cvttps_epi32(
              _mm_mul_ps(
                _mm_mul_ps(
                  _mm_add_ps(
                    _mm_cvtepi32_ps((__m128i)_mm_xor_ps(
                                               _mm_and_ps(_mm_shuffle_ps(*v18, *v18, 255), g_MaskA8B8G8R8),
                                               g_FlipA8R8G8B8)),
                    g_FixAA8R8G8B8),
                  g_NormalizeA8R8G8B8),
                _mm_or_ps(
                  _mm_andnot_ps(
                    (__m128)`DirectX::MathInternal::PermuteHelper<228,1,1,1,0>::Permute'::`2'::selectMask,
                    v11),
                  _mm_and_ps(
                    (__m128)`DirectX::MathInternal::PermuteHelper<228,1,1,1,0>::Permute'::`2'::selectMask,
                    DirectX::g_XMOne))));
      v23 = _mm_packs_epi32(v22, v22);
      *(__m128 *)v20 = _mm_or_ps(
                         _mm_andnot_ps(
                           (__m128)`DirectX::MathInternal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
                           _mm_add_ps(
                             _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(*v18, *v18, 85), v15), v16),
                             _mm_mul_ps(_mm_shuffle_ps(*v18, *v18, 0), v14))),
                         _mm_and_ps(
                           (__m128)_mm_packus_epi16(v23, v23),
                           (__m128)`DirectX::MathInternal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask));
      if ( v9 )
      {
        v24 = (_OWORD *)(v20 + 48);
        v25 = v9;
        v26 = (char *)v18 - v20;
        do
        {
          *v24 = *(_OWORD *)((char *)v24 + (_QWORD)v26 - 32);
          ++v24;
          --v25;
        }
        while ( v25 );
      }
      v27 = _mm_cvttps_epi32(
              _mm_mul_ps(
                _mm_mul_ps(
                  _mm_add_ps(
                    _mm_cvtepi32_ps((__m128i)_mm_xor_ps(
                                               _mm_and_ps(_mm_shuffle_ps(*v19, *v19, 255), g_MaskA8B8G8R8),
                                               g_FlipA8R8G8B8)),
                    g_FixAA8R8G8B8),
                  g_NormalizeA8R8G8B8),
                _mm_or_ps(
                  _mm_andnot_ps(
                    (__m128)`DirectX::MathInternal::PermuteHelper<228,1,1,1,0>::Permute'::`2'::selectMask,
                    v11),
                  _mm_and_ps(
                    (__m128)`DirectX::MathInternal::PermuteHelper<228,1,1,1,0>::Permute'::`2'::selectMask,
                    DirectX::g_XMOne))));
      v28 = _mm_packs_epi32(v27, v27);
      *(__m128 *)v21 = _mm_or_ps(
                         _mm_andnot_ps(
                           (__m128)`DirectX::MathInternal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
                           _mm_add_ps(
                             _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(*v19, *v19, 85), v15), v16),
                             _mm_mul_ps(_mm_shuffle_ps(*v19, *v19, 0), v14))),
                         _mm_and_ps(
                           (__m128)_mm_packus_epi16(v28, v28),
                           (__m128)`DirectX::MathInternal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask));
      if ( v9 )
      {
        v29 = (_OWORD *)(v21 + 48);
        v30 = v9;
        v31 = (char *)v19 - v21;
        do
        {
          *v29 = *(_OWORD *)((char *)v29 + (_QWORD)v31 - 32);
          ++v29;
          --v30;
        }
        while ( v30 );
      }
      v32 = *(__m128 *)(v5 + 16 * ((unsigned __int64)v12 >> 1));
      if ( a3 )
      {
        v33 = _mm_movelh_ps((__m128)*a3, (__m128)*((unsigned int *)a3 + 2));
        v34 = _mm_movelh_ps((__m128)a3[2], (__m128)*((unsigned int *)a3 + 6));
        v35 = _mm_movelh_ps((__m128)a3[6], (__m128)*((unsigned int *)a3 + 14));
        v36 = _mm_add_ps(
                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v32, v32, 85), v34), v35),
                _mm_mul_ps(_mm_shuffle_ps(v32, v32, 0), v33));
        v37 = _mm_add_ps(
                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v32, v32, 255), v34), v35),
                _mm_mul_ps(_mm_shuffle_ps(v32, v32, 170), v33));
      }
      else
      {
        v36 = _mm_shuffle_ps(v32, DirectX::g_XMZero, 228);
        v37 = (__m128)_mm_unpackhi_pd((__m128d)v32, DirectX::g_XMZero);
      }
      *(__m128 *)(v20 + 16) = v36;
      *(__m128i *)(v20 + 32) = si128;
      *(__m128 *)(v21 + 16) = v37;
      *(__m128i *)(v21 + 32) = si128;
      DirectX::PackedVector::XMStoreHalf2((DirectX::PackedVector *)(v20 + 28), a2, v17);
      DirectX::PackedVector::XMStoreHalf2((DirectX::PackedVector *)(v21 + 28), v38, v39);
      v12 += 2;
    }
    while ( v12 < v13 );
  }
}
