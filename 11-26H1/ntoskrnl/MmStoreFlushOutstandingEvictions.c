/*
 * XREFs of MmStoreFlushOutstandingEvictions @ 0x1404E538C
 * Callers:
 *     MiStoreDeletePartition @ 0x14070A2E4 (MiStoreDeletePartition.c)
 *     SmStoreCompressionStart @ 0x140AE9D90 (SmStoreCompressionStart.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeResetEvent @ 0x140395BB0 (KeResetEvent.c)
 */

NTSTATUS __fastcall MmStoreFlushOutstandingEvictions(_QWORD *a1)
{
  __int64 v1; // rbx
  volatile LONG *v2; // rdi
  KIRQL v3; // si

  v1 = *a1;
  v2 = (volatile LONG *)(*a1 + 1408LL);
  v3 = ExAcquireSpinLockExclusive(v2);
  if ( !*(_DWORD *)(v1 + 1312) )
    KeResetEvent((PRKEVENT)(v1 + 1488));
  ++*(_DWORD *)(v1 + 1312);
  if ( v3 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v2);
  else
    ExReleaseSpinLockExclusive(v2, v3);
  KeSetEvent((PRKEVENT)(v1 + 1424), 0, 0);
  return KeWaitForSingleObject((PVOID)(v1 + 1488), WrKernel, 0, 0, 0LL);
}
