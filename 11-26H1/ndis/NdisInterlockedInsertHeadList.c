/*
 * XREFs of NdisInterlockedInsertHeadList @ 0x1400DA660
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PLIST_ENTRY __fastcall NdisInterlockedInsertHeadList(_LIST_ENTRY *a1, _LIST_ENTRY *a2, KSPIN_LOCK *a3)
{
  return ExInterlockedInsertHeadList(a1, a2, a3);
}
