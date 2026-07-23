/*
 * XREFs of ZwModifyDriverEntry @ 0x14069D540
 * Callers:
 *     DifZwModifyDriverEntryWrapper @ 0x1406350A0 (DifZwModifyDriverEntryWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwModifyDriverEntry(PEFI_DRIVER_ENTRY DriverEntry)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DriverEntry);
}
