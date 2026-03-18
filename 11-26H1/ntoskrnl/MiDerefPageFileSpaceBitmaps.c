/*
 * XREFs of MiDerefPageFileSpaceBitmaps @ 0x14040A44C
 * Callers:
 *     MiBuildReservationCluster @ 0x14033D2B4 (MiBuildReservationCluster.c)
 *     MiFindPageFileWriteCluster @ 0x140405CC8 (MiFindPageFileWriteCluster.c)
 *     MiStoreWriteModifiedPages @ 0x140408D88 (MiStoreWriteModifiedPages.c)
 *     MiStoreWriteModifiedPagePrepare @ 0x1404091C0 (MiStoreWriteModifiedPagePrepare.c)
 *     MiStoreContractVirtualPagefileApc @ 0x1404BC6C0 (MiStoreContractVirtualPagefileApc.c)
 *     MiChangePagingFileMaximum @ 0x1406F88B0 (MiChangePagingFileMaximum.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

int *__fastcall MiDerefPageFileSpaceBitmaps(__int64 a1, int **a2, int a3)
{
  int *v3; // rsi
  volatile LONG *v4; // rdi
  __int64 v5; // rbx
  KIRQL v7; // dl
  int v8; // ebp

  v3 = *a2;
  v4 = (volatile LONG *)(a1 + 200);
  v5 = 0LL;
  if ( a3 )
    v7 = 17;
  else
    v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 200));
  v8 = *v3 - 1;
  *v3 = v8;
  if ( !a3 )
  {
    if ( v7 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v4);
    else
      ExReleaseSpinLockExclusive(v4, v7);
  }
  if ( !v8 )
    return v3;
  return (int *)v5;
}
