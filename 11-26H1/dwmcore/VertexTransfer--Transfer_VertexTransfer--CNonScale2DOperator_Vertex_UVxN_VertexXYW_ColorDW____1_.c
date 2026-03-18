/*
 * XREFs of VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x18011F1A8
 * Callers:
 *     ?EmitGeometry_TransferVertices@CRenderingBatchCommand@@KAXPEBUD2D_POINT_2F@@AEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@$$CBUVertexAAFixup_UVxN@@@@_K_NAEBVCMILMatrix@@54MAEBV?$StridedSpan@E@@4@Z @ 0x180065020 (-EmitGeometry_TransferVertices@CRenderingBatchCommand@@KAXPEBUD2D_POINT_2F@@AEBV-$StridedSpan@$$.c)
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBV?$CCommonTransferParameters@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBVCMILMatrix@@1_N@Z @ 0x18011D230 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBV-$CCommonTransferParameters@U-.c)
 * Callees:
 *     ?BlendPremultipliedColorDW@@YAKKM@Z @ 0x18011EAC4 (-BlendPremultipliedColorDW@@YAKKM@Z.c)
 *     ?Transform@?$CNonScale2DOperator@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@VertexTransfer@@QEAAXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@IAEBVCMILMatrix@@PEAU3@@Z @ 0x180217094 (-Transform@-$CNonScale2DOperator@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@VertexTransfer@@QEAAXAEBU.c)
 */

void __fastcall VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(
        __int64 a1,
        int a2)
{
  unsigned int v2; // esi
  unsigned int v3; // edi
  float v4; // xmm2_4
  int i; // r9d
  __int64 v7; // r11
  int v8; // eax
  __int64 v9; // r10

  v2 = *(_DWORD *)(a1 + 20);
  v3 = 0;
  v4 = *(float *)(a1 + 44);
  for ( i = a2; v3 < v2; *(_DWORD *)(v9 + 12) = v8 )
  {
    VertexTransfer::CNonScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW>>::Transform(
      a1,
      *(_DWORD *)(a1 + 8) + *(_DWORD *)(a1 + 16) * v3,
      *(_DWORD *)(a1 + 40),
      i,
      *(_QWORD *)(a1 + 56) + (int)(*(_DWORD *)(a1 + 64) * v3));
    v8 = BlendPremultipliedColorDW(*(_DWORD *)(v7 + 12), v4);
    ++v3;
  }
}
