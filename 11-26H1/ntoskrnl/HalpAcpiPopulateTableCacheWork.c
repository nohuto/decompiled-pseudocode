/*
 * XREFs of HalpAcpiPopulateTableCacheWork @ 0x140589A30
 * Callers:
 *     <none>
 * Callees:
 *     HalpMmAllocCtxFree @ 0x14035ADA4 (HalpMmAllocCtxFree.c)
 *     HalpAcpiGetAllTables @ 0x140504F10 (HalpAcpiGetAllTables.c)
 */

__int64 __fastcall HalpAcpiPopulateTableCacheWork(__int64 a1)
{
  HalpMmAllocCtxFree(a1, a1);
  return HalpAcpiGetAllTables();
}
