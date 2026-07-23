/*
 * XREFs of HalAcpiGetTableDispatch @ 0x140344B10
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     HalpAcpiGetTableWork @ 0x140344BEC (HalpAcpiGetTableWork.c)
 */

__int64 __fastcall HalAcpiGetTableDispatch(int a1, int a2, int a3)
{
  __int64 TableWork; // rbx

  ExAcquireFastMutex(&HalpAcpiTableCacheLock);
  TableWork = HalpAcpiGetTableWork(0, a1, a2, a3);
  KeReleaseGuardedMutex(&HalpAcpiTableCacheLock);
  return TableWork;
}
