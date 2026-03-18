/*
 * XREFs of VfFillAllocatePagesForMdl @ 0x140C3FE50
 * Callers:
 *     VerifierMmAllocateNodePagesForMdlEx @ 0x140C3F200 (VerifierMmAllocateNodePagesForMdlEx.c)
 *     VerifierMmAllocatePagesForMdlEx @ 0x140C3F410 (VerifierMmAllocatePagesForMdlEx.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x140281690 (MmUnmapLockedPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14035D330 (MmMapLockedPagesSpecifyCache.c)
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
