/*
 * XREFs of NvmeControllerFreeExtendedCommand @ 0x1400589E4
 * Callers:
 *     NvmeControllerAllocateExtendedCommand @ 0x140058910 (NvmeControllerAllocateExtendedCommand.c)
 *     NvmeControllerDeleteAERExtendedCommandPool @ 0x1400F2744 (NvmeControllerDeleteAERExtendedCommandPool.c)
 *     NvmeControllerCreateNvmeNamespace @ 0x140100594 (NvmeControllerCreateNvmeNamespace.c)
 *     NvmeControllerDeleteNvmeNamespace @ 0x140100A2C (NvmeControllerDeleteNvmeNamespace.c)
 *     NvmeControllerDeleteExtendedCommandPool @ 0x14011FC7C (NvmeControllerDeleteExtendedCommandPool.c)
 *     NvmeControllerDeleteExtendedCommandsInZombieList @ 0x14011FD00 (NvmeControllerDeleteExtendedCommandsInZombieList.c)
 *     NvmeControllerFreePendingZombieCommands @ 0x14011FE2C (NvmeControllerFreePendingZombieCommands.c)
 * Callees:
 *     NvmeFreeContiguousMemory @ 0x14008FBD8 (NvmeFreeContiguousMemory.c)
 */

void __fastcall NvmeControllerFreeExtendedCommand(__int64 a1, _QWORD *a2)
{
  void *v4; // rcx

  if ( a2 )
  {
    v4 = (void *)a2[7];
    if ( v4 )
    {
      ExFreePoolWithTag(v4, 0x52436152u);
      a2[7] = 0LL;
    }
    if ( *a2 )
    {
      NvmeFreeContiguousMemory(*(_QWORD *)(a1 + 128), *a2, 4272LL, a2[1]);
      *a2 = 0LL;
    }
    ExFreePoolWithTag(a2, 0x52436152u);
  }
}
