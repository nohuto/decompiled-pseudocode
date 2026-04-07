/*
 * XREFs of ?AllocTableData@?$CGenericTableMap@PEAUHWND__@@VMagnifierTableElement@CMagnifierControl@@@@CAPEAXPEAU_RTL_GENERIC_TABLE@@K@Z @ 0x180086120
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __fastcall CGenericTableMap<HWND__ *,CMagnifierControl::MagnifierTableElement>::AllocTableData(
        struct _RTL_GENERIC_TABLE *Table,
        CLONG ByteSize)
{
  return DefaultHeap::Alloc(ByteSize);
}
