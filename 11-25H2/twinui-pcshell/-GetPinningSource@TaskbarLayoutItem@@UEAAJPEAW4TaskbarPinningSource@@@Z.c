/*
 * XREFs of ?GetPinningSource@TaskbarLayoutItem@@UEAAJPEAW4TaskbarPinningSource@@@Z @ 0x180226370
 * Callers:
 *     ?GetPinningSource@TaskbarLayoutItem@@W7EAAJPEAW4TaskbarPinningSource@@@Z @ 0x180321D70 (-GetPinningSource@TaskbarLayoutItem@@W7EAAJPEAW4TaskbarPinningSource@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TaskbarLayoutItem::GetPinningSource(TaskbarLayoutItem *this, enum TaskbarPinningSource *a2)
{
  *(_DWORD *)a2 = *((_DWORD *)this + 30);
  return 0LL;
}
