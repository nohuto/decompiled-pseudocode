/*
 * XREFs of EditionFindThreadPointerData @ 0x140139010
 * Callers:
 *     <none>
 * Callees:
 *     ?FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z @ 0x140139028 (-FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z.c)
 */

struct tagTHREADPOINTERDATA *__fastcall EditionFindThreadPointerData(struct _LIST_ENTRY *a1, unsigned __int16 a2)
{
  return FindThreadPointerData(a1, a2);
}
