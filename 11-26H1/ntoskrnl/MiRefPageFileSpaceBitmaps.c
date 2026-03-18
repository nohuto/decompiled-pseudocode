/*
 * XREFs of MiRefPageFileSpaceBitmaps @ 0x1404ABE74
 * Callers:
 *     MiBuildReservationCluster @ 0x14033D2B4 (MiBuildReservationCluster.c)
 *     MiFindPageFileWriteCluster @ 0x140405CC8 (MiFindPageFileWriteCluster.c)
 *     MiStoreWriteModifiedPagePrepare @ 0x1404091C0 (MiStoreWriteModifiedPagePrepare.c)
 *     MiStoreContractVirtualPagefileApc @ 0x1404BC6C0 (MiStoreContractVirtualPagefileApc.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

void __fastcall MiRefPageFileSpaceBitmaps(int *a1, __int64 a2)
{
  volatile LONG *v2; // rbp
  KIRQL v5; // al
  __int64 v6; // rsi
  int v7; // ebx

  v2 = a1 + 50;
  v5 = ExAcquireSpinLockExclusive(a1 + 50);
  v6 = *((_QWORD *)a1 + 10);
  ++*(_DWORD *)v6;
  *(_OWORD *)a2 = *(_OWORD *)v6;
  *(_OWORD *)(a2 + 16) = *(_OWORD *)(v6 + 16);
  *(_QWORD *)(a2 + 32) = *(_QWORD *)(v6 + 32);
  v7 = *a1;
  if ( v5 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v2);
  else
    ExReleaseSpinLockExclusive(v2, v5);
  *(_QWORD *)a2 = v6;
  *(_DWORD *)(a2 + 8) = v7;
  *(_DWORD *)(a2 + 24) = v7;
}
