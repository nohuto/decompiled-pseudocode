/*
 * XREFs of ?GetFlatteningVisualTree@CLayerVisual@@QEBAPEAVCVisualTree@@XZ @ 0x18021FC9C
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800831C0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

struct CVisualTree *__fastcall CLayerVisual::GetFlatteningVisualTree(CLayerVisual *this)
{
  return (struct CVisualTree *)*((_QWORD *)this + 86);
}
