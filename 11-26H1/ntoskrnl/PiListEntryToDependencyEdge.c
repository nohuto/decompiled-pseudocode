/*
 * XREFs of PiListEntryToDependencyEdge @ 0x140515F40
 * Callers:
 *     PiEnumerateDependentListEntry @ 0x140776DD8 (PiEnumerateDependentListEntry.c)
 *     IoDuplicateDependency @ 0x14079F8B0 (IoDuplicateDependency.c)
 *     PiEnumerateProviderListEntry @ 0x14079FB10 (PiEnumerateProviderListEntry.c)
 *     PipCheckValidNewDependencyEdge @ 0x14079FDB8 (PipCheckValidNewDependencyEdge.c)
 *     PipMergeDependencyEdgeList @ 0x14079FF98 (PipMergeDependencyEdgeList.c)
 *     PipAttemptDependentsStart @ 0x14090690C (PipAttemptDependentsStart.c)
 *     PipAddDependentsToRebuildPowerRelationsQueue @ 0x14090ED20 (PipAddDependentsToRebuildPowerRelationsQueue.c)
 *     PipDeleteAllDependencyRelations @ 0x14090EE9C (PipDeleteAllDependencyRelations.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x14091034C (PnpNewDeviceNodeDependencyCheck.c)
 *     PnpGetDeviceDependencyList @ 0x140910630 (PnpGetDeviceDependencyList.c)
 *     PnpProcessDependencyRelations @ 0x1409141F8 (PnpProcessDependencyRelations.c)
 *     PnpRequestDeviceRemovalWorker @ 0x140914AF4 (PnpRequestDeviceRemovalWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PiListEntryToDependencyEdge(__int64 a1, int a2)
{
  if ( a2 )
    a1 -= 16LL;
  return a1;
}
