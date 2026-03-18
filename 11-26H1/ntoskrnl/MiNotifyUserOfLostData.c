/*
 * XREFs of MiNotifyUserOfLostData @ 0x140527B18
 * Callers:
 *     MiWriteComplete @ 0x14040A870 (MiWriteComplete.c)
 *     MiDeleteCachedSubsection @ 0x1405108F0 (MiDeleteCachedSubsection.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 *     ExAllocatePoolMm @ 0x1403985B0 (ExAllocatePoolMm.c)
 *     ObFastReferenceObjectLocked @ 0x14048CC4C (ObFastReferenceObjectLocked.c)
 */

__int64 __fastcall MiNotifyUserOfLostData(__int64 a1, int a2)
{
  volatile LONG *v2; // rbx
  int v5; // edi
  KIRQL v6; // al
  int v7; // r8d
  __int64 PoolMm; // rax
  __int64 v9; // rbx

  v2 = (volatile LONG *)(a1 + 72);
  v5 = 0;
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  v7 = *(_DWORD *)(a1 + 56);
  if ( (v7 & 0x800) == 0 )
  {
    v5 = 1;
    *(_DWORD *)(a1 + 56) = v7 | 0x800;
  }
  if ( v6 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v2);
  else
    ExReleaseSpinLockExclusive(v2, v6);
  if ( !v5 )
    return 0LL;
  PoolMm = ExAllocatePoolMm(
             64LL,
             0x38uLL,
             1885629773,
             KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] | 0x80000000);
  v9 = PoolMm;
  if ( !PoolMm )
    return 0LL;
  *(_DWORD *)(PoolMm + 40) = a2;
  *(_QWORD *)(PoolMm + 32) = ObFastReferenceObjectLocked((_QWORD *)(a1 + 64), 0x63536D4Du);
  *(_QWORD *)(v9 + 16) = MiLdwPopupWorker;
  *(_BYTE *)(v9 + 48) = 1;
  *(_QWORD *)(v9 + 24) = v9;
  *(_QWORD *)v9 = 0LL;
  ExQueueWorkItem((PWORK_QUEUE_ITEM)v9, DelayedWorkQueue);
  return 1LL;
}
