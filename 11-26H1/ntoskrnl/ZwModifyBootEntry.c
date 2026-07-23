/*
 * XREFs of ZwModifyBootEntry @ 0x14072A3C0
 * Callers:
 *     DifZwModifyBootEntryWrapper @ 0x1406AE140 (DifZwModifyBootEntryWrapper.c)
 *     BiModifyBootEntry @ 0x14089A48C (BiModifyBootEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwModifyBootEntry(PBOOT_ENTRY BootEntry)
{
  _disable();
  __readeflags();
  return KiServiceInternal(BootEntry);
}
