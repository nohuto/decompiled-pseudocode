/*
 * XREFs of VfUtilFreePoolDispatchLevel @ 0x1406443C0
 * Callers:
 *     ViTargetFreeContiguousMemoryFromNode @ 0x140C2F708 (ViTargetFreeContiguousMemoryFromNode.c)
 *     ViTargetRemovingCheckContiguousMemory @ 0x140C2F7F4 (ViTargetRemovingCheckContiguousMemory.c)
 *     IovpSessionDataDereference @ 0x140C40568 (IovpSessionDataDereference.c)
 * Callees:
 *     VfPoolDelayFreeIfPossible @ 0x1403C1660 (VfPoolDelayFreeIfPossible.c)
 */

void __fastcall VfUtilFreePoolDispatchLevel(_SLIST_ENTRY *a1)
{
  VfPoolDelayFreeIfPossible(a1, 0);
}
