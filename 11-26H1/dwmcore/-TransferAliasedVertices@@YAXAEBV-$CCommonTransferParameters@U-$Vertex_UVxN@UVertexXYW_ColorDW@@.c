/*
 * XREFs of ?TransferAliasedVertices@@YAXAEBV?$CCommonTransferParameters@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x18020BE40
 * Callers:
 *     ?EmitGeometry_TransferVertices@CRenderingBatchCommand@@KAXPEBUD2D_POINT_2F@@AEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@$$CBUVertexAAFixup_UVxN@@@@_K_NAEBVCMILMatrix@@54MAEBV?$StridedSpan@E@@4@Z @ 0x180065020 (-EmitGeometry_TransferVertices@CRenderingBatchCommand@@KAXPEBUD2D_POINT_2F@@AEBV-$StridedSpan@$$.c)
 *     ?EmitGeometry@CWarpRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand@@@Z @ 0x180066020 (-EmitGeometry@CWarpRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchComma.c)
 *     ?EmitGeometry@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand@@@Z @ 0x18011B180 (-EmitGeometry@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchComm.c)
 *     ?EmitGeometry@CCpuClipAntialiasBatchCommand@@QEBAJPEAVCD3DBatchExecutionContext@@_N@Z @ 0x18011C0F0 (-EmitGeometry@CCpuClipAntialiasBatchCommand@@QEBAJPEAVCD3DBatchExecutionContext@@_N@Z.c)
 * Callees:
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdCopyOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801E25E8 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdCopyOperator_Vertex_UVxN_VertexXYW_ColorDW____.c)
 *     VertexTransfer::Transfer_VertexTransfer::CCopyOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x18020BECC (VertexTransfer--Transfer_VertexTransfer--CCopyOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex.c)
 *     VertexTransfer::Transfer_VertexTransfer::CCopyOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x18025EC5C (VertexTransfer--Transfer_VertexTransfer--CCopyOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex.c)
 *     VertexTransfer::Transfer_VertexTransfer::CCopyOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x18025ECF8 (VertexTransfer--Transfer_VertexTransfer--CCopyOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex.c)
 */

__int64 __fastcall TransferAliasedVertices(__int64 a1)
{
  char v1; // al
  __int64 result; // rax

  v1 = 1;
  if ( (*(_BYTE *)(a1 + 40) & 1) != 0 || (*(_BYTE *)(a1 + 56) & 0xF) != 0 )
    v1 = 0;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 44) - 1.0) & _xmm) >= 0.0000011920929 )
  {
    if ( !*(_BYTE *)(a1 + 48) )
    {
      if ( !v1 )
      {
        VertexTransfer::Transfer_VertexTransfer::CCopyOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___();
        goto LABEL_14;
      }
      goto LABEL_12;
    }
    if ( v1 )
    {
LABEL_12:
      VertexTransfer::SimdTransfer_VertexTransfer::CSimdCopyOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___(a1);
      goto LABEL_14;
    }
    VertexTransfer::Transfer_VertexTransfer::CCopyOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___();
  }
  else
  {
    if ( v1 )
      goto LABEL_12;
    VertexTransfer::Transfer_VertexTransfer::CCopyOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___();
  }
LABEL_14:
  result = *(unsigned int *)(a1 + 20);
  dword_1803DE484 += result;
  return result;
}
