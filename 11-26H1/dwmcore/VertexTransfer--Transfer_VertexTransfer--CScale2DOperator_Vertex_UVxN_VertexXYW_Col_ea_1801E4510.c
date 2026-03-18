/*
 * XREFs of VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801E4510
 * Callers:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBV?$CCommonTransferParameters@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@AEBVCMILMatrix@@1_N@Z @ 0x180064D98 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBV-$CCommonTran.c)
 * Callees:
 *     VertexTransfer::TransformDeviceSpacePositionAndNormal @ 0x18011FE34 (VertexTransfer--TransformDeviceSpacePositionAndNormal.c)
 *     ?CalculateTBNFrameFrom3Vertices@@YA?AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBVCMILMatrix@@2@Z @ 0x1801212BC (-CalculateTBNFrameFrom3Vertices@@YA-AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV-$StridedSpan@$$CBU-$.c)
 *     ?Transform@?$CScale2DOperator@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@VertexTransfer@@QEAAXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@IAEBVCMILMatrix@@PEAU?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@Z @ 0x18025C0A8 (-Transform@-$CScale2DOperator@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@VertexTrans.c)
 */

__m128i *__fastcall VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
        __int64 a1,
        __int64 a2,
        CMILMatrix *a3,
        __int64 a4)
{
  __m128i *result; // rax
  unsigned int v5; // esi
  struct D2D_POINT_2F *v6; // r15
  unsigned int v8; // r12d
  __int64 v10; // rdi
  __int64 v11; // rbx
  __m128i si128; // [rsp+30h] [rbp-38h] BYREF
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h] BYREF
  __int64 v14; // [rsp+78h] [rbp+10h]

  result = (__m128i *)&retaddr;
  v14 = a2;
  v5 = 0;
  v6 = *(struct D2D_POINT_2F **)a1;
  v8 = *(_DWORD *)(a1 + 20);
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  if ( a3 && a4 )
  {
    result = (__m128i *)CalculateTBNFrameFrom3Vertices(
                          (__int64)&si128,
                          (__int64)v6,
                          (__int64 *)(a1 + 8),
                          (__int64)a3,
                          a4);
    a2 = v14;
    si128 = *result;
  }
  if ( v8 )
  {
    do
    {
      v10 = *(_QWORD *)(a1 + 8) + (int)(*(_DWORD *)(a1 + 16) * v5);
      v11 = *(_QWORD *)(a1 + 56) + (int)(*(_DWORD *)(a1 + 64) * v5);
      VertexTransfer::CScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>::Transform(
        a1,
        *(_DWORD *)(a1 + 8) + *(_DWORD *)(a1 + 16) * v5,
        *(_DWORD *)(a1 + 24) + *(_DWORD *)(a1 + 32) * v5,
        *(_DWORD *)(a1 + 40),
        a2,
        v11);
      *(_DWORD *)(v11 + 12) = *(_DWORD *)(v10 + 12);
      result = (__m128i *)VertexTransfer::TransformDeviceSpacePositionAndNormal(v6, a3, &si128, v11);
      a2 = v14;
      ++v6;
      ++v5;
    }
    while ( v5 < v8 );
  }
  return result;
}
