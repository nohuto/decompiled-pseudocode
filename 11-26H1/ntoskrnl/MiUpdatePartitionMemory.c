/*
 * XREFs of MiUpdatePartitionMemory @ 0x14070EBD0
 * Callers:
 *     MiMakePartitionMemoryBlock @ 0x1408829D4 (MiMakePartitionMemoryBlock.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiDereferencePageRuns @ 0x1403D34E4 (MiDereferencePageRuns.c)
 *     MiComputeNodeMemory @ 0x1406ECB90 (MiComputeNodeMemory.c)
 */

void __fastcall MiUpdatePartitionMemory(__int64 a1, __int64 a2, int a3)
{
  volatile LONG *v3; // rbp
  KIRQL v7; // al
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // r14

  v3 = (volatile LONG *)(a1 + 272);
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 272));
  v8 = *(_QWORD *)(a2 + 16);
  v9 = *(_QWORD *)(a1 + 80);
  v10 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(a1 + 80) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 32) = v8;
  if ( v7 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v3);
  else
    ExReleaseSpinLockExclusive(v3, v7);
  MiComputeNodeMemory((ULONG *)a1, a3);
  if ( v10 )
    MiDereferencePageRuns(v10);
  if ( v9 )
    MiDereferencePageRuns(v9);
}
