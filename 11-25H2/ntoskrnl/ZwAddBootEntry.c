/*
 * XREFs of ZwAddBootEntry @ 0x14069BE80
 * Callers:
 *     DifZwAddBootEntryWrapper @ 0x14062F440 (DifZwAddBootEntryWrapper.c)
 *     BiAddBootEntry @ 0x140804DD4 (BiAddBootEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAddBootEntry(PBOOT_ENTRY BootEntry, PULONG Id)
{
  _disable();
  __readeflags();
  return KiServiceInternal(BootEntry);
}
