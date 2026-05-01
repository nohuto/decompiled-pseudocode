/*
 * XREFs of ?GetPinningSource@TaskbarLayoutItem@@W7EAAJPEAW4TaskbarPinningSource@@@Z @ 0x180321D70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TaskbarLayoutItem::GetPinningSource(__int64 a1, enum TaskbarPinningSource *a2)
{
  return TaskbarLayoutItem::GetPinningSource((TaskbarLayoutItem *)(a1 - 8), a2);
}
