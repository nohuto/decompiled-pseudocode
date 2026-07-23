/*
 * XREFs of MiGetInPageAutoBoostLock @ 0x14039A2BC
 * Callers:
 *     MiPrefetchVirtualMemory @ 0x1403A2470 (MiPrefetchVirtualMemory.c)
 *     MiPrefetchControlArea @ 0x140A58548 (MiPrefetchControlArea.c)
 *     MmPrefetchPagesEx @ 0x140A5AD88 (MmPrefetchPagesEx.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 */

_QWORD *MiGetInPageAutoBoostLock()
{
  __int64 v0; // r9
  _QWORD *result; // rax

  v0 = KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
  LODWORD(v0) = v0 | 0x80000000;
  result = (_QWORD *)ExAllocatePoolMm(64LL, 8LL, 1095330125LL, v0);
  if ( result )
    *result = 1LL;
  return result;
}
