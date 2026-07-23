/*
 * XREFs of MmPageEntireDriver @ 0x140ACBBB0
 * Callers:
 *     DifMmPageEntireDriverWrapper @ 0x14066B830 (DifMmPageEntireDriverWrapper.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14024E230 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiSetPagingOfDriver @ 0x1402F173C (MiSetPagingOfDriver.c)
 *     MiGetPteAddress @ 0x14043F3C0 (MiGetPteAddress.c)
 *     MiLockLoadedDataTableEntryIfNecessary @ 0x1404A53D4 (MiLockLoadedDataTableEntryIfNecessary.c)
 *     KeFlushQueuedDpcs @ 0x1405163E0 (KeFlushQueuedDpcs.c)
 *     MmUnlockLoadedDataTableEntry @ 0x1405209B8 (MmUnlockLoadedDataTableEntry.c)
 *     MiCancelPhase0Locking @ 0x140ACBC68 (MiCancelPhase0Locking.c)
 */

PVOID __stdcall MmPageEntireDriver(PVOID AddressWithinSection)
{
  struct _LIST_ENTRY *v2; // rax
  __int64 v3; // rsi
  struct _LIST_ENTRY *Flink; // rbp
  __int64 PteAddress; // rdi
  unsigned __int64 v6; // rbx
  int v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = 0;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS((unsigned __int64)AddressWithinSection) )
    return 0LL;
  v2 = MiLockLoadedDataTableEntryIfNecessary((unsigned __int64)AddressWithinSection, &v8);
  v3 = (__int64)v2;
  if ( !v2 )
    return 0LL;
  Flink = v2[3].Flink;
  if ( (dword_140FBF204 & 1) == 0 )
  {
    KeFlushQueuedDpcs();
    PteAddress = MiGetPteAddress((unsigned __int64)Flink);
    v6 = PteAddress + 8 * ((unsigned __int64)*(unsigned int *)(v3 + 64) >> 12);
    MiCancelPhase0Locking(v3);
    MiSetPagingOfDriver(v3, PteAddress, (unsigned __int64 *)(v6 - 8));
  }
  if ( v8 )
    MmUnlockLoadedDataTableEntry(v3);
  return Flink;
}
