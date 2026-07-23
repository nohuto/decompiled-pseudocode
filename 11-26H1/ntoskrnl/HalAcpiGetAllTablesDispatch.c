/*
 * XREFs of HalAcpiGetAllTablesDispatch @ 0x14057B850
 * Callers:
 *     <none>
 * Callees:
 *     HalpAcpiGetAllTables @ 0x140504F10 (HalpAcpiGetAllTables.c)
 */

__int64 HalAcpiGetAllTablesDispatch()
{
  return HalpAcpiGetAllTables();
}
