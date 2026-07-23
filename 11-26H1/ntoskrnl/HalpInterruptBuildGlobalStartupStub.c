/*
 * XREFs of HalpInterruptBuildGlobalStartupStub @ 0x14057EBCC
 * Callers:
 *     HalpInterruptInitSystem @ 0x140BF1450 (HalpInterruptInitSystem.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14024F250 (MmGetPhysicalAddress.c)
 *     MmAllocateContiguousNodeMemory @ 0x14034C170 (MmAllocateContiguousNodeMemory.c)
 *     HalpHvVpStartEnabled @ 0x140588494 (HalpHvVpStartEnabled.c)
 *     HalpInterruptBuildStartupStub @ 0x1405955BC (HalpInterruptBuildStartupStub.c)
 *     HalpMmBuildTiledMemoryMap @ 0x140BF2874 (HalpMmBuildTiledMemoryMap.c)
 */

__int64 HalpInterruptBuildGlobalStartupStub()
{
  int v0; // edi
  void *ContiguousNodeMemory; // rax

  v0 = 0;
  if ( (unsigned __int8)HalpHvVpStartEnabled() && HalpHvSleepEnlightenedCpuManager || HalpPrebootMode )
  {
    if ( !HalpDeviceBlockUnblockPushLock.SchedulerSharedSystemSlot )
    {
      if ( !HalpHvCpuManager && HalpInterruptBlockedProcessors )
        return (unsigned int)-1073741801;
      ContiguousNodeMemory = (void *)MmAllocateContiguousNodeMemory(4096LL, 0, -1, 0, 4, 0x80000000);
      if ( (HalpDeviceBlockUnblockPushLock.SchedulerSharedSystemSlot = ContiguousNodeMemory) == 0LL )
        return (unsigned int)-1073741801;
      *(PHYSICAL_ADDRESS *)&HalpDeviceBlockUnblockPushLock.AbWaitEntryCount = MmGetPhysicalAddress(ContiguousNodeMemory);
    }
LABEL_12:
    HalpInterruptGlobalStartupBlock = HalpDeviceBlockUnblockPushLock.SchedulerSharedSystemSlot;
    HalpInterruptBuildStartupStub();
    return (unsigned int)v0;
  }
  v0 = HalpMmBuildTiledMemoryMap();
  if ( v0 >= 0 )
    goto LABEL_12;
  return (unsigned int)v0;
}
