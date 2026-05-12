/*
 * XREFs of NvmeControllerDeleteExtendedCommandPool @ 0x14011FC7C
 * Callers:
 *     NvmeAdapterDeleteNvmeController @ 0x1400E74A8 (NvmeAdapterDeleteNvmeController.c)
 * Callees:
 *     NvmeControllerFreeExtendedCommand @ 0x1400589E4 (NvmeControllerFreeExtendedCommand.c)
 *     NvmeControllerDeleteExtendedCommandsInZombieList @ 0x14011FD00 (NvmeControllerDeleteExtendedCommandsInZombieList.c)
 *     NvmeControllerFreePendingZombieCommands @ 0x14011FE2C (NvmeControllerFreePendingZombieCommands.c)
 */

void __fastcall NvmeControllerDeleteExtendedCommandPool(__int64 a1)
{
  union _SLIST_HEADER *v2; // rdi
  PSLIST_ENTRY v3; // rax
  void *v4; // rcx

  if ( a1 )
  {
    v2 = (union _SLIST_HEADER *)(a1 + 1136);
    while ( 1 )
    {
      v3 = ExpInterlockedPopEntrySList(v2);
      if ( !v3 )
        break;
      NvmeControllerFreeExtendedCommand(a1, &v3[-1].Next);
    }
    NvmeControllerDeleteExtendedCommandsInZombieList(a1);
    v4 = *(void **)(a1 + 1184);
    if ( v4 )
    {
      ExFreePoolWithTag(v4, 0x52436152u);
      *(_QWORD *)(a1 + 1184) = 0LL;
    }
    NvmeControllerFreePendingZombieCommands(a1);
  }
}
