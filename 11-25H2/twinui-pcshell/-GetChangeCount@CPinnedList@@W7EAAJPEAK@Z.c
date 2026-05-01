/*
 * XREFs of ?GetChangeCount@CPinnedList@@W7EAAJPEAK@Z @ 0x180662AB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPinnedList::GetChangeCount(__int64 a1, unsigned int *a2)
{
  return CPinnedList::GetChangeCount((CPinnedList *)(a1 - 8), a2);
}
