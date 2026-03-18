/*
 * XREFs of HmgPentryFromPobjFast @ 0x1401C57B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x140075800 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 */

struct _ENTRY *__fastcall HmgPentryFromPobjFast(__int64 a1, struct OBJECT *a2)
{
  return GdiHandleManager::GetEntryFromObject(*(GdiHandleManager **)(a1 + 5672), a2);
}
