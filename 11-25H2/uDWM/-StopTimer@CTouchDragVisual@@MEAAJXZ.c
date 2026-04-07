/*
 * XREFs of ?StopTimer@CTouchDragVisual@@MEAAJXZ @ 0x18009A580
 * Callers:
 *     ?Stop@CTouchDragVisual@@UEAAXXZ @ 0x180080730 (-Stop@CTouchDragVisual@@UEAAXXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CTouchDragVisual::StopTimer(CTouchDragVisual *this)
{
  return CTouchVisual::StopTimer(this);
}
