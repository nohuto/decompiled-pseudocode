/*
 * XREFs of VfPtIsAptEnabledOnKernel @ 0x14034C970
 * Callers:
 *     MiAllocatePagesForMdl @ 0x14034AA0C (MiAllocatePagesForMdl.c)
 *     MiAllocateContiguousMemory @ 0x14034C30C (MiAllocateContiguousMemory.c)
 *     MmAllocateMappingAddressEx @ 0x140AF4820 (MmAllocateMappingAddressEx.c)
 * Callees:
 *     <none>
 */

bool VfPtIsAptEnabledOnKernel()
{
  return ViAptInitialized && KernelVerifier == 1;
}
