/*
 * XREFs of VfIsKernelVerificationOn @ 0x1404F8A90
 * Callers:
 *     VfPtIoAllocateMdl_Exit @ 0x140B7C1F0 (VfPtIoAllocateMdl_Exit.c)
 *     VfPtMmAllocateContiguousMemoryEx_Exit @ 0x140B7C240 (VfPtMmAllocateContiguousMemoryEx_Exit.c)
 *     VfPtMmAllocateContiguousMemorySpecifyCache_Exit @ 0x140B7C280 (VfPtMmAllocateContiguousMemorySpecifyCache_Exit.c)
 *     VfPtMmAllocateContiguousMemory_Exit @ 0x140B7C2C0 (VfPtMmAllocateContiguousMemory_Exit.c)
 *     VfPtMmAllocateMappingAddressEx_Exit @ 0x140B7C300 (VfPtMmAllocateMappingAddressEx_Exit.c)
 *     VfPtMmAllocateMappingAddress_Exit @ 0x140B7C340 (VfPtMmAllocateMappingAddress_Exit.c)
 *     VfPtMmAllocateNodePagesForMdlEx_Exit @ 0x140B7C380 (VfPtMmAllocateNodePagesForMdlEx_Exit.c)
 *     VfPtMmAllocateNonCachedMemory_Exit @ 0x140B7C3C0 (VfPtMmAllocateNonCachedMemory_Exit.c)
 *     VfPtMmAllocatePagesForMdlEx_Exit @ 0x140B7C400 (VfPtMmAllocatePagesForMdlEx_Exit.c)
 *     VfPtMmAllocatePagesForMdl_Exit @ 0x140B7C440 (VfPtMmAllocatePagesForMdl_Exit.c)
 *     VfPtMmCreateMdl_Exit @ 0x140B7C480 (VfPtMmCreateMdl_Exit.c)
 *     VfPtMmFreeContiguousMemory_Entry @ 0x140B7C4C0 (VfPtMmFreeContiguousMemory_Entry.c)
 *     VfPtMmFreeMappingAddress_Entry @ 0x140B7C500 (VfPtMmFreeMappingAddress_Entry.c)
 *     VfPtMmFreeNonCachedMemory_Entry @ 0x140B7C540 (VfPtMmFreeNonCachedMemory_Entry.c)
 *     VerifierExFreePool @ 0x140B81830 (VerifierExFreePool.c)
 *     VerifierExFreePoolWithTag @ 0x140B818B0 (VerifierExFreePoolWithTag.c)
 * Callees:
 *     <none>
 */

bool VfIsKernelVerificationOn()
{
  return KernelVerifier == 1;
}
