/*
 * XREFs of ZwModifyBootEntry @ 0x14069D520
 * Callers:
 *     DifZwModifyBootEntryWrapper @ 0x140634F30 (DifZwModifyBootEntryWrapper.c)
 *     BiModifyBootEntry @ 0x1408059F4 (BiModifyBootEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwModifyBootEntry(PBOOT_ENTRY BootEntry)
{
  _disable();
  __readeflags();
  return KiServiceInternal(BootEntry);
}
