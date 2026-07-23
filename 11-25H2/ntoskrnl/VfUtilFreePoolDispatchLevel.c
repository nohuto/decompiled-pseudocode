/*
 * XREFs of VfUtilFreePoolDispatchLevel @ 0x140604330
 * Callers:
 *     ViTargetFreeContiguousMemoryFromNode @ 0x140B7BA68 (ViTargetFreeContiguousMemoryFromNode.c)
 *     ViTargetRemovingCheckContiguousMemory @ 0x140B7BAD8 (ViTargetRemovingCheckContiguousMemory.c)
 *     IovpSessionDataDereference @ 0x140B8C838 (IovpSessionDataDereference.c)
 * Callees:
 *     VfPoolDelayFreeIfPossible @ 0x1404BBAD0 (VfPoolDelayFreeIfPossible.c)
 */

void __fastcall VfUtilFreePoolDispatchLevel(_SLIST_ENTRY *a1)
{
  VfPoolDelayFreeIfPossible(a1, 0);
}
