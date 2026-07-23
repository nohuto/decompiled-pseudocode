/*
 * XREFs of KeIsSystemCpuPartitionRestricted @ 0x1405F6678
 * Callers:
 *     PspSelectNodeForProcess @ 0x1407F8950 (PspSelectNodeForProcess.c)
 * Callees:
 *     <none>
 */

char KeIsSystemCpuPartitionRestricted()
{
  return KiIsSystemCpuPartitionRestricted;
}
