/*
 * XREFs of ?Resolve@CPinnedList@@W7EAAJPEAUHWND__@@KPEFBU_ITEMIDLIST@@PEAPEFAU3@@Z @ 0x180663170
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPinnedList::Resolve(
        __int64 a1,
        HWND a2,
        unsigned int a3,
        const struct _ITEMIDLIST *a4,
        struct _ITEMIDLIST **a5)
{
  return CPinnedList::Resolve((CPinnedList *)(a1 - 8), a2, a3, a4, a5);
}
