/*
 * XREFs of NvmeControllerFreePendingZombieCommands @ 0x14011FE2C
 * Callers:
 *     NvmeControllerDeleteExtendedCommandPool @ 0x14011FC7C (NvmeControllerDeleteExtendedCommandPool.c)
 *     NvmeControllerResetRecovery @ 0x14012BD30 (NvmeControllerResetRecovery.c)
 * Callees:
 *     NvmeControllerFreeExtendedCommand @ 0x1400589E4 (NvmeControllerFreeExtendedCommand.c)
 */

PSLIST_ENTRY __fastcall NvmeControllerFreePendingZombieCommands(__int64 a1)
{
  union _SLIST_HEADER *v2; // rdi
  PSLIST_ENTRY result; // rax

  v2 = (union _SLIST_HEADER *)(a1 + 1152);
  while ( 1 )
  {
    result = ExpInterlockedPopEntrySList(v2);
    if ( !result )
      break;
    NvmeControllerFreeExtendedCommand(a1, &result[-1].Next);
  }
  return result;
}
