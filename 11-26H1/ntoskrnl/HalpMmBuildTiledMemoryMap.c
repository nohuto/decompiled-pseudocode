/*
 * XREFs of HalpMmBuildTiledMemoryMap @ 0x140BEC874
 * Callers:
 *     HalpInterruptBuildGlobalStartupStub @ 0x14057C69C (HalpInterruptBuildGlobalStartupStub.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14024D8F0 (MmGetPhysicalAddress.c)
 *     HalpAllocateCR3Root @ 0x140593F64 (HalpAllocateCR3Root.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     HalpCommitCR3Worker @ 0x140BEC7F0 (HalpCommitCR3Worker.c)
 *     HalpUpdateTiledCR3Mapping @ 0x140BEC904 (HalpUpdateTiledCR3Mapping.c)
 */

__int64 HalpMmBuildTiledMemoryMap()
{
  PVOID v0; // rdi
  int updated; // ebx

  HalpAllocateCR3Root();
  v0 = HalpCR3Root;
  if ( !HalpCR3Root )
    return 3221225495LL;
  memset_0(HalpCR3Root, 0, 0x1000uLL);
  updated = HalpUpdateTiledCR3Mapping(*(PVOID *)HalpDeviceBlockUnblockPushLock.PriorityFloorCounts);
  if ( updated >= 0 )
  {
    updated = HalpUpdateTiledCR3Mapping(HalpLMStub);
    if ( updated >= 0 )
    {
      updated = 0;
      HalpCommitCR3Worker((PVOID *)HalpCR3Root, 3u);
      HIDWORD(HalpDeviceBlockUnblockPushLock.QueueListEntry.Blink) = MmGetPhysicalAddress(v0).LowPart;
    }
  }
  return (unsigned int)updated;
}
