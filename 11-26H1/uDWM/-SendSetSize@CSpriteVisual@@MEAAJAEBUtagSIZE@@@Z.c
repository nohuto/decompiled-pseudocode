/*
 * XREFs of ?SendSetSize@CSpriteVisual@@MEAAJAEBUtagSIZE@@@Z @ 0x180075620
 * Callers:
 *     <none>
 * Callees:
 *     ?SetSize@CVisualProxy@@QEAAJNN@Z @ 0x18000A660 (-SetSize@CVisualProxy@@QEAAJNN@Z.c)
 */

__int64 __fastcall CSpriteVisual::SendSetSize(CVisualProxy **this, const struct tagSIZE *a2)
{
  CVisualProxy::SetSize(this[2], (double)a2->cx, (double)a2->cy);
  return 0LL;
}
