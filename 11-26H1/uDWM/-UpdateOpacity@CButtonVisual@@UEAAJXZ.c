/*
 * XREFs of ?UpdateOpacity@CButtonVisual@@UEAAJXZ @ 0x180070A50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CButtonVisual::UpdateOpacity(CVisualProxy **this)
{
  return CVisualProxy::SetOpacity(this[2], *((double *)this + 14));
}
