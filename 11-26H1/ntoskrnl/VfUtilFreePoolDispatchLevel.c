/*
 * XREFs of VfUtilFreePoolDispatchLevel @ 0x1406407E0
 * Callers:
 *     ViTargetFreeContiguousMemoryFromNode @ 0x140C296F8 (ViTargetFreeContiguousMemoryFromNode.c)
 *     ViTargetRemovingCheckContiguousMemory @ 0x140C297E4 (ViTargetRemovingCheckContiguousMemory.c)
 *     IovpSessionDataDereference @ 0x140C3A558 (IovpSessionDataDereference.c)
 * Callees:
 *     VfPoolDelayFreeIfPossible @ 0x1403B7760 (VfPoolDelayFreeIfPossible.c)
 */

void __fastcall VfUtilFreePoolDispatchLevel(struct _SLIST_ENTRY *a1)
{
  VfPoolDelayFreeIfPossible(a1, 0);
}
