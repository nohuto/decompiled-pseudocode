/*
 * XREFs of ?GetCurrentVisualTreePath@CDrawingContext@@QEBAAEBVCVisualTreePath@@XZ @ 0x1801A3758
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800831C0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

const struct CVisualTreePath *__fastcall CDrawingContext::GetCurrentVisualTreePath(CDrawingContext *this)
{
  return (const struct CVisualTreePath *)*((_QWORD *)this + 996);
}
