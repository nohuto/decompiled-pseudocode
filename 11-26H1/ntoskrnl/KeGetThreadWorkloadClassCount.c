/*
 * XREFs of KeGetThreadWorkloadClassCount @ 0x14050EDE8
 * Callers:
 *     KiAllocateHeteroConfigBuffer @ 0x140BF951C (KiAllocateHeteroConfigBuffer.c)
 *     KiInitializeThreadCycleTable @ 0x140BFA0D8 (KiInitializeThreadCycleTable.c)
 * Callees:
 *     <none>
 */

__int64 KeGetThreadWorkloadClassCount()
{
  return (unsigned int)KiHgsPlusConfiguration;
}
