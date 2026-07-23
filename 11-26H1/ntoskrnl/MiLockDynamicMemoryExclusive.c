/*
 * XREFs of MiLockDynamicMemoryExclusive @ 0x140529F60
 * Callers:
 *     MiFreeUnusedPfnPages @ 0x1406ED570 (MiFreeUnusedPfnPages.c)
 *     MiClearPartitionPageBitMap @ 0x14070D4BC (MiClearPartitionPageBitMap.c)
 *     MiInsertPartitionPageNodes @ 0x14070DBDC (MiInsertPartitionPageNodes.c)
 *     MiRebuildPartitionMemoryBlock @ 0x14070E274 (MiRebuildPartitionMemoryBlock.c)
 *     MiReturnPartitionPagesToParent @ 0x14070E56C (MiReturnPartitionPagesToParent.c)
 *     MiAcquireAddMemoryLocks @ 0x14086B2F4 (MiAcquireAddMemoryLocks.c)
 *     MiUpdatePartitionLargePfnBitMap @ 0x14088314C (MiUpdatePartitionLargePfnBitMap.c)
 *     MiNodeZeroConductor @ 0x140B29DD0 (MiNodeZeroConductor.c)
 *     MiInitializeMirroring @ 0x140CFEE64 (MiInitializeMirroring.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 */

void __fastcall MiLockDynamicMemoryExclusive(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned __int64 *v4; // rdi
  AutoBoost *v5; // rax
  void *v6; // rdx
  AutoBoost *v7; // rbx

  --*(_WORD *)(a2 + 486);
  v4 = (unsigned __int64 *)(a1 + 264);
  v5 = (AutoBoost *)KeAbPreAcquire(a1 + 264, 0LL, 0LL, a4);
  v7 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(v4, v5, (__int64)v4);
  if ( v7 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v7, v6);
    else
      *((_BYTE *)v7 + 10) = 1;
  }
}
