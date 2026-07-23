/*
 * XREFs of PnpAcquirePowerRelationsQueueLock @ 0x1404E6CC8
 * Callers:
 *     PipProcessRebuildPowerRelationsQueue @ 0x1409B0EBC (PipProcessRebuildPowerRelationsQueue.c)
 *     PiQueryPowerRelations @ 0x140B37868 (PiQueryPowerRelations.c)
 *     PiQueryPowerDependencyRelations @ 0x140B37DDC (PiQueryPowerDependencyRelations.c)
 *     PiValidatePowerRelations @ 0x140B38024 (PiValidatePowerRelations.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 */

void PnpAcquirePowerRelationsQueueLock()
{
  ExAcquireFastMutex(&PnpRebuildPowerRelationsQueueLock);
}
