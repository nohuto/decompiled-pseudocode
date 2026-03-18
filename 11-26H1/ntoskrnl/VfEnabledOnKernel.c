/*
 * XREFs of VfEnabledOnKernel @ 0x14047EA30
 * Callers:
 *     VfPtIoAllocateMdl_Exit @ 0x140C29ED0 (VfPtIoAllocateMdl_Exit.c)
 *     VfPtMmAllocateContiguousMemoryEx_Exit @ 0x140C29F20 (VfPtMmAllocateContiguousMemoryEx_Exit.c)
 *     VfPtMmAllocateContiguousMemorySpecifyCache_Exit @ 0x140C29F60 (VfPtMmAllocateContiguousMemorySpecifyCache_Exit.c)
 *     VfPtMmAllocateContiguousMemory_Exit @ 0x140C29FA0 (VfPtMmAllocateContiguousMemory_Exit.c)
 *     VfPtMmAllocateMappingAddressEx_Exit @ 0x140C29FE0 (VfPtMmAllocateMappingAddressEx_Exit.c)
 *     VfPtMmAllocateMappingAddress_Exit @ 0x140C2A020 (VfPtMmAllocateMappingAddress_Exit.c)
 *     VfPtMmAllocateNodePagesForMdlEx_Exit @ 0x140C2A060 (VfPtMmAllocateNodePagesForMdlEx_Exit.c)
 *     VfPtMmAllocateNonCachedMemory_Exit @ 0x140C2A0A0 (VfPtMmAllocateNonCachedMemory_Exit.c)
 *     VfPtMmAllocatePagesForMdlEx_Exit @ 0x140C2A0E0 (VfPtMmAllocatePagesForMdlEx_Exit.c)
 *     VfPtMmAllocatePagesForMdl_Exit @ 0x140C2A120 (VfPtMmAllocatePagesForMdl_Exit.c)
 *     VfPtMmCreateMdl_Exit @ 0x140C2A160 (VfPtMmCreateMdl_Exit.c)
 *     VfPtMmFreeContiguousMemory_Entry @ 0x140C2A1A0 (VfPtMmFreeContiguousMemory_Entry.c)
 *     VfPtMmFreeMappingAddress_Entry @ 0x140C2A1E0 (VfPtMmFreeMappingAddress_Entry.c)
 *     VfPtMmFreeNonCachedMemory_Entry @ 0x140C2A220 (VfPtMmFreeNonCachedMemory_Entry.c)
 *     VerifierExFreePool @ 0x140C2FE00 (VerifierExFreePool.c)
 *     VerifierExFreePoolWithTag @ 0x140C2FE80 (VerifierExFreePoolWithTag.c)
 *     IovpLocalCompletionRoutine @ 0x140C45570 (IovpLocalCompletionRoutine.c)
 *     IovFreeIrpPrivate @ 0x140C459C0 (IovFreeIrpPrivate.c)
 * Callees:
 *     <none>
 */

bool VfEnabledOnKernel()
{
  return KernelVerifier == 1;
}
