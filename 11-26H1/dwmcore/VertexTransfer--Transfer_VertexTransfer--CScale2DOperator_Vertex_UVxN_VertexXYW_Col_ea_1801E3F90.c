/*
 * XREFs of VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801E3F90
 * Callers:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBV?$CCommonTransferParameters@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@AEBVCMILMatrix@@1_N@Z @ 0x180064D98 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBV-$CCommonTran.c)
 * Callees:
 *     ?BlendPremultipliedColorDW@@YAKKM@Z @ 0x18011EAC4 (-BlendPremultipliedColorDW@@YAKKM@Z.c)
 *     VertexTransfer::TransformDeviceSpacePositionAndNormal @ 0x18011FE34 (VertexTransfer--TransformDeviceSpacePositionAndNormal.c)
 *     ?CalculateTBNFrameFrom3Vertices@@YA?AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBVCMILMatrix@@2@Z @ 0x1801212BC (-CalculateTBNFrameFrom3Vertices@@YA-AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV-$StridedSpan@$$CBU-$.c)
 *     ?Transform@?$CScale2DOperator@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@VertexTransfer@@QEAAXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@IAEBVCMILMatrix@@PEAU?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@Z @ 0x18025C0A8 (-Transform@-$CScale2DOperator@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@VertexTrans.c)
 */

__m128i *__fastcall VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
        __int64 a1,
        __int64 a2,
        CMILMatrix *a3,
        __int64 a4)
{
  __m128i *result; // rax
  unsigned int v5; // esi
  struct D2D_POINT_2F *v6; // r15
  unsigned int v8; // r12d
  __int64 v9; // r10
  float v11; // xmm6_4
  __int64 v12; // rdi
  __int64 v13; // rbx
  __m128i si128; // [rsp+30h] [rbp-48h] BYREF
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h] BYREF

  result = (__m128i *)&retaddr;
  v5 = 0;
  v6 = *(struct D2D_POINT_2F **)a1;
  v8 = *(_DWORD *)(a1 + 20);
  v9 = a2;
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
    v9 = a2;
    si128 = *result;
  }
  if ( v8 )
  {
    do
    {
      v12 = *(_QWORD *)(a1 + 8) + (int)(*(_DWORD *)(a1 + 16) * v5);
      v13 = *(_QWORD *)(a1 + 56) + (int)(*(_DWORD *)(a1 + 64) * v5);
      VertexTransfer::CScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>::Transform(
        a1,
        *(_DWORD *)(a1 + 8) + *(_DWORD *)(a1 + 16) * v5,
        *(_DWORD *)(a1 + 24) + *(_DWORD *)(a1 + 32) * v5,
        *(_DWORD *)(a1 + 40),
        v9,
        v13);
      *(_DWORD *)(v13 + 12) = BlendPremultipliedColorDW(*(_DWORD *)(v12 + 12), v11);
      result = (__m128i *)VertexTransfer::TransformDeviceSpacePositionAndNormal(v6, a3, &si128, v13);
      v9 = a2;
      ++v6;
      ++v5;
    }
    while ( v5 < v8 );
  }
  return result;
}
