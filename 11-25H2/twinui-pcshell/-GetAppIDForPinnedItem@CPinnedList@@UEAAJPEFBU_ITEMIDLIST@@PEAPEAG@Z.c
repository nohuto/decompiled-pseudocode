/*
 * XREFs of ?GetAppIDForPinnedItem@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@PEAPEAG@Z @ 0x180668880
 * Callers:
 *     ?GetAppIDForPinnedItem@CPinnedList@@W7EAAJPEFBU_ITEMIDLIST@@PEAPEAG@Z @ 0x180662A60 (-GetAppIDForPinnedItem@CPinnedList@@W7EAAJPEFBU_ITEMIDLIST@@PEAPEAG@Z.c)
 * Callees:
 *     ?ILGetHiddenStringAllocW@@YAHPEFBU_ITEMIDLIST@@W4IDLHID@@PEAPEAG@Z @ 0x1802B5EE4 (-ILGetHiddenStringAllocW@@YAHPEFBU_ITEMIDLIST@@W4IDLHID@@PEAPEAG@Z.c)
 */

__int64 __fastcall CPinnedList::GetAppIDForPinnedItem(
        CPinnedList *this,
        const struct _ITEMIDLIST *a2,
        unsigned __int16 **a3)
{
  return !ILGetHiddenStringAllocW((__int64)a2, 3203334173LL, (void **)a3) ? 0x80004005 : 0;
}
