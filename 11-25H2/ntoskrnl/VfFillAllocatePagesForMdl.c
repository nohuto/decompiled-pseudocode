/*
 * XREFs of VfFillAllocatePagesForMdl @ 0x140B91050
 * Callers:
 *     VerifierMmAllocateNodePagesForMdlEx @ 0x140B90410 (VerifierMmAllocateNodePagesForMdlEx.c)
 *     VerifierMmAllocatePagesForMdlEx @ 0x140B90620 (VerifierMmAllocatePagesForMdlEx.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x1403285B0 (MmUnmapLockedPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140329CF0 (MmMapLockedPagesSpecifyCache.c)
 */

void __fastcall VfFillAllocatePagesForMdl(PMDL MemoryDescriptorList, int a2, char a3)
{
  ULONG ByteCount; // edi
  PVOID MappedSystemVa; // rsi
  PVOID v6; // rax

  if ( (a3 & 1) != 0 && a2 == 1 )
  {
    ByteCount = MemoryDescriptorList->ByteCount;
    MappedSystemVa = MemoryDescriptorList->MappedSystemVa;
    MemoryDescriptorList->ByteCount = 4096;
    v6 = MmMapLockedPagesSpecifyCache(MemoryDescriptorList, 0, MmCached, 0LL, 0, 0x40000010u);
    if ( v6 )
    {
      MmUnmapLockedPages(v6, MemoryDescriptorList);
      MemoryDescriptorList->MappedSystemVa = MappedSystemVa;
    }
    MemoryDescriptorList->ByteCount = ByteCount;
  }
}
