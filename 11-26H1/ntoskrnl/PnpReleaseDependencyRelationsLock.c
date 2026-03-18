/*
 * XREFs of PnpReleaseDependencyRelationsLock @ 0x14090ECA0
 * Callers:
 *     IoResolveDependency @ 0x1404F5D10 (IoResolveDependency.c)
 *     IoDuplicateDependency @ 0x14079F8B0 (IoDuplicateDependency.c)
 *     IoReserveDependency @ 0x14079F9E0 (IoReserveDependency.c)
 *     IoSetDependency @ 0x14079FA70 (IoSetDependency.c)
 *     PnpStartedDeviceNodeDependencyCheck @ 0x140907730 (PnpStartedDeviceNodeDependencyCheck.c)
 *     PnpCheckForActiveDependencies @ 0x14090D0F0 (PnpCheckForActiveDependencies.c)
 *     PnpDeleteAllDependencyRelations @ 0x14090EA44 (PnpDeleteAllDependencyRelations.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x14090ED8C (PipProcessRebuildPowerRelationsQueue.c)
 *     IopSortRelationListForRemove @ 0x14090F5A8 (IopSortRelationListForRemove.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x14091034C (PnpNewDeviceNodeDependencyCheck.c)
 *     PnpGetDeviceDependencyList @ 0x140910630 (PnpGetDeviceDependencyList.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x14091109C (PnpQueuePendingSurpriseRemoval.c)
 *     PnpProcessDependencyRelations @ 0x1409141F8 (PnpProcessDependencyRelations.c)
 *     PnpRequestDeviceRemoval @ 0x14091493C (PnpRequestDeviceRemoval.c)
 *     PnpSurpriseRemovedDeviceNodeDependencyCheck @ 0x140A8AB88 (PnpSurpriseRemovedDeviceNodeDependencyCheck.c)
 *     PiQueryPowerDependencyRelations @ 0x140B35BCC (PiQueryPowerDependencyRelations.c)
 *     PiDeviceDependencyInit @ 0x140CC3A38 (PiDeviceDependencyInit.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 */

void __fastcall PnpReleaseDependencyRelationsLock()
{
  ExReleaseResourceLite(&PiDependencyRelationsLock);
  ExReleaseResourceLite(&IopDeviceTreeLock);
  KeLeaveCriticalRegion();
}
