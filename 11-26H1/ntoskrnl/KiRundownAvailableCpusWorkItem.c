/*
 * XREFs of KiRundownAvailableCpusWorkItem @ 0x140463B20
 * Callers:
 *     KeUnregisterAvailableCpusChangeNotification @ 0x1407B90F8 (KeUnregisterAvailableCpusChangeNotification.c)
 *     KeDeleteCpuPartition @ 0x1407BB114 (KeDeleteCpuPartition.c)
 *     PspProcessDelete @ 0x1407FB2E0 (PspProcessDelete.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x140463DA0 (ExWaitForRundownProtectionRelease.c)
 */

__int64 __fastcall KiRundownAvailableCpusWorkItem(struct _EX_RUNDOWN_REF *a1)
{
  volatile __int64 *v1; // rbx

  v1 = (volatile __int64 *)&a1[4];
  ExWaitForRundownProtectionRelease(a1 + 4);
  return _InterlockedExchange64(v1, 1LL);
}
