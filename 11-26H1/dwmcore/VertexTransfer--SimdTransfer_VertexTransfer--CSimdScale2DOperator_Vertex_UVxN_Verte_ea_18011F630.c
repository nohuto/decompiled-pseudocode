/*
 * XREFs of VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x18011F630
 * Callers:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBV?$CCommonTransferParameters@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@AEBVCMILMatrix@@1_N@Z @ 0x180064D98 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBV-$CCommonTran.c)
 * Callees:
 *     ?Transform@?$CSimdScale2DOperator@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@VertexTransfer@@QEAQXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@T__m128@@2IPEAU?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@Z @ 0x180120450 (-Transform@-$CSimdScale2DOperator@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@VertexT.c)
 *     ?XMStoreHalf2@PackedVector@DirectX@@YQXPEAUXMHALF2@12@T__m128@@@Z @ 0x180120BF0 (-XMStoreHalf2@PackedVector@DirectX@@YQXPEAUXMHALF2@12@T__m128@@@Z.c)
 *     ?CalculateTBNFrameFrom3Vertices@@YA?AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBVCMILMatrix@@2@Z @ 0x1801212BC (-CalculateTBNFrameFrom3Vertices@@YA-AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV-$StridedSpan@$$CBU-$.c)
 */

void __fastcall VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
        __int64 *a1,
        unsigned __int64 *a2,
        unsigned __int64 *a3,
        __int64 a4)
{
  __int64 *v5; // rdx
  __m128i si128; // xmm8
  int v9; // r15d
  unsigned int v10; // eax
  unsigned int v11; // ebp
  __int128 v12; // xmm2
  __int64 v13; // r9
  __int64 v14; // rdi
  _OWORD *v15; // r13
  _OWORD *v16; // r12
  int v17; // r10d
  int v18; // r11d
  int v19; // r9d
  struct DirectX::PackedVector::XMHALF2 *v20; // rdx
  union __m128 *v21; // r8
  __m128 v22; // xmm6
  __m128 v23; // xmm5
  __m128 v24; // xmm4
  __m128 v25; // xmm3
  __m128 v26; // xmm1
  __m128 v27; // xmm2
  struct DirectX::PackedVector::XMHALF2 *v28; // rdx
  union __m128 *v29; // r8
  int v30; // [rsp+20h] [rbp-C8h]
  int v31; // [rsp+20h] [rbp-C8h]
  __m128i v32; // [rsp+40h] [rbp-A8h] BYREF
  _OWORD v33[6]; // [rsp+50h] [rbp-98h] BYREF
  unsigned int i; // [rsp+F0h] [rbp+8h]
  __int64 v35; // [rsp+F8h] [rbp+10h]

  v5 = a1 + 1;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v9 = *((_DWORD *)a1 + 10) >> 1;
  v35 = *a1;
  if ( a3 && a4 )
  {
    CalculateTBNFrameFrom3Vertices((unsigned int)&v32, *a1, (_DWORD)v5, (_DWORD)a3, a4);
    si128 = v32;
    v5 = a1 + 1;
  }
  v10 = *((_DWORD *)a1 + 5);
  v11 = 0;
  v12 = a2[6];
  v33[0] = _mm_movelh_ps((__m128)*a2, (__m128)*a2);
  v33[1] = _mm_movelh_ps((__m128)a2[2], (__m128)a2[2]);
  v33[2] = v12;
  for ( i = v10; v11 < i; v5 = a1 + 1 )
  {
    v14 = *v5 + (int)(*((_DWORD *)v5 + 2) * (v11 + 1));
    v13 = *v5 + (int)(v11 * *((_DWORD *)v5 + 2));
    v15 = (_OWORD *)(a1[7] + (int)(v11 * *((_DWORD *)a1 + 16)));
    v16 = (_OWORD *)(a1[7] + (int)((v11 + 1) * *((_DWORD *)a1 + 16)));
    VertexTransfer::CSimdScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>::Transform(
      (unsigned int)v33,
      v13,
      a1[3] + v11 * *((_DWORD *)a1 + 8),
      v13,
      v30,
      v9,
      (__int64)v15);
    VertexTransfer::CSimdScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>::Transform(
      (unsigned int)v33,
      v14,
      v18 + (v11 + 1) * v17,
      v19,
      v31,
      v9,
      (__int64)v16);
    v22 = *(__m128 *)(v35 + 16 * ((unsigned __int64)v11 >> 1));
    if ( a3 )
    {
      v23 = _mm_movelh_ps((__m128)*a3, (__m128)*((unsigned int *)a3 + 2));
      v24 = _mm_movelh_ps((__m128)a3[2], (__m128)*((unsigned int *)a3 + 6));
      v25 = _mm_movelh_ps((__m128)a3[6], (__m128)*((unsigned int *)a3 + 14));
      v26 = _mm_add_ps(
              _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v22, v22, 85), v24), v25),
              _mm_mul_ps(_mm_shuffle_ps(v22, v22, 0), v23));
      v27 = _mm_add_ps(
              _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v22, v22, 255), v24), v25),
              _mm_mul_ps(_mm_shuffle_ps(v22, v22, 170), v23));
    }
    else
    {
      v26 = _mm_shuffle_ps(v22, DirectX::g_XMZero, 228);
      v27 = (__m128)_mm_unpackhi_pd((__m128d)v22, DirectX::g_XMZero);
    }
    v15[1] = v26;
    v15[2] = si128;
    v16[1] = v27;
    v16[2] = si128;
    DirectX::PackedVector::XMStoreHalf2((DirectX::PackedVector *)((char *)v15 + 28), v20, v21);
    DirectX::PackedVector::XMStoreHalf2((DirectX::PackedVector *)((char *)v16 + 28), v28, v29);
    v11 += 2;
  }
}
