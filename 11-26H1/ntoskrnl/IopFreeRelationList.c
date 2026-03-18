/*
 * XREFs of IopFreeRelationList @ 0x140913A50
 * Callers:
 *     PnpProcessCompletedEject @ 0x1407A4D50 (PnpProcessCompletedEject.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x14091109C (PnpQueuePendingSurpriseRemoval.c)
 *     PnpInvalidateRelationsInList @ 0x14091164C (PnpInvalidateRelationsInList.c)
 *     IopAllocateRelationList @ 0x140911808 (IopAllocateRelationList.c)
 *     PnpProcessQueryRemoveAndEject @ 0x140911B30 (PnpProcessQueryRemoveAndEject.c)
 *     PnpBuildRemovalRelationList @ 0x1409128B0 (PnpBuildRemovalRelationList.c)
 *     PipRemoveDevicesInRelationList @ 0x140913948 (PipRemoveDevicesInRelationList.c)
 * Callees:
 *     PipFreeDeviceObjectList @ 0x140913A8C (PipFreeDeviceObjectList.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall IopFreeRelationList(void **P)
{
  void *v2; // rcx

  if ( P )
  {
    v2 = *P;
    if ( v2 )
    {
      PipFreeDeviceObjectList(v2);
      *P = 0LL;
    }
    ExFreePoolWithTag(P, 0x54706E50u);
  }
}
