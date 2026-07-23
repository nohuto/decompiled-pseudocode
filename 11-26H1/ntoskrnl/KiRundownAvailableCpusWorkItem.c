/*
 * XREFs of KiRundownAvailableCpusWorkItem @ 0x14045CAE0
 * Callers:
 *     KeUnregisterAvailableCpusChangeNotification @ 0x1407BC158 (KeUnregisterAvailableCpusChangeNotification.c)
 *     KeDeleteCpuPartition @ 0x1407BE174 (KeDeleteCpuPartition.c)
 *     PspProcessDelete @ 0x140800D10 (PspProcessDelete.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x14045CD60 (ExWaitForRundownProtectionRelease.c)
 */

__int64 __fastcall KiRundownAvailableCpusWorkItem(struct _EX_RUNDOWN_REF *a1)
{
  volatile __int64 *v1; // rbx

  v1 = (volatile __int64 *)&a1[4];
  ExWaitForRundownProtectionRelease(a1 + 4);
  return _InterlockedExchange64(v1, 1LL);
}
