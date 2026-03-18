/*
 * XREFs of FxFreeToPagedLookasideList @ 0x1400811F0
 * Callers:
 *     ?ReclaimPool@FxPagedLookasideListFromPool@@MEAAXPEAX@Z @ 0x140096210 (-ReclaimPool@FxPagedLookasideListFromPool@@MEAAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxFreeToPagedLookasideList(_PAGED_LOOKASIDE_LIST *Lookaside, void *Entry)
{
  ExFreeToPagedLookasideList(Lookaside, Entry);
}
