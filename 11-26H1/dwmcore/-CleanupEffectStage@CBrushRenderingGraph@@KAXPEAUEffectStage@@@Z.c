/*
 * XREFs of ?CleanupEffectStage@CBrushRenderingGraph@@KAXPEAUEffectStage@@@Z @ 0x18001B664
 * Callers:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@IPEAVCDrawListCache@@@Z @ 0x18001B858 (-RenderSubgraphs@CBrushRenderingGraph@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 *     ?RenderSubgraphToIntermediateInternal@CBrushRenderingGraph@@IEBAJPEBVCRenderingTechnique@@PEAVCDrawingContext@@AEBUIntermediateConfigurationInputs@1@AEBV?$span@$$CBUEffectInput@@$0?0@gsl@@AEBV?$span@UEffectInput@@$0?0@6@@Z @ 0x18001C13C (-RenderSubgraphToIntermediateInternal@CBrushRenderingGraph@@IEBAJPEBVCRenderingTechnique@@PEAVCD.c)
 *     gsl::final_action__CBrushRenderingGraph::RenderSubgraphs_::_2_::_lambda_1___::_final_action__CBrushRenderingGraph::RenderSubgraphs_::_2_::_lambda_1___ @ 0x1801B8C3C (gsl--final_action__CBrushRenderingGraph--RenderSubgraphs_--_2_--_lambda_1___--_final_action__CBr.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CBrushRenderingGraph::CleanupEffectStage(struct EffectStage *a1)
{
  unsigned int i; // edi
  __int64 v3; // rsi
  void (__fastcall ***v4)(_QWORD, __int64); // rcx

  for ( i = 0; i < *((_DWORD *)a1 + 1); ++i )
  {
    v3 = 112LL * i;
    if ( !*((_BYTE *)a1 + v3 + 52) )
    {
      v4 = *(void (__fastcall ****)(_QWORD, __int64))((char *)a1 + v3 + 64);
      if ( v4 )
        (**v4)(v4, 1LL);
      *(_QWORD *)((char *)a1 + v3 + 64) = 0LL;
    }
  }
  *((_DWORD *)a1 + 1) = 0;
}
