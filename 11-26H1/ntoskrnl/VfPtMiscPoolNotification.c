/*
 * XREFs of VfPtMiscPoolNotification @ 0x14050C738
 * Callers:
 *     MmFreeContiguousMemory @ 0x140344580 (MmFreeContiguousMemory.c)
 *     MiAllocatePagesForMdl @ 0x14034898C (MiAllocatePagesForMdl.c)
 *     MiAllocateContiguousMemory @ 0x14034A28C (MiAllocateContiguousMemory.c)
 *     MmAllocateMappingAddressEx @ 0x140AF1F50 (MmAllocateMappingAddressEx.c)
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
 * Callees:
 *     ViPtLogPoolTraceWrapper @ 0x140C4505C (ViPtLogPoolTraceWrapper.c)
 */

__int64 __fastcall VfPtMiscPoolNotification(__int64 a1, __int64 a2, unsigned int a3, char a4)
{
  __int64 v4; // r10
  __int64 v5; // r9
  __int64 result; // rax

  v4 = 0LL;
  v5 = (unsigned int)(a4 != 0) + 2;
  result = (unsigned int)(DifpPoolTagsSize - 1);
  if ( (unsigned int)result > 9 )
    return ViPtLogPoolTraceWrapper(a1, a3, a2, v5);
  while ( (unsigned int)v4 < DifpPoolTagsSize )
  {
    if ( *((_DWORD *)&DifpPoolTags + v4) == a3 )
      return ViPtLogPoolTraceWrapper(a1, a3, a2, v5);
    v4 = (unsigned int)(v4 + 1);
  }
  return result;
}
