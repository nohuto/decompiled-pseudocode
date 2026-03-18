/*
 * XREFs of MiLockDynamicMemoryExclusive @ 0x1405278F0
 * Callers:
 *     MiFreeUnusedPfnPages @ 0x1406E88D0 (MiFreeUnusedPfnPages.c)
 *     MiClearPartitionPageBitMap @ 0x140708808 (MiClearPartitionPageBitMap.c)
 *     MiInsertPartitionPageNodes @ 0x140708F28 (MiInsertPartitionPageNodes.c)
 *     MiRebuildPartitionMemoryBlock @ 0x1407095C0 (MiRebuildPartitionMemoryBlock.c)
 *     MiReturnPartitionPagesToParent @ 0x1407098B8 (MiReturnPartitionPagesToParent.c)
 *     MiAcquireAddMemoryLocks @ 0x140864F14 (MiAcquireAddMemoryLocks.c)
 *     MiUpdatePartitionLargePfnBitMap @ 0x14087CD4C (MiUpdatePartitionLargePfnBitMap.c)
 *     MiNodeZeroConductor @ 0x140B27510 (MiNodeZeroConductor.c)
 *     MiInitializeMirroring @ 0x140CF8AE4 (MiInitializeMirroring.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
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
