/*
 * XREFs of ?UnregisterForApplicationViewChanges@ApplicationViewFilteredCollection@@WBI@EAAJK@Z @ 0x180599550
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationViewFilteredCollection::UnregisterForApplicationViewChanges(__int64 a1, int a2)
{
  return ApplicationViewFilteredCollection::UnregisterForApplicationViewChanges((RTL_SRWLOCK *)(a1 - 24), a2);
}
