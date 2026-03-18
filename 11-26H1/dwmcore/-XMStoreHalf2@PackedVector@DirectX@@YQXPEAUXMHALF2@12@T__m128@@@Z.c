/*
 * XREFs of ?XMStoreHalf2@PackedVector@DirectX@@YQXPEAUXMHALF2@12@T__m128@@@Z @ 0x180120BF0
 * Callers:
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x18011F630 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdScale2DOperator_Vertex_UVxN_Verte_ea_18011F630.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x18011FF44 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdScale2DOperator_Vertex_UVxN_Verte_ea_18011FF44.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x180120200 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdScale2DOperator_Vertex_UVxN_Verte_ea_180120200.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x18012057C (VertexTransfer--SimdTransfer_VertexTransfer--CSimdNonScale2DOperator_Vertex_UVxN_Ve_ea_18012057C.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801208D4 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdNonScale2DOperator_Vertex_UVxN_Ve_ea_1801208D4.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectX::PackedVector::XMStoreHalf2(
        DirectX::PackedVector *this,
        struct DirectX::PackedVector::XMHALF2 *a2,
        union __m128 *a3)
{
  __m128 v3; // xmm1
  unsigned int v4; // r11d
  unsigned int v5; // r10d
  int v6; // r11d
  unsigned int v7; // r10d
  unsigned int v8; // r10d
  unsigned int v9; // r9d
  int v10; // r10d
  unsigned int v11; // r9d
  unsigned int v12; // eax
  unsigned int v13; // r8d
  unsigned int v14; // eax
  unsigned int v15; // r8d

  v4 = _mm_cvtsi128_si32((__m128i)v3);
  v5 = v4 & 0x7FFFFFFF;
  v6 = HIWORD(v4) & 0x8000;
  if ( v5 >= 0x47800000 )
  {
    if ( v5 <= 0x7F800000 )
      LOWORD(v7) = 0;
    else
      v7 = (v5 & 0x3FE000 | 0x400000) >> 13;
    LOWORD(v7) = v7 | 0x7C00;
  }
  else if ( v5 <= 0x33000000 )
  {
    LOWORD(v7) = 0;
  }
  else if ( v5 < 0x38800000 )
  {
    v12 = v5;
    v7 = v5 & 0x7FFFFF | 0x800000;
    v13 = v7 >> (125 - (v12 >> 23) + 1);
    LOWORD(v7) = v13
               + ((unsigned __int8)(v7 >> (125 - (v12 >> 23))) & (unsigned __int8)(v13 | ((((1 << (125 - (v12 >> 23)))
                                                                                          - 1) & v7) != 0)) & 1);
  }
  else
  {
    v7 = (((((v5 - 939524096) >> 13) & 1) + v5 - 939520001) >> 13) & 0x7FFF;
  }
  *(_WORD *)this = v7 | v6;
  v8 = _mm_cvtsi128_si32((__m128i)_mm_shuffle_ps(v3, v3, 85));
  v9 = v8 & 0x7FFFFFFF;
  v10 = HIWORD(v8) & 0x8000;
  if ( v9 >= 0x47800000 )
  {
    if ( v9 <= 0x7F800000 )
      LOWORD(v11) = 0;
    else
      v11 = (v9 & 0x3FE000 | 0x400000) >> 13;
    LOWORD(v11) = v11 | 0x7C00;
  }
  else if ( v9 <= 0x33000000 )
  {
    LOWORD(v11) = 0;
  }
  else if ( v9 < 0x38800000 )
  {
    v14 = v9;
    v11 = v9 & 0x7FFFFF | 0x800000;
    v15 = v11 >> (125 - (v14 >> 23) + 1);
    LOWORD(v11) = v15
                + ((unsigned __int8)(v11 >> (125 - (v14 >> 23))) & (unsigned __int8)(v15 | ((((1 << (125 - (v14 >> 23)))
                                                                                            - 1) & v11) != 0)) & 1);
  }
  else
  {
    v11 = (((((v9 - 939524096) >> 13) & 1) + v9 - 939520001) >> 13) & 0x7FFF;
  }
  *((_WORD *)this + 1) = v11 | v10;
}
