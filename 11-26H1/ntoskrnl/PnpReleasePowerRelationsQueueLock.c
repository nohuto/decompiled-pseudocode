/*
 * XREFs of PnpReleasePowerRelationsQueueLock @ 0x1404ED618
 * Callers:
 *     PipProcessRebuildPowerRelationsQueue @ 0x1409B0EBC (PipProcessRebuildPowerRelationsQueue.c)
 *     PiQueryPowerRelations @ 0x140B37868 (PiQueryPowerRelations.c)
 *     PiQueryPowerDependencyRelations @ 0x140B37DDC (PiQueryPowerDependencyRelations.c)
 *     PiValidatePowerRelations @ 0x140B38024 (PiValidatePowerRelations.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 */

void PnpReleasePowerRelationsQueueLock()
{
  KeReleaseGuardedMutex(&PnpRebuildPowerRelationsQueueLock);
}
