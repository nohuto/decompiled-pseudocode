/*
 * XREFs of VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x18025BB50
 * Callers:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBV?$CCommonTransferParameters@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@AEBVCMILMatrix@@1_N@Z @ 0x180064D98 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBV-$CCommonTran.c)
 * Callees:
 *     ?ComputeAdjointIgnoreZ@CMILMatrix@@SA?AV1@AEBV1@@Z @ 0x18011E240 (-ComputeAdjointIgnoreZ@CMILMatrix@@SA-AV1@AEBV1@@Z.c)
 *     ?BlendPremultipliedColorDW@@YAKKM@Z @ 0x18011EAC4 (-BlendPremultipliedColorDW@@YAKKM@Z.c)
 *     ?Transform@?$CGeneral3DOperator@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@VertexTransfer@@QEAAXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@IAEBVCMILMatrix@@PEAU?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@Z @ 0x18011FA90 (-Transform@-$CGeneral3DOperator@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@VertexTra.c)
 *     VertexTransfer::TransformDeviceSpacePositionAndNormal @ 0x18011FE34 (VertexTransfer--TransformDeviceSpacePositionAndNormal.c)
 *     ?CalculateTBNFrameFrom3Vertices@@YA?AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBVCMILMatrix@@2@Z @ 0x1801212BC (-CalculateTBNFrameFrom3Vertices@@YA-AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV-$StridedSpan@$$CBU-$.c)
 */

__int64 __fastcall VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
        __int64 a1,
        float *a2,
        CMILMatrix *a3)
{
  struct D2D_POINT_2F *v3; // r15
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  CMILMatrix *v9; // r10
  float v10; // xmm6_4
  unsigned int v11; // esi
  unsigned int v12; // r12d
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int64 result; // rax
  __int64 v17; // rdi
  __int64 v18; // rbx
  __m128i si128; // [rsp+30h] [rbp-E8h] BYREF
  _OWORD v20[4]; // [rsp+40h] [rbp-D8h] BYREF
  int v21; // [rsp+80h] [rbp-98h]
  __int64 v22; // [rsp+90h] [rbp-88h] BYREF

  v3 = *(struct D2D_POINT_2F **)a1;
  v6 = CMILMatrix::ComputeAdjointIgnoreZ((__int64)&v22, a2);
  v10 = *(float *)(a1 + 44);
  v11 = 0;
  v12 = *(_DWORD *)(a1 + 20);
  v13 = *(_OWORD *)(v6 + 16);
  v20[0] = *(_OWORD *)v6;
  v20[1] = v13;
  v14 = *(_OWORD *)(v6 + 32);
  v15 = *(_OWORD *)(v6 + 48);
  result = *(unsigned int *)(v6 + 64);
  v20[2] = v14;
  v20[3] = v15;
  v21 = result;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  if ( v7 && v8 )
  {
    result = CalculateTBNFrameFrom3Vertices((__int64)&si128, (__int64)v3, (__int64 *)(a1 + 8), v7, v8);
    v9 = (CMILMatrix *)a2;
    si128 = *(__m128i *)result;
  }
  if ( v12 )
  {
    do
    {
      v17 = *(_QWORD *)(a1 + 8) + (int)(*(_DWORD *)(a1 + 16) * v11);
      v18 = *(_QWORD *)(a1 + 56) + (int)(*(_DWORD *)(a1 + 64) * v11);
      VertexTransfer::CGeneral3DOperator<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>::Transform(
        (CMILMatrix *)v20,
        (const struct D2D_POINT_2F *)v17,
        (const struct D2D_POINT_2F *)(*(_QWORD *)(a1 + 24) + (int)(*(_DWORD *)(a1 + 32) * v11)),
        *(_DWORD *)(a1 + 40),
        v9,
        v18);
      *(_DWORD *)(v18 + 12) = BlendPremultipliedColorDW(*(_DWORD *)(v17 + 12), v10);
      result = (__int64)VertexTransfer::TransformDeviceSpacePositionAndNormal(v3, a3, &si128, v18);
      v9 = (CMILMatrix *)a2;
      ++v3;
      ++v11;
    }
    while ( v11 < v12 );
  }
  return result;
}
