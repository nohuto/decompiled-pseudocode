/*
 * XREFs of ZwAddDriverEntry @ 0x140728D20
 * Callers:
 *     DifZwAddDriverEntryWrapper @ 0x14069C5B0 (DifZwAddDriverEntryWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAddDriverEntry(PEFI_DRIVER_ENTRY DriverEntry, PULONG Id)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DriverEntry);
}
