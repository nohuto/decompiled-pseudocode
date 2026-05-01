/*
 * XREFs of ?UnregisterForApplicationViewChanges@ApplicationViewManagerVisibilityDebouncer@@UEAAJK@Z @ 0x18030A160
 * Callers:
 *     ?UnregisterForApplicationViewChanges@ApplicationViewManagerVisibilityDebouncer@@WBA@EAAJK@Z @ 0x18030A170 (-UnregisterForApplicationViewChanges@ApplicationViewManagerVisibilityDebouncer@@WBA@EAAJK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationViewManagerVisibilityDebouncer::UnregisterForApplicationViewChanges(
        RTL_SRWLOCK *this,
        int a2)
{
  return AgileRegistrationList::Unregister(this + 15, a2);
}
