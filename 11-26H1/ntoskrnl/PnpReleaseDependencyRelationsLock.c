/*
 * XREFs of PnpReleaseDependencyRelationsLock @ 0x1409B0DD0
 * Callers:
 *     IoResolveDependency @ 0x1404EF2D0 (IoResolveDependency.c)
 *     IoDuplicateDependency @ 0x1407A23F0 (IoDuplicateDependency.c)
 *     IoReserveDependency @ 0x1407A2520 (IoReserveDependency.c)
 *     IoSetDependency @ 0x1407A25B0 (IoSetDependency.c)
 *     PnpRequestDeviceRemoval @ 0x14096F3A8 (PnpRequestDeviceRemoval.c)
 *     PnpStartedDeviceNodeDependencyCheck @ 0x1409AD3F8 (PnpStartedDeviceNodeDependencyCheck.c)
 *     PnpCheckForActiveDependencies @ 0x1409AF220 (PnpCheckForActiveDependencies.c)
 *     PnpDeleteAllDependencyRelations @ 0x1409B0B74 (PnpDeleteAllDependencyRelations.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x1409B0EBC (PipProcessRebuildPowerRelationsQueue.c)
 *     IopSortRelationListForRemove @ 0x1409B16D8 (IopSortRelationListForRemove.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x1409B247C (PnpNewDeviceNodeDependencyCheck.c)
 *     PnpGetDeviceDependencyList @ 0x1409B2710 (PnpGetDeviceDependencyList.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x1409B317C (PnpQueuePendingSurpriseRemoval.c)
 *     PnpProcessDependencyRelations @ 0x1409B6868 (PnpProcessDependencyRelations.c)
 *     PnpSurpriseRemovedDeviceNodeDependencyCheck @ 0x1409B79A8 (PnpSurpriseRemovedDeviceNodeDependencyCheck.c)
 *     PiQueryPowerDependencyRelations @ 0x140B37DDC (PiQueryPowerDependencyRelations.c)
 *     PiDeviceDependencyInit @ 0x140CC9B0C (PiDeviceDependencyInit.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 */

void __fastcall PnpReleaseDependencyRelationsLock()
{
  ExReleaseResourceLite(&PiDependencyRelationsLock);
  ExReleaseResourceLite(&IopDeviceTreeLock);
  KeLeaveCriticalRegion();
}
