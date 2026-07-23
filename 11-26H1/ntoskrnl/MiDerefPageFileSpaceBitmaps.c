/*
 * XREFs of MiDerefPageFileSpaceBitmaps @ 0x14040353C
 * Callers:
 *     MiBuildReservationCluster @ 0x14033F334 (MiBuildReservationCluster.c)
 *     MiFindPageFileWriteCluster @ 0x1403FEDBC (MiFindPageFileWriteCluster.c)
 *     MiStoreWriteModifiedPages @ 0x140401E78 (MiStoreWriteModifiedPages.c)
 *     MiStoreWriteModifiedPagePrepare @ 0x1404022B0 (MiStoreWriteModifiedPagePrepare.c)
 *     MiStoreContractVirtualPagefileApc @ 0x1404B5E00 (MiStoreContractVirtualPagefileApc.c)
 *     MiChangePagingFileMaximum @ 0x1406FD580 (MiChangePagingFileMaximum.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
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
