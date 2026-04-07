/*
 * XREFs of ?Initialize@CSolidRectangleVisual@@MEAAJXZ @ 0x1800C5DE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSolidRectangleVisual::Initialize(struct CContainerVisualProxy **this)
{
  *((_OWORD *)this + 15) = 0LL;
  this[33] = 0LL;
  this[32] = 0LL;
  return CContainerVisual::Initialize(this);
}
