/*
 * XREFs of KeGetCurrentNodeNumber @ 0x140449A60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

USHORT KeGetCurrentNodeNumber(void)
{
  return KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
}
