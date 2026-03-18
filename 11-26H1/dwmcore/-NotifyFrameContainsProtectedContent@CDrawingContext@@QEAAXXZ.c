/*
 * XREFs of ?NotifyFrameContainsProtectedContent@CDrawingContext@@QEAAXXZ @ 0x1801A5BAC
 * Callers:
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180077EA0 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?RenderContent@CSpriteVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180079CF0 (-RenderContent@CSpriteVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180079E90 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800831C0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?RecordUse@CSwapChainRealization@@UEAAJPEAVCDrawingContext@@@Z @ 0x1802AE070 (-RecordUse@CSwapChainRealization@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CDrawingContext::NotifyFrameContainsProtectedContent(CDrawingContext *this)
{
  if ( *((_BYTE *)g_pComposition + 6458) )
    *((_BYTE *)this + 7983) = 1;
  else
    *((_BYTE *)this + 7980) = 1;
}
