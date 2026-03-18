/*
 * XREFs of HalAcpiGetTableDispatch @ 0x140342A90
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutex @ 0x140278070 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     HalpAcpiGetTableWork @ 0x140342B6C (HalpAcpiGetTableWork.c)
 */

__int64 __fastcall HalAcpiGetTableDispatch(int a1, int a2, int a3)
{
  __int64 TableWork; // rbx

  ExAcquireFastMutex(&HalpAcpiTableCacheLock);
  TableWork = HalpAcpiGetTableWork(0, a1, a2, a3);
  KeReleaseGuardedMutex(&HalpAcpiTableCacheLock);
  return TableWork;
}
