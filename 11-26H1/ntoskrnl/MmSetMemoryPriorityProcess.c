/*
 * XREFs of MmSetMemoryPriorityProcess @ 0x1404D0A3C
 * Callers:
 *     PspComputeQuantumAndPriority @ 0x140AB8340 (PspComputeQuantumAndPriority.c)
 *     NtSetInformationProcess @ 0x140B781E0 (NtSetInformationProcess.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

void __fastcall MmSetMemoryPriorityProcess(__int64 a1, char a2)
{
  volatile LONG *v4; // rsi
  KIRQL v5; // al

  v4 = (volatile LONG *)(*(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * *(unsigned __int16 *)(a1 + 1198)) + 21384LL);
  v5 = ExAcquireSpinLockExclusive(v4);
  *(_BYTE *)(a1 + 1210) = a2;
  if ( v5 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v4);
  else
    ExReleaseSpinLockExclusive(v4, v5);
}
