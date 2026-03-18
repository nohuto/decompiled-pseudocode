/*
 * XREFs of MmPageEntireDriver @ 0x140AC9AA0
 * Callers:
 *     DifMmPageEntireDriverWrapper @ 0x140667C50 (DifMmPageEntireDriverWrapper.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14024C8D0 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiSetPagingOfDriver @ 0x14030F6BC (MiSetPagingOfDriver.c)
 *     MiGetPteAddress @ 0x1404468C0 (MiGetPteAddress.c)
 *     MiLockLoadedDataTableEntryIfNecessary @ 0x1404ABD44 (MiLockLoadedDataTableEntryIfNecessary.c)
 *     KeFlushQueuedDpcs @ 0x14051BE50 (KeFlushQueuedDpcs.c)
 *     MmUnlockLoadedDataTableEntry @ 0x14051E3A8 (MmUnlockLoadedDataTableEntry.c)
 *     MiCancelPhase0Locking @ 0x140AC9B58 (MiCancelPhase0Locking.c)
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
  if ( (dword_140FBE204 & 1) == 0 )
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
