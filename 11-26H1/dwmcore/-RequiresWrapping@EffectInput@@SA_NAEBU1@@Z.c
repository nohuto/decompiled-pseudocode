/*
 * XREFs of ?RequiresWrapping@EffectInput@@SA_NAEBU1@@Z @ 0x180039F70
 * Callers:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@IPEAVCDrawListCache@@@Z @ 0x18001B858 (-RenderSubgraphs@CBrushRenderingGraph@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 *     ?RenderSubgraphToIntermediateInternal@CBrushRenderingGraph@@IEBAJPEBVCRenderingTechnique@@PEAVCDrawingContext@@AEBUIntermediateConfigurationInputs@1@AEBV?$span@$$CBUEffectInput@@$0?0@gsl@@AEBV?$span@UEffectInput@@$0?0@6@@Z @ 0x18001C13C (-RenderSubgraphToIntermediateInternal@CBrushRenderingGraph@@IEBAJPEBVCRenderingTechnique@@PEAVCD.c)
 * Callees:
 *     <none>
 */

bool __fastcall EffectInput::RequiresWrapping(const struct EffectInput *a1)
{
  char v1; // dl

  v1 = 0;
  if ( !*((_BYTE *)a1 + 45) && *((_BYTE *)a1 + 44) && *((_BYTE *)a1 + 108) )
    return (*((_DWORD *)a1 + 10) & 0x40) == 0;
  return v1;
}
