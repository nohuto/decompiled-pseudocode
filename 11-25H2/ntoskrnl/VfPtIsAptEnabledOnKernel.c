/*
 * XREFs of VfPtIsAptEnabledOnKernel @ 0x140415E20
 * Callers:
 *     MiAllocateContiguousMemory @ 0x140414D9C (MiAllocateContiguousMemory.c)
 *     MiAllocatePagesForMdl @ 0x1404157CC (MiAllocatePagesForMdl.c)
 *     MmAllocateMappingAddressEx @ 0x140A58950 (MmAllocateMappingAddressEx.c)
 * Callees:
 *     <none>
 */

bool VfPtIsAptEnabledOnKernel()
{
  return ViAptInitialized && KernelVerifier == 1;
}
