/*
 * XREFs of PipIsDeviceInDeviceObjectList @ 0x1409B2918
 * Callers:
 *     IopSortRelationListForRemove @ 0x1409B16D8 (IopSortRelationListForRemove.c)
 *     IopCheckIfMergeRequired @ 0x1409B2828 (IopCheckIfMergeRequired.c)
 *     PipVisitDeviceObjectListEntry @ 0x1409B2E80 (PipVisitDeviceObjectListEntry.c)
 *     IopIsDescendantNode @ 0x1409B3630 (IopIsDescendantNode.c)
 *     PnpProcessRelation @ 0x1409B6374 (PnpProcessRelation.c)
 * Callees:
 *     PipDeviceObjectListIndexOf @ 0x1409B293C (PipDeviceObjectListIndexOf.c)
 */

bool __fastcall PipIsDeviceInDeviceObjectList(unsigned int *a1, __int64 a2, __int64 a3)
{
  return (unsigned int)PipDeviceObjectListIndexOf(a1, a2, *a1, a3) != -1;
}
