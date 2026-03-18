/*
 * XREFs of gsl::final_action__CBrushRenderingGraph::RenderSubgraphs_::_2_::_lambda_1___::_final_action__CBrushRenderingGraph::RenderSubgraphs_::_2_::_lambda_1___ @ 0x1801B8C3C
 * Callers:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@IPEAVCDrawListCache@@@Z @ 0x18001B858 (-RenderSubgraphs@CBrushRenderingGraph@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 * Callees:
 *     ?CleanupEffectStage@CBrushRenderingGraph@@KAXPEAUEffectStage@@@Z @ 0x18001B664 (-CleanupEffectStage@CBrushRenderingGraph@@KAXPEAUEffectStage@@@Z.c)
 */

void __fastcall gsl::final_action__CBrushRenderingGraph::RenderSubgraphs_::_2_::_lambda_1___::_final_action__CBrushRenderingGraph::RenderSubgraphs_::_2_::_lambda_1___(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 8) )
    CBrushRenderingGraph::CleanupEffectStage(*(struct EffectStage **)a1);
}
