/*
 * XREFs of KeGetThreadWorkloadClassCount @ 0x140515378
 * Callers:
 *     KiAllocateHeteroConfigBuffer @ 0x140BF351C (KiAllocateHeteroConfigBuffer.c)
 *     KiInitializeThreadCycleTable @ 0x140BF40D8 (KiInitializeThreadCycleTable.c)
 * Callees:
 *     <none>
 */

__int64 KeGetThreadWorkloadClassCount()
{
  return (unsigned int)KiHgsPlusConfiguration;
}
