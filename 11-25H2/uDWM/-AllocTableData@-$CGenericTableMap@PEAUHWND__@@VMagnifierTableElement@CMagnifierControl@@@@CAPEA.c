/*
 * XREFs of ?AllocTableData@?$CGenericTableMap@PEAUHWND__@@VMagnifierTableElement@CMagnifierControl@@@@CAPEAXPEAU_RTL_GENERIC_TABLE@@K@Z @ 0x1800A9550
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
