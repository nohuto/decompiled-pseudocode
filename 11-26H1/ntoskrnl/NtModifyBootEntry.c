/*
 * XREFs of NtModifyBootEntry @ 0x140843D50
 * Callers:
 *     DifNtModifyBootEntryWrapper @ 0x14067F940 (DifNtModifyBootEntryWrapper.c)
 * Callees:
 *     ExpSetBootEntry @ 0x140842100 (ExpSetBootEntry.c)
 */

NTSTATUS __cdecl NtModifyBootEntry(PBOOT_ENTRY BootEntry)
{
  if ( LODWORD(ExpSysDbgLock.ThreadListEntry.Blink) == 2 )
    return ExpSetBootEntry(0, &BootEntry->Version, 0LL);
  else
    return -1073741822;
}
