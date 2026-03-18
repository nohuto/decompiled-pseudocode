/*
 * XREFs of VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801E4610
 * Callers:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBV?$CCommonTransferParameters@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@AEBVCMILMatrix@@1_N@Z @ 0x180064D98 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBV-$CCommonTran.c)
 * Callees:
 *     VertexTransfer::TransformDeviceSpacePositionAndNormal @ 0x18011FE34 (VertexTransfer--TransformDeviceSpacePositionAndNormal.c)
 *     ?CalculateTBNFrameFrom3Vertices@@YA?AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBVCMILMatrix@@2@Z @ 0x1801212BC (-CalculateTBNFrameFrom3Vertices@@YA-AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV-$StridedSpan@$$CBU-$.c)
 *     ?BlendStraightColorDW@@YAKKM@Z @ 0x180213C28 (-BlendStraightColorDW@@YAKKM@Z.c)
 *     ?Transform@?$CNonScale2DOperator@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@VertexTransfer@@QEAAXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@IAEBVCMILMatrix@@PEAU?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@Z @ 0x18025BFDC (-Transform@-$CNonScale2DOperator@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@VertexTr.c)
 */

__m128i *__fastcall VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
        __int64 a1,
        int a2,
        CMILMatrix *a3,
        __int64 a4)
{
  __m128i *result; // rax
  unsigned int v5; // ebx
  struct D2D_POINT_2F *v6; // rbp
  unsigned int v8; // r14d
  float v11; // xmm6_4
  __int64 v12; // r11
  unsigned int v13; // eax
  __int64 v14; // r10
  __m128i si128; // [rsp+30h] [rbp-38h] BYREF
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h] BYREF

  result = (__m128i *)&retaddr;
  v5 = 0;
  v6 = *(struct D2D_POINT_2F **)a1;
  v8 = *(_DWORD *)(a1 + 20);
  v11 = *(float *)(a1 + 44);
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  if ( a3 && a4 )
  {
    result = (__m128i *)CalculateTBNFrameFrom3Vertices(
                          (__int64)&si128,
                          (__int64)v6,
                          (__int64 *)(a1 + 8),
                          (__int64)a3,
                          a4);
    si128 = *result;
  }
  if ( v8 )
  {
    do
    {
      VertexTransfer::CNonScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>::Transform(
        a1,
        *(_DWORD *)(a1 + 8) + *(_DWORD *)(a1 + 16) * v5,
        *(_DWORD *)(a1 + 40),
        a2,
        *(_QWORD *)(a1 + 56) + (int)(*(_DWORD *)(a1 + 64) * v5));
      v13 = BlendStraightColorDW(*(_DWORD *)(v12 + 12), v11);
      *(_DWORD *)(v14 + 12) = v13;
      result = (__m128i *)VertexTransfer::TransformDeviceSpacePositionAndNormal(v6++, a3, &si128, v14);
      ++v5;
    }
    while ( v5 < v8 );
  }
  return result;
}
