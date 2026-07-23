/*
 * XREFs of NtAddBootEntry @ 0x1408432D0
 * Callers:
 *     DifNtAddBootEntryWrapper @ 0x14066DF70 (DifNtAddBootEntryWrapper.c)
 * Callees:
 *     ExpSetBootEntry @ 0x140842100 (ExpSetBootEntry.c)
 */

NTSTATUS __cdecl NtAddBootEntry(PBOOT_ENTRY BootEntry, PULONG Id)
{
  if ( LODWORD(ExpSysDbgLock.ThreadListEntry.Blink) == 2 )
    return ExpSetBootEntry(1, &BootEntry->Version, Id);
  else
    return -1073741822;
}
