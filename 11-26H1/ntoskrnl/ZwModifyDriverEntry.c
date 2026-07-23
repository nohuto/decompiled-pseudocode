/*
 * XREFs of ZwModifyDriverEntry @ 0x14072A3E0
 * Callers:
 *     DifZwModifyDriverEntryWrapper @ 0x1406AE2B0 (DifZwModifyDriverEntryWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwModifyDriverEntry(PEFI_DRIVER_ENTRY DriverEntry)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DriverEntry);
}
