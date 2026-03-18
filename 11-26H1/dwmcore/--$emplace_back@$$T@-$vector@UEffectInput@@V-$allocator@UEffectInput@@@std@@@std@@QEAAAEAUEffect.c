/*
 * XREFs of ??$emplace_back@$$T@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@QEAAAEAUEffectInput@@$$QEA$$T@Z @ 0x180288354
 * Callers:
 *     ?GatherEffectInputs@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAV?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@@Z @ 0x18001AAD4 (-GatherEffectInputs@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAV-$vector.c)
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@IPEAVCDrawListCache@@@Z @ 0x18001B858 (-RenderSubgraphs@CBrushRenderingGraph@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 *     ?RenderSubgraphToIntermediate@CBrushRenderingGraph@@QEBAJPEBVCRenderingTechnique@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@AEBUD2D_VECTOR_2F@@2PEAUEffectInput@@@Z @ 0x1801D2E14 (-RenderSubgraphToIntermediate@CBrushRenderingGraph@@QEBAJPEBVCRenderingTechnique@@PEAVCDrawingCo.c)
 * Callees:
 *     ??$_Emplace_reallocate@$$T@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@AEAAPEAUEffectInput@@QEAU2@$$QEA$$T@Z @ 0x1801FEBEC (--$_Emplace_reallocate@$$T@-$vector@UEffectInput@@V-$allocator@UEffectInput@@@std@@@std@@AEAAPEA.c)
 */

char *__fastcall std::vector<EffectInput>::emplace_back<std::nullptr_t>(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rdx

  v1 = *(_QWORD *)(a1 + 8);
  if ( v1 == *(_QWORD *)(a1 + 16) )
    return std::vector<EffectInput>::_Emplace_reallocate<std::nullptr_t>(
             (struct EffectInput **)a1,
             (const struct EffectInput *)v1);
  *(_QWORD *)v1 = 0LL;
  *(_QWORD *)(v1 + 8) = 0LL;
  *(_BYTE *)(v1 + 16) = 0;
  *(_OWORD *)(v1 + 48) = 0LL;
  v2 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = v2 + 112;
  return (char *)v2;
}
