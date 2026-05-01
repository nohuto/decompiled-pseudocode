/*
 * XREFs of ?UnregisterForApplicationViewChanges@ApplicationViewManagerVisibilityDebouncer@@WBA@EAAJK@Z @ 0x18030E370
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationViewManagerVisibilityDebouncer::UnregisterForApplicationViewChanges(__int64 a1, int a2)
{
  return ApplicationViewManagerVisibilityDebouncer::UnregisterForApplicationViewChanges((RTL_SRWLOCK *)(a1 - 16), a2);
}
