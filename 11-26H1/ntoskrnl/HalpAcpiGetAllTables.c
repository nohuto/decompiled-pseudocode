/*
 * XREFs of HalpAcpiGetAllTables @ 0x14050B4A0
 * Callers:
 *     HalAcpiGetAllTablesDispatch @ 0x140579320 (HalAcpiGetAllTablesDispatch.c)
 *     HalpAcpiPopulateTableCacheWork @ 0x140587510 (HalpAcpiPopulateTableCacheWork.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140278070 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     HalpAcpiGetAllTablesWork @ 0x14057957C (HalpAcpiGetAllTablesWork.c)
 */

__int64 HalpAcpiGetAllTables()
{
  __int64 AllTablesWork; // rbx

  ExAcquireFastMutex(&HalpAcpiTableCacheLock);
  AllTablesWork = HalpAcpiGetAllTablesWork();
  KeReleaseGuardedMutex(&HalpAcpiTableCacheLock);
  return AllTablesWork;
}
