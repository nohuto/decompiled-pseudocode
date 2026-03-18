/*
 * XREFs of PipIsDeviceInDeviceObjectList @ 0x140910838
 * Callers:
 *     IopSortRelationListForRemove @ 0x14090F5A8 (IopSortRelationListForRemove.c)
 *     IopCheckIfMergeRequired @ 0x140910748 (IopCheckIfMergeRequired.c)
 *     PipVisitDeviceObjectListEntry @ 0x140910DA0 (PipVisitDeviceObjectListEntry.c)
 *     IopIsDescendantNode @ 0x140911550 (IopIsDescendantNode.c)
 *     PnpProcessRelation @ 0x140913D04 (PnpProcessRelation.c)
 * Callees:
 *     PipDeviceObjectListIndexOf @ 0x14091085C (PipDeviceObjectListIndexOf.c)
 */

bool __fastcall PipIsDeviceInDeviceObjectList(unsigned int *a1, __int64 a2, __int64 a3)
{
  return (unsigned int)PipDeviceObjectListIndexOf(a1, a2, *a1, a3) != -1;
}
