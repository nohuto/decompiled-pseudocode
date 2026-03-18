/*
 * XREFs of ?XMConvertFloatToHalf@PackedVector@DirectX@@YAGM@Z @ 0x1801211E0
 * Callers:
 *     ?XMConvertFloatToHalfStream@PackedVector@DirectX@@YAPEAGPEAG_KPEBM11@Z @ 0x180120DD8 (-XMConvertFloatToHalfStream@PackedVector@DirectX@@YAPEAGPEAG_KPEBM11@Z.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x180120ED8 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdNonScale2DOperator_Vertex_UVxN_Ve_ea_180120ED8.c)
 * Callees:
 *     <none>
 */

unsigned __int16 __fastcall DirectX::PackedVector::XMConvertFloatToHalf(DirectX::PackedVector *this, float a2)
{
  __m128i v2; // xmm0
  unsigned int v3; // eax
  unsigned int v4; // r10d
  int v5; // eax
  unsigned int v6; // edx
  unsigned int v7; // ecx

  v3 = _mm_cvtsi128_si32(v2);
  v4 = v3 & 0x7FFFFFFF;
  v5 = HIWORD(v3) & 0x8000;
  if ( v4 >= 0x47800000 )
  {
    LOWORD(v6) = 0;
    if ( v4 > 0x7F800000 )
      v6 = (v4 & 0x3FE000 | 0x400000) >> 13;
    LOWORD(v6) = v6 | 0x7C00;
  }
  else
  {
    if ( v4 <= 0x33000000 )
      return v5;
    if ( v4 < 0x38800000 )
    {
      v7 = v4 >> 23;
      LOWORD(v5) = (((v4 & 0x7FFFFF | 0x800000) >> (125 - v7 + 1))
                  + ((unsigned __int8)((v4 & 0x7FFFFF | 0x800000) >> (125 - v7)) & (unsigned __int8)(((v4 & 0x7FFFFF | 0x800000) >> (125 - v7 + 1)) | ((((1 << (125 - v7)) - 1) & (v4 & 0x7FFFFF | 0x800000)) != 0)) & 1)) | v5;
      return v5;
    }
    v6 = (((((v4 - 939524096) >> 13) & 1) + v4 - 939524096 + 4095) >> 13) & 0x7FFF;
  }
  LOWORD(v5) = v6 | v5;
  return v5;
}
