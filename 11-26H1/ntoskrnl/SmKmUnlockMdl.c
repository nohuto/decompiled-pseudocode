/*
 * XREFs of SmKmUnlockMdl @ 0x14040060C
 * Callers:
 *     SmKmStoreHelperCommandProcess @ 0x140384A48 (SmKmStoreHelperCommandProcess.c)
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x140391910 (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     SmKmStoreHelperCommandCleanup @ 0x1404FB7F4 (SmKmStoreHelperCommandCleanup.c)
 * Callees:
 *     SmFpFree @ 0x140280590 (SmFpFree.c)
 *     MmUnmapLockedPages @ 0x140280C00 (MmUnmapLockedPages.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     MmUnmapReservedMapping @ 0x1403CBB70 (MmUnmapReservedMapping.c)
 *     SmpFpReleaseResource @ 0x1403FEA14 (SmpFpReleaseResource.c)
 *     MiUnlockStoreLockedPages @ 0x1404006D4 (MiUnlockStoreLockedPages.c)
 */

__int64 __fastcall SmKmUnlockMdl(PMDL MemoryDescriptorList, __int64 SpinLock, __int64 a3)
{
  PVOID MappedSystemVa; // rsi

  if ( (MemoryDescriptorList->MdlFlags & 1) != 0 )
  {
    MappedSystemVa = MemoryDescriptorList->MappedSystemVa;
    if ( SpinLock
      && *(_QWORD *)(SpinLock + 112) == a3
      && (unsigned int)SmpFpReleaseResource((PEX_SPIN_LOCK)SpinLock, 5, (__int64)MemoryDescriptorList->MappedSystemVa) )
    {
      MmUnmapReservedMapping(MappedSystemVa, 0x6D526D73u, MemoryDescriptorList);
      if ( !*(_BYTE *)(SpinLock + 94) )
      {
        _InterlockedExchange64((volatile __int64 *)(SpinLock + 112), 0LL);
        KeSetEvent((PRKEVENT)(SpinLock + 8), 0, 0);
      }
    }
    else
    {
      MmUnmapLockedPages(MappedSystemVa, MemoryDescriptorList);
    }
  }
  if ( MemoryDescriptorList->Next )
  {
    SmFpFree(SpinLock, 4, a3, (__int64)MemoryDescriptorList->Next);
    MemoryDescriptorList->Next = 0LL;
  }
  return MiUnlockStoreLockedPages(MemoryDescriptorList);
}
