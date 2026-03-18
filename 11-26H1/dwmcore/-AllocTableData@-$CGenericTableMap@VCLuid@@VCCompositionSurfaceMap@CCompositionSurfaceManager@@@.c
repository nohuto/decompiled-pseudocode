/*
 * XREFs of ?AllocTableData@?$CGenericTableMap@VCLuid@@VCCompositionSurfaceMap@CCompositionSurfaceManager@@@@CAPEAXPEAU_RTL_GENERIC_TABLE@@K@Z @ 0x1801C7850
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __fastcall CGenericTableMap<CLuid,CCompositionSurfaceManager::CCompositionSurfaceMap>::AllocTableData(
        struct _RTL_GENERIC_TABLE *Table,
        CLONG ByteSize)
{
  return MIDL_user_allocate(ByteSize);
}
