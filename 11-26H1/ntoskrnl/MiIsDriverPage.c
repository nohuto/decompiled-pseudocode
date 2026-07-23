/*
 * XREFs of MiIsDriverPage @ 0x1404B6920
 * Callers:
 *     MiProtoFaultGetProtection @ 0x1402BB1B0 (MiProtoFaultGetProtection.c)
 *     MiRemoveWsleList @ 0x1402CC5B0 (MiRemoveWsleList.c)
 *     MiAddWorkingSetEntries @ 0x1402CDB00 (MiAddWorkingSetEntries.c)
 *     MiProbeLeafPteAccess @ 0x1402D1510 (MiProbeLeafPteAccess.c)
 *     MiRemoveWsle @ 0x1403273B4 (MiRemoveWsle.c)
 * Callees:
 *     MmUnlockLoadedModuleListShared @ 0x140368B2C (MmUnlockLoadedModuleListShared.c)
 *     MmLockLoadedModuleListShared @ 0x140368BB4 (MmLockLoadedModuleListShared.c)
 *     MmFindDataTableEntryByAddress @ 0x140368C40 (MmFindDataTableEntryByAddress.c)
 *     MiImageContainsVa @ 0x1404B69B8 (MiImageContainsVa.c)
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
    for ( DataTableEntryByAddress = (struct _KTHREAD *)stru_140E2D2D0.SuspendEvent.Header.WaitListHead.Blink;
          DataTableEntryByAddress != (struct _KTHREAD *)&stru_140E2D2D0.SuspendEvent.Header.WaitListHead.Blink;
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
