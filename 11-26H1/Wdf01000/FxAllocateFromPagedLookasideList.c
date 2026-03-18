/*
 * XREFs of FxAllocateFromPagedLookasideList @ 0x140096264
 * Callers:
 *     ?Allocate@FxPagedLookasideListFromPool@@UEAAJPEAPEAVFxMemoryObject@@@Z @ 0x140052930 (-Allocate@FxPagedLookasideListFromPool@@UEAAJPEAPEAVFxMemoryObject@@@Z.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall FxAllocateFromPagedLookasideList(_PAGED_LOOKASIDE_LIST *Lookaside)
{
  return ExAllocateFromPagedLookasideList(Lookaside);
}
