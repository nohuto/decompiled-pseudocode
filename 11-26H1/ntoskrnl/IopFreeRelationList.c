/*
 * XREFs of IopFreeRelationList @ 0x1409B5B30
 * Callers:
 *     PnpProcessCompletedEject @ 0x1407A7890 (PnpProcessCompletedEject.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x1409B317C (PnpQueuePendingSurpriseRemoval.c)
 *     PnpInvalidateRelationsInList @ 0x1409B372C (PnpInvalidateRelationsInList.c)
 *     IopAllocateRelationList @ 0x1409B38E8 (IopAllocateRelationList.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1409B3C10 (PnpProcessQueryRemoveAndEject.c)
 *     PnpBuildRemovalRelationList @ 0x1409B4990 (PnpBuildRemovalRelationList.c)
 *     PipRemoveDevicesInRelationList @ 0x1409B5A28 (PipRemoveDevicesInRelationList.c)
 * Callees:
 *     PipFreeDeviceObjectList @ 0x1409B5B6C (PipFreeDeviceObjectList.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
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
