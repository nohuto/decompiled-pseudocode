/*
 * XREFs of ?HampHostIdStoreInvalidateEntryCallback@@YAKPEAU_HAM_HOSTID_ENTRY@@PEAX@Z @ 0x180067F20
 * Callers:
 *     <none>
 * Callees:
 *     ?HampHostIdStoreInvalidateEntry@@YAXPEAU_HAM_HOSTID_ENTRY@@@Z @ 0x18006E5E4 (-HampHostIdStoreInvalidateEntry@@YAXPEAU_HAM_HOSTID_ENTRY@@@Z.c)
 */

__int64 __fastcall HampHostIdStoreInvalidateEntryCallback(struct _HAM_HOSTID_ENTRY *a1, void *a2)
{
  HampHostIdStoreInvalidateEntry(a1);
  return 1LL;
}
