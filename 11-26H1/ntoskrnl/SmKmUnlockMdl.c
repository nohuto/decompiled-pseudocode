/*
 * XREFs of SmKmUnlockMdl @ 0x14040751C
 * Callers:
 *     SmKmStoreHelperCommandProcess @ 0x140382C98 (SmKmStoreHelperCommandProcess.c)
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x14038FB60 (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     SmKmStoreHelperCommandCleanup @ 0x140501F24 (SmKmStoreHelperCommandCleanup.c)
 * Callees:
 *     SmFpFree @ 0x140281020 (SmFpFree.c)
 *     MmUnmapLockedPages @ 0x140281690 (MmUnmapLockedPages.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     MmUnmapReservedMapping @ 0x1403C1C70 (MmUnmapReservedMapping.c)
 *     SmpFpReleaseResource @ 0x140405920 (SmpFpReleaseResource.c)
 *     MiUnlockStoreLockedPages @ 0x1404075E4 (MiUnlockStoreLockedPages.c)
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
