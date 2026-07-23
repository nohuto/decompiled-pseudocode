/*
 * XREFs of ZwAddDriverEntry @ 0x14069BEA0
 * Callers:
 *     DifZwAddDriverEntryWrapper @ 0x14062F5B0 (DifZwAddDriverEntryWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAddDriverEntry(PEFI_DRIVER_ENTRY DriverEntry, PULONG Id)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DriverEntry);
}
