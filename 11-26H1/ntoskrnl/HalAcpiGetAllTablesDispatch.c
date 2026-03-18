/*
 * XREFs of HalAcpiGetAllTablesDispatch @ 0x140579320
 * Callers:
 *     <none>
 * Callees:
 *     HalpAcpiGetAllTables @ 0x14050B4A0 (HalpAcpiGetAllTables.c)
 */

__int64 HalAcpiGetAllTablesDispatch()
{
  return HalpAcpiGetAllTables();
}
