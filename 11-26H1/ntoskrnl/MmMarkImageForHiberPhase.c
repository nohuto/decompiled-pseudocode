/*
 * XREFs of MmMarkImageForHiberPhase @ 0x140C076D8
 * Callers:
 *     PoSetHiberRange @ 0x1404A93F0 (PoSetHiberRange.c)
 *     MiMarkHiberProtectedImages @ 0x1406F477C (MiMarkHiberProtectedImages.c)
 * Callees:
 *     MmUnlockLoadedModuleListShared @ 0x140368B2C (MmUnlockLoadedModuleListShared.c)
 *     MmLockLoadedModuleListShared @ 0x140368BB4 (MmLockLoadedModuleListShared.c)
 *     MmFindDataTableEntryByAddress @ 0x140368C40 (MmFindDataTableEntryByAddress.c)
 *     MmGetLoadedModuleImageAdditionalTablesAddress @ 0x1403ED4E0 (MmGetLoadedModuleImageAdditionalTablesAddress.c)
 *     MiMarkNonPagedHiberPhasePages @ 0x140C06EE0 (MiMarkNonPagedHiberPhasePages.c)
 *     MiMarkHotPatchesForHiberPhase @ 0x140C079E4 (MiMarkHotPatchesForHiberPhase.c)
 */

__int64 __fastcall MmMarkImageForHiberPhase(unsigned __int64 a1)
{
  struct _LIST_ENTRY *DataTableEntryByAddress; // rdi
  unsigned __int8 v3; // r11
  unsigned __int64 LoadedModuleImageAdditionalTablesAddress; // rbx
  __int64 result; // rax
  int v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0;
  MmLockLoadedModuleListShared();
  DataTableEntryByAddress = MmFindDataTableEntryByAddress(a1);
  MmUnlockLoadedModuleListShared(v3);
  LoadedModuleImageAdditionalTablesAddress = MmGetLoadedModuleImageAdditionalTablesAddress(
                                               (__int64)DataTableEntryByAddress,
                                               &v6);
  result = MiMarkNonPagedHiberPhasePages(
             (__int64)DataTableEntryByAddress[3].Flink,
             (__int64)DataTableEntryByAddress[3].Flink + (unsigned int)(LODWORD(DataTableEntryByAddress[4].Flink) - 1),
             0);
  if ( v6 )
  {
    MiMarkNonPagedHiberPhasePages(
      LoadedModuleImageAdditionalTablesAddress,
      LoadedModuleImageAdditionalTablesAddress + (unsigned int)(v6 - 1),
      0);
    return MiMarkHotPatchesForHiberPhase(DataTableEntryByAddress);
  }
  return result;
}
