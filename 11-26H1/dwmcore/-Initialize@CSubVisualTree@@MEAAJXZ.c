/*
 * XREFs of ?Initialize@CSubVisualTree@@MEAAJXZ @ 0x1801DA7D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSubVisualTree::Initialize(CLayerVisual **this)
{
  return CVisual::CalcRootBounds(this[9], (__int64)(this + 10));
}
