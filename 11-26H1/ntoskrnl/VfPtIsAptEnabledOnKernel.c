/*
 * XREFs of VfPtIsAptEnabledOnKernel @ 0x14034A8F0
 * Callers:
 *     MiAllocatePagesForMdl @ 0x14034898C (MiAllocatePagesForMdl.c)
 *     MiAllocateContiguousMemory @ 0x14034A28C (MiAllocateContiguousMemory.c)
 *     MmAllocateMappingAddressEx @ 0x140AF1F50 (MmAllocateMappingAddressEx.c)
 * Callees:
 *     <none>
 */

bool VfPtIsAptEnabledOnKernel()
{
  return ViAptInitialized && KernelVerifier == 1;
}
