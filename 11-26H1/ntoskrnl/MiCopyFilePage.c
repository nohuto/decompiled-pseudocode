/*
 * XREFs of MiCopyFilePage @ 0x1406FE0B0
 * Callers:
 *     MiTransferFileExtent @ 0x1404FDB1C (MiTransferFileExtent.c)
 * Callees:
 *     MiGetPteFromCopyList @ 0x1402849F0 (MiGetPteFromCopyList.c)
 *     MiGetPteMappingSet @ 0x140448100 (MiGetPteMappingSet.c)
 *     MiReturnPteMappingSet @ 0x14044E8C0 (MiReturnPteMappingSet.c)
 *     MiPersistVa @ 0x1406FF85C (MiPersistVa.c)
 *     KeCopyPageNoOverride @ 0x140735430 (KeCopyPageNoOverride.c)
 */

struct _KPRCB *__fastcall MiCopyFilePage(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 PteFromCopyList; // rdi
  __int64 v7; // rbx
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+30h] [rbp-18h]

  v9 = 0LL;
  v10 = 0LL;
  MiGetPteMappingSet(0, 2LL, (__int64)&v9);
  PteFromCopyList = MiGetPteFromCopyList((unsigned int *)&v9, a1, a2);
  v7 = (__int64)(PteFromCopyList << 25) >> 16;
  KeCopyPageNoOverride(v7, v7 + 4096, 1LL);
  if ( a3 )
    MiPersistVa(v7);
  *(_QWORD *)PteFromCopyList = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  *(_QWORD *)(PteFromCopyList + 8) = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  return MiReturnPteMappingSet((__int64)&v9);
}
