/*
 * XREFs of PiListEntryToDependencyEdge @ 0x14050F9B0
 * Callers:
 *     PiEnumerateDependentListEntry @ 0x140779C80 (PiEnumerateDependentListEntry.c)
 *     IoDuplicateDependency @ 0x1407A23F0 (IoDuplicateDependency.c)
 *     PiEnumerateProviderListEntry @ 0x1407A2650 (PiEnumerateProviderListEntry.c)
 *     PipCheckValidNewDependencyEdge @ 0x1407A28F8 (PipCheckValidNewDependencyEdge.c)
 *     PipMergeDependencyEdgeList @ 0x1407A2AD8 (PipMergeDependencyEdgeList.c)
 *     PnpRequestDeviceRemovalWorker @ 0x14096F560 (PnpRequestDeviceRemovalWorker.c)
 *     PipAddDependentsToRebuildPowerRelationsQueue @ 0x1409B0E50 (PipAddDependentsToRebuildPowerRelationsQueue.c)
 *     PipDeleteAllDependencyRelations @ 0x1409B0FCC (PipDeleteAllDependencyRelations.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x1409B247C (PnpNewDeviceNodeDependencyCheck.c)
 *     PnpGetDeviceDependencyList @ 0x1409B2710 (PnpGetDeviceDependencyList.c)
 *     PnpProcessDependencyRelations @ 0x1409B6868 (PnpProcessDependencyRelations.c)
 *     PipAttemptDependentsStart @ 0x140B2B1DC (PipAttemptDependentsStart.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PiListEntryToDependencyEdge(__int64 a1, int a2)
{
  if ( a2 )
    a1 -= 16LL;
  return a1;
}
