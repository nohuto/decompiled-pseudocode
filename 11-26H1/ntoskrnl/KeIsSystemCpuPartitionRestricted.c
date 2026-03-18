/*
 * XREFs of KeIsSystemCpuPartitionRestricted @ 0x1405F3CB8
 * Callers:
 *     PspSelectNodeForProcess @ 0x1407F2DF0 (PspSelectNodeForProcess.c)
 * Callees:
 *     <none>
 */

char KeIsSystemCpuPartitionRestricted()
{
  return KiIsSystemCpuPartitionRestricted;
}
