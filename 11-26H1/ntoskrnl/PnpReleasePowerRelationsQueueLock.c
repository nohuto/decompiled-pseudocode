/*
 * XREFs of PnpReleasePowerRelationsQueueLock @ 0x1404F4038
 * Callers:
 *     PipProcessRebuildPowerRelationsQueue @ 0x14090ED8C (PipProcessRebuildPowerRelationsQueue.c)
 *     PiQueryPowerRelations @ 0x140B35658 (PiQueryPowerRelations.c)
 *     PiQueryPowerDependencyRelations @ 0x140B35BCC (PiQueryPowerDependencyRelations.c)
 *     PiValidatePowerRelations @ 0x140B35E14 (PiValidatePowerRelations.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 */

void PnpReleasePowerRelationsQueueLock()
{
  KeReleaseGuardedMutex(&PnpRebuildPowerRelationsQueueLock);
}
