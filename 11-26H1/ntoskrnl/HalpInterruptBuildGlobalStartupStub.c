/*
 * XREFs of HalpInterruptBuildGlobalStartupStub @ 0x14057C69C
 * Callers:
 *     HalpInterruptInitSystem @ 0x140BEB450 (HalpInterruptInitSystem.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14024D8F0 (MmGetPhysicalAddress.c)
 *     MmAllocateContiguousNodeMemory @ 0x14034A0F0 (MmAllocateContiguousNodeMemory.c)
 *     HalpHvVpStartEnabled @ 0x140585F74 (HalpHvVpStartEnabled.c)
 *     HalpInterruptBuildStartupStub @ 0x140592E3C (HalpInterruptBuildStartupStub.c)
 *     HalpMmBuildTiledMemoryMap @ 0x140BEC874 (HalpMmBuildTiledMemoryMap.c)
 */

__int64 HalpInterruptBuildGlobalStartupStub()
{
  int v0; // edi
  void *ContiguousNodeMemory; // rax

  v0 = 0;
  if ( (unsigned __int8)HalpHvVpStartEnabled() && HalpHvSleepEnlightenedCpuManager || HalpPrebootMode )
  {
    if ( !*(_QWORD *)&HalpDeviceBlockUnblockPushLock.PriorityFloorCounts[8] )
    {
      if ( !HalpHvCpuManager && HalpInterruptBlockedProcessors )
        return (unsigned int)-1073741801;
      ContiguousNodeMemory = (void *)MmAllocateContiguousNodeMemory(4096LL, 0, -1, 0, 4, 0x80000000);
      if ( (*(_QWORD *)&HalpDeviceBlockUnblockPushLock.PriorityFloorCounts[8] = ContiguousNodeMemory) == 0LL )
        return (unsigned int)-1073741801;
      *(PHYSICAL_ADDRESS *)HalpDeviceBlockUnblockPushLock.PriorityFloorCounts = MmGetPhysicalAddress(ContiguousNodeMemory);
    }
LABEL_12:
    HalpInterruptGlobalStartupBlock = *(PVOID *)&HalpDeviceBlockUnblockPushLock.PriorityFloorCounts[8];
    HalpInterruptBuildStartupStub();
    return (unsigned int)v0;
  }
  v0 = HalpMmBuildTiledMemoryMap();
  if ( v0 >= 0 )
    goto LABEL_12;
  return (unsigned int)v0;
}
