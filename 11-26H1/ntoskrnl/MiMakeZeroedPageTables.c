/*
 * XREFs of MiMakeZeroedPageTables @ 0x1402A50D4
 * Callers:
 *     MiExpandPtes @ 0x14035ED90 (MiExpandPtes.c)
 *     MiInitializeDynamicBitmap @ 0x1406F50F4 (MiInitializeDynamicBitmap.c)
 *     MiExpandPartitionIds @ 0x140869008 (MiExpandPartitionIds.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x14086E384 (MiApplyHotPatchToLoadedDriver.c)
 *     MiAllocateKernelCfgBitmapPageTables @ 0x140AC7290 (MiAllocateKernelCfgBitmapPageTables.c)
 *     MiReserveDriverPtes @ 0x140B0A2B4 (MiReserveDriverPtes.c)
 *     MiReserveExistingDriverPtes @ 0x140B0A384 (MiReserveExistingDriverPtes.c)
 *     MiInitializeKernelCfg @ 0x140CFE970 (MiInitializeKernelCfg.c)
 *     MiCreateTopLevelUltraMappings @ 0x140D01988 (MiCreateTopLevelUltraMappings.c)
 * Callees:
 *     MiMakeZeroedPageTablesEx @ 0x1402A515C (MiMakeZeroedPageTablesEx.c)
 */

__int64 __fastcall MiMakeZeroedPageTables(int a1, int a2, int a3, int a4)
{
  return MiMakeZeroedPageTablesEx(a1, a2, a3, a4, 0);
}
