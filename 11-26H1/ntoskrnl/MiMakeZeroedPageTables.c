/*
 * XREFs of MiMakeZeroedPageTables @ 0x1402A4624
 * Callers:
 *     MiExpandPtes @ 0x140360B30 (MiExpandPtes.c)
 *     MiInitializeDynamicBitmap @ 0x1406F9D64 (MiInitializeDynamicBitmap.c)
 *     MiExpandPartitionIds @ 0x14086F3E8 (MiExpandPartitionIds.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x140874754 (MiApplyHotPatchToLoadedDriver.c)
 *     MiAllocateKernelCfgBitmapPageTables @ 0x140AC8E80 (MiAllocateKernelCfgBitmapPageTables.c)
 *     MiReserveDriverPtes @ 0x140B0C074 (MiReserveDriverPtes.c)
 *     MiReserveExistingDriverPtes @ 0x140B0C144 (MiReserveExistingDriverPtes.c)
 *     MiInitializeKernelCfg @ 0x140D04D10 (MiInitializeKernelCfg.c)
 *     MiCreateTopLevelUltraMappings @ 0x140D07D28 (MiCreateTopLevelUltraMappings.c)
 * Callees:
 *     MiMakeZeroedPageTablesEx @ 0x1402A46AC (MiMakeZeroedPageTablesEx.c)
 */

__int64 __fastcall MiMakeZeroedPageTables(int a1, int a2, int a3, int a4)
{
  return MiMakeZeroedPageTablesEx(a1, a2, a3, a4, 0);
}
