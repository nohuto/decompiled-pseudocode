/*
 * XREFs of ?SendSetOffset@CVisual@@MEAAJAEBUtagPOINT@@@Z @ 0x18000A770
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisual::SendSetOffset(CVisualProxy **this, const struct tagPOINT *a2)
{
  return CVisualProxy::SetOffset(this[2], (double)a2->x, (double)a2->y, 0.0);
}
