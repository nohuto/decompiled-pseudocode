/*
 * XREFs of VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x180120200
 * Callers:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBV?$CCommonTransferParameters@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@AEBVCMILMatrix@@1_N@Z @ 0x180064D98 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBV-$CCommonTran.c)
 * Callees:
 *     ?Transform@?$CSimdScale2DOperator@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@VertexTransfer@@QEAQXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@T__m128@@2IPEAU?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@Z @ 0x180120450 (-Transform@-$CSimdScale2DOperator@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@VertexT.c)
 *     ?XMStoreHalf2@PackedVector@DirectX@@YQXPEAUXMHALF2@12@T__m128@@@Z @ 0x180120BF0 (-XMStoreHalf2@PackedVector@DirectX@@YQXPEAUXMHALF2@12@T__m128@@@Z.c)
 *     ?CalculateTBNFrameFrom3Vertices@@YA?AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBVCMILMatrix@@2@Z @ 0x1801212BC (-CalculateTBNFrameFrom3Vertices@@YA-AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV-$StridedSpan@$$CBU-$.c)
 */

void __fastcall VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
        __int64 *a1,
        unsigned __int64 *a2,
        unsigned __int64 *a3,
        __int64 a4)
{
  __int64 *v5; // r8
  __m128i si128; // xmm7
  int v9; // r15d
  unsigned int v10; // eax
  unsigned int v11; // ebp
  __int128 v12; // xmm2
  __int64 v13; // rdi
  _OWORD *v14; // r13
  _OWORD *v15; // r12
  int v16; // r10d
  int v17; // r11d
  int v18; // r9d
  struct DirectX::PackedVector::XMHALF2 *v19; // rdx
  union __m128 *v20; // r8
  __m128 v21; // xmm6
  __m128 v22; // xmm5
  __m128 v23; // xmm4
  __m128 v24; // xmm3
  __m128 v25; // xmm1
  __m128 v26; // xmm2
  struct DirectX::PackedVector::XMHALF2 *v27; // rdx
  union __m128 *v28; // r8
  int v29; // [rsp+20h] [rbp-B8h]
  int v30; // [rsp+20h] [rbp-B8h]
  __m128i v31; // [rsp+40h] [rbp-98h] BYREF
  _OWORD v32[5]; // [rsp+50h] [rbp-88h] BYREF
  unsigned int i; // [rsp+E0h] [rbp+8h]
  __int64 v34; // [rsp+E8h] [rbp+10h]

  v5 = a1 + 1;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v9 = *((_DWORD *)a1 + 10) >> 1;
  v34 = *a1;
  if ( a3 && a4 )
  {
    CalculateTBNFrameFrom3Vertices((unsigned int)&v31, *a1, (_DWORD)v5, (_DWORD)a3, a4);
    si128 = v31;
    v5 = a1 + 1;
  }
  v10 = *((_DWORD *)a1 + 5);
  v11 = 0;
  v12 = a2[6];
  v32[0] = _mm_movelh_ps((__m128)*a2, (__m128)*a2);
  v32[1] = _mm_movelh_ps((__m128)a2[2], (__m128)a2[2]);
  v32[2] = v12;
  for ( i = v10; v11 < i; v5 = a1 + 1 )
  {
    v13 = *v5 + (int)(*((_DWORD *)v5 + 2) * (v11 + 1));
    v14 = (_OWORD *)(a1[7] + (int)(v11 * *((_DWORD *)a1 + 16)));
    v15 = (_OWORD *)(a1[7] + (int)((v11 + 1) * *((_DWORD *)a1 + 16)));
    VertexTransfer::CSimdScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>::Transform(
      (unsigned int)v32,
      *(_DWORD *)v5 + v11 * *((_DWORD *)v5 + 2),
      a1[3] + v11 * *((_DWORD *)a1 + 8),
      a4,
      v29,
      v9,
      (__int64)v14);
    VertexTransfer::CSimdScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>::Transform(
      (unsigned int)v32,
      v13,
      v17 + (v11 + 1) * v16,
      v18,
      v30,
      v9,
      (__int64)v15);
    v21 = *(__m128 *)(v34 + 16 * ((unsigned __int64)v11 >> 1));
    if ( a3 )
    {
      v22 = _mm_movelh_ps((__m128)*a3, (__m128)*((unsigned int *)a3 + 2));
      v23 = _mm_movelh_ps((__m128)a3[2], (__m128)*((unsigned int *)a3 + 6));
      v24 = _mm_movelh_ps((__m128)a3[6], (__m128)*((unsigned int *)a3 + 14));
      v25 = _mm_add_ps(
              _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v21, v21, 85), v23), v24),
              _mm_mul_ps(_mm_shuffle_ps(v21, v21, 0), v22));
      v26 = _mm_add_ps(
              _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v21, v21, 255), v23), v24),
              _mm_mul_ps(_mm_shuffle_ps(v21, v21, 170), v22));
    }
    else
    {
      v25 = _mm_shuffle_ps(v21, DirectX::g_XMZero, 228);
      v26 = (__m128)_mm_unpackhi_pd((__m128d)v21, DirectX::g_XMZero);
    }
    v14[1] = v25;
    v14[2] = si128;
    v15[1] = v26;
    v15[2] = si128;
    DirectX::PackedVector::XMStoreHalf2((DirectX::PackedVector *)((char *)v14 + 28), v19, v20);
    DirectX::PackedVector::XMStoreHalf2((DirectX::PackedVector *)((char *)v15 + 28), v27, v28);
    v11 += 2;
  }
}
