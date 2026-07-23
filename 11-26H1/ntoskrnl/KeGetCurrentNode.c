/*
 * XREFs of KeGetCurrentNode @ 0x1405F12E8
 * Callers:
 *     ExpPartitionCreatePool @ 0x14077511C (ExpPartitionCreatePool.c)
 * Callees:
 *     <none>
 */

__int64 KeGetCurrentNode()
{
  return KeNodeBlock[KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0]];
}
