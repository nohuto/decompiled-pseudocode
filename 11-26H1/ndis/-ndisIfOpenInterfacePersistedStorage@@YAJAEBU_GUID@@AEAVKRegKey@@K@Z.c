/*
 * XREFs of ?ndisIfOpenInterfacePersistedStorage@@YAJAEBU_GUID@@AEAVKRegKey@@K@Z @ 0x14015EB10
 * Callers:
 *     ?ndisIfCreateOrUpdateInterface@@YAXAEBU_GUID@@@Z @ 0x140074670 (-ndisIfCreateOrUpdateInterface@@YAXAEBU_GUID@@@Z.c)
 * Callees:
 *     ndisIfOpenInterfaceRegistryKey @ 0x14015F120 (ndisIfOpenInterfaceRegistryKey.c)
 */

__int64 __fastcall ndisIfOpenInterfacePersistedStorage(const struct _GUID *a1, struct KRegKey *a2)
{
  return ndisIfOpenInterfaceRegistryKey((__int64)a1, a2, 1u, 1);
}
