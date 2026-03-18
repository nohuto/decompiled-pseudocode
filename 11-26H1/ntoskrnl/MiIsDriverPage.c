/*
 * XREFs of MiIsDriverPage @ 0x1404BD140
 * Callers:
 *     MiProtoFaultGetProtection @ 0x1402D93F0 (MiProtoFaultGetProtection.c)
 *     MiRemoveWsleList @ 0x1402EA570 (MiRemoveWsleList.c)
 *     MiAddWorkingSetEntries @ 0x1402EBAC0 (MiAddWorkingSetEntries.c)
 *     MiProbeLeafPteAccess @ 0x1402EF490 (MiProbeLeafPteAccess.c)
 *     MiRemoveWsle @ 0x140325384 (MiRemoveWsle.c)
 * Callees:
 *     MmUnlockLoadedModuleListShared @ 0x140366D8C (MmUnlockLoadedModuleListShared.c)
 *     MmLockLoadedModuleListShared @ 0x140366E14 (MmLockLoadedModuleListShared.c)
 *     MmFindDataTableEntryByAddress @ 0x140366EA0 (MmFindDataTableEntryByAddress.c)
 *     MiImageContainsVa @ 0x1404BD1D8 (MiImageContainsVa.c)
 */

struct _KTHREAD *__fastcall MiIsDriverPage(__int64 a1, int a2)
{
  unsigned __int64 v3; // rdi
  struct _KTHREAD *DataTableEntryByAddress; // rbx
  unsigned __int8 v5; // r11

  v3 = a1 << 25 >> 16;
  MmLockLoadedModuleListShared();
  DataTableEntryByAddress = (struct _KTHREAD *)MmFindDataTableEntryByAddress(v3);
  if ( !DataTableEntryByAddress && a2 )
  {
    for ( DataTableEntryByAddress = (struct _KTHREAD *)stru_140E2D150.SuspendEvent.Header.WaitListHead.Blink;
          DataTableEntryByAddress != (struct _KTHREAD *)&stru_140E2D150.SuspendEvent.Header.WaitListHead.Blink;
          DataTableEntryByAddress = *(struct _KTHREAD **)&DataTableEntryByAddress->Header.Lock )
    {
      if ( (unsigned int)MiImageContainsVa(DataTableEntryByAddress, v3) )
        goto LABEL_2;
    }
    DataTableEntryByAddress = 0LL;
  }
LABEL_2:
  MmUnlockLoadedModuleListShared(v5);
  return DataTableEntryByAddress;
}
