/*
 * XREFs of VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x18011F93C
 * Callers:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBV?$CCommonTransferParameters@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@AEBVCMILMatrix@@1_N@Z @ 0x180064D98 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBV-$CCommonTran.c)
 * Callees:
 *     ?ComputeAdjointIgnoreZ@CMILMatrix@@SA?AV1@AEBV1@@Z @ 0x18011E240 (-ComputeAdjointIgnoreZ@CMILMatrix@@SA-AV1@AEBV1@@Z.c)
 *     ?Transform@?$CGeneral3DOperator@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@VertexTransfer@@QEAAXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@IAEBVCMILMatrix@@PEAU?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@Z @ 0x18011FA90 (-Transform@-$CGeneral3DOperator@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@VertexTra.c)
 *     VertexTransfer::TransformDeviceSpacePositionAndNormal @ 0x18011FE34 (VertexTransfer--TransformDeviceSpacePositionAndNormal.c)
 *     ?CalculateTBNFrameFrom3Vertices@@YA?AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBVCMILMatrix@@2@Z @ 0x1801212BC (-CalculateTBNFrameFrom3Vertices@@YA-AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV-$StridedSpan@$$CBU-$.c)
 */

__int64 __fastcall VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
        __int64 a1,
        float *a2,
        CMILMatrix *a3)
{
  struct D2D_POINT_2F *v3; // r15
  __int64 v6; // rax
  CMILMatrix *v7; // rdx
  __int64 v8; // r9
  unsigned int v9; // r12d
  unsigned int v10; // esi
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int64 result; // rax
  __int64 v15; // r8
  __int64 v16; // rdi
  __int64 v17; // rbx
  __m128i si128; // [rsp+30h] [rbp-D8h] BYREF
  _OWORD v19[4]; // [rsp+40h] [rbp-C8h] BYREF
  int v20; // [rsp+80h] [rbp-88h]
  __int64 v21; // [rsp+90h] [rbp-78h] BYREF

  v3 = *(struct D2D_POINT_2F **)a1;
  v6 = CMILMatrix::ComputeAdjointIgnoreZ((__int64)&v21, a2);
  v9 = *(_DWORD *)(a1 + 20);
  v10 = 0;
  v11 = *(_OWORD *)(v6 + 16);
  v19[0] = *(_OWORD *)v6;
  v19[1] = v11;
  v12 = *(_OWORD *)(v6 + 32);
  v13 = *(_OWORD *)(v6 + 48);
  result = *(unsigned int *)(v6 + 64);
  v19[2] = v12;
  v19[3] = v13;
  v20 = result;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  if ( v15 && v8 )
  {
    result = CalculateTBNFrameFrom3Vertices((unsigned int)&si128, (_DWORD)v3, (int)a1 + 8, (_DWORD)a3, v8);
    v7 = (CMILMatrix *)a2;
    si128 = *(__m128i *)result;
  }
  if ( v9 )
  {
    do
    {
      v16 = *(_QWORD *)(a1 + 8) + (int)(*(_DWORD *)(a1 + 16) * v10);
      v17 = *(_QWORD *)(a1 + 56) + (int)(*(_DWORD *)(a1 + 64) * v10);
      VertexTransfer::CGeneral3DOperator<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>::Transform(
        (CMILMatrix *)v19,
        v7,
        v17);
      *(_DWORD *)(v17 + 12) = *(_DWORD *)(v16 + 12);
      result = VertexTransfer::TransformDeviceSpacePositionAndNormal(v3, a3);
      v7 = (CMILMatrix *)a2;
      ++v3;
      ++v10;
    }
    while ( v10 < v9 );
  }
  return result;
}
