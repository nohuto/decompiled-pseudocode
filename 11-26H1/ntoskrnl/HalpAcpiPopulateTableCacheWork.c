/*
 * XREFs of HalpAcpiPopulateTableCacheWork @ 0x140587510
 * Callers:
 *     <none>
 * Callees:
 *     HalpMmAllocCtxFree @ 0x140359004 (HalpMmAllocCtxFree.c)
 *     HalpAcpiGetAllTables @ 0x14050B4A0 (HalpAcpiGetAllTables.c)
 */

__int64 __fastcall HalpAcpiPopulateTableCacheWork(__int64 a1)
{
  HalpMmAllocCtxFree(a1, a1);
  return HalpAcpiGetAllTables();
}
