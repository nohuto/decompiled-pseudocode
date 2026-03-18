/*
 * XREFs of VfPtMiscPoolNotification @ 0x1403F7FF8
 * Callers:
 *     IoAllocateMdl @ 0x1402D5350 (IoAllocateMdl.c)
 *     IoFreeMdl @ 0x1402D5960 (IoFreeMdl.c)
 *     MmFreeContiguousMemory @ 0x14038B3D0 (MmFreeContiguousMemory.c)
 *     IopAllocateMdl @ 0x1403F7D80 (IopAllocateMdl.c)
 *     MiAllocateContiguousMemory @ 0x140414D9C (MiAllocateContiguousMemory.c)
 *     MiAllocatePagesForMdl @ 0x1404157CC (MiAllocatePagesForMdl.c)
 *     MmAllocateMappingAddressEx @ 0x140A58950 (MmAllocateMappingAddressEx.c)
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
 * Callees:
 *     ViPtLogPoolTraceWrapper @ 0x140B72100 (ViPtLogPoolTraceWrapper.c)
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
