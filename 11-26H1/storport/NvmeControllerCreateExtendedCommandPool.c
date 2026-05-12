/*
 * XREFs of NvmeControllerCreateExtendedCommandPool @ 0x14011FB74
 * Callers:
 *     NvmeAdapterFinalizeStorMQMiniportControllerStart @ 0x1400D52F4 (NvmeAdapterFinalizeStorMQMiniportControllerStart.c)
 *     NvmeControllerEssentialInitialize @ 0x1400F2C48 (NvmeControllerEssentialInitialize.c)
 * Callees:
 *     NvmeControllerAllocateExtendedCommand @ 0x140058910 (NvmeControllerAllocateExtendedCommand.c)
 */

__int64 __fastcall NvmeControllerCreateExtendedCommandPool(union _SLIST_HEADER *a1)
{
  union _SLIST_HEADER *v1; // rdi
  struct _SLIST_ENTRY *ExtendedCommand; // rax

  v1 = a1 + 71;
  InitializeSListHead(a1 + 71);
  InitializeSListHead(a1 + 73);
  InitializeSListHead(a1 + 72);
  ExtendedCommand = (struct _SLIST_ENTRY *)NvmeControllerAllocateExtendedCommand((__int64)a1);
  if ( !ExtendedCommand )
    return 3221225626LL;
  ExpInterlockedPushEntrySList(v1, ExtendedCommand + 1);
  return 0LL;
}
