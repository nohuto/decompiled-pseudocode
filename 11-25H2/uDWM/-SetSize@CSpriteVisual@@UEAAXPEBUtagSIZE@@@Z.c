/*
 * XREFs of ?SetSize@CSpriteVisual@@UEAAXPEBUtagSIZE@@@Z @ 0x1800C6100
 * Callers:
 *     <none>
 * Callees:
 *     ?SetSize@CVisual@@UEAAXPEBUtagSIZE@@@Z @ 0x180094340 (-SetSize@CVisual@@UEAAXPEBUtagSIZE@@@Z.c)
 */

void __fastcall CSpriteVisual::SetSize(CVisualProxy **this, const struct tagSIZE *a2)
{
  CVisual::SetSize((CVisual *)this, a2);
  CVisualProxy::SetSize(this[2], (double)a2->cx, (double)a2->cy);
}
