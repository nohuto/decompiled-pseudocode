/*
 * XREFs of MmSetMemoryPriorityProcess @ 0x1404D726C
 * Callers:
 *     PspAllocateProcess @ 0x140964C24 (PspAllocateProcess.c)
 *     PspComputeQuantumAndPriority @ 0x140966A94 (PspComputeQuantumAndPriority.c)
 *     NtSetInformationProcess @ 0x140B72B10 (NtSetInformationProcess.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

void __fastcall MmSetMemoryPriorityProcess(__int64 a1, char a2)
{
  volatile LONG *v4; // rsi
  KIRQL v5; // al

  v4 = (volatile LONG *)(*(_QWORD *)(stru_140E2EB88.ThreadLock + 8LL * *(unsigned __int16 *)(a1 + 1198)) + 21384LL);
  v5 = ExAcquireSpinLockExclusive(v4);
  *(_BYTE *)(a1 + 1210) = a2;
  if ( v5 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v4);
  else
    ExReleaseSpinLockExclusive(v4, v5);
}
