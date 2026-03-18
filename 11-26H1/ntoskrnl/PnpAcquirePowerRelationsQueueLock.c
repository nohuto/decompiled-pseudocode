/*
 * XREFs of PnpAcquirePowerRelationsQueueLock @ 0x1404ED6E8
 * Callers:
 *     PipProcessRebuildPowerRelationsQueue @ 0x14090ED8C (PipProcessRebuildPowerRelationsQueue.c)
 *     PiQueryPowerRelations @ 0x140B35658 (PiQueryPowerRelations.c)
 *     PiQueryPowerDependencyRelations @ 0x140B35BCC (PiQueryPowerDependencyRelations.c)
 *     PiValidatePowerRelations @ 0x140B35E14 (PiValidatePowerRelations.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140278070 (ExAcquireFastMutex.c)
 */

void PnpAcquirePowerRelationsQueueLock()
{
  ExAcquireFastMutex(&PnpRebuildPowerRelationsQueueLock);
}
