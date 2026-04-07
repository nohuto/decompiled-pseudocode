/*
 * XREFs of ?SendSetOffsetImpl@CRectangleVisual@@AEAAJAEBUtagPOINT@@@Z @ 0x18000A724
 * Callers:
 *     ?UpdateCompNode@CRectangleVisual@@AEAAJXZ @ 0x18000A608 (-UpdateCompNode@CRectangleVisual@@AEAAJXZ.c)
 *     ?SendSetOffset@CRectangleVisual@@MEAAJAEBUtagPOINT@@@Z @ 0x18000B520 (-SendSetOffset@CRectangleVisual@@MEAAJAEBUtagPOINT@@@Z.c)
 * Callees:
 *     ?SetOffset@CVisualProxy@@QEAAJNNN@Z @ 0x18000A7A0 (-SetOffset@CVisualProxy@@QEAAJNNN@Z.c)
 */

__int64 __fastcall CRectangleVisual::SendSetOffsetImpl(CVisualProxy **this, const struct tagPOINT *a2)
{
  CVisualProxy::SetOffset(
    this[2],
    (float)((float)a2->x + *((float *)this + 48)),
    (float)((float)a2->y + *((float *)this + 49)),
    0.0);
  return 0LL;
}
