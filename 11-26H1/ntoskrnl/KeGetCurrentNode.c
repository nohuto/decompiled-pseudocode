/*
 * XREFs of KeGetCurrentNode @ 0x1405EE978
 * Callers:
 *     ExpPartitionCreatePool @ 0x14077211C (ExpPartitionCreatePool.c)
 * Callees:
 *     <none>
 */

__int64 KeGetCurrentNode()
{
  return KeNodeBlock[KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0]];
}
