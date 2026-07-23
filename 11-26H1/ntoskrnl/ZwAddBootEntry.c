/*
 * XREFs of ZwAddBootEntry @ 0x140728D00
 * Callers:
 *     DifZwAddBootEntryWrapper @ 0x14069C440 (DifZwAddBootEntryWrapper.c)
 *     BiAddBootEntry @ 0x14089999C (BiAddBootEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAddBootEntry(PBOOT_ENTRY BootEntry, PULONG Id)
{
  _disable();
  __readeflags();
  return KiServiceInternal(BootEntry);
}
