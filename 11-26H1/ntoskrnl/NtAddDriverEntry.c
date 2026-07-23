/*
 * XREFs of NtAddDriverEntry @ 0x140843300
 * Callers:
 *     DifNtAddDriverEntryWrapper @ 0x14066E0E0 (DifNtAddDriverEntryWrapper.c)
 * Callees:
 *     ExpSetDriverEntry @ 0x14084281C (ExpSetDriverEntry.c)
 */

NTSTATUS __cdecl NtAddDriverEntry(PEFI_DRIVER_ENTRY DriverEntry, PULONG Id)
{
  if ( LODWORD(ExpSysDbgLock.ThreadListEntry.Blink) == 2 )
    return ExpSetDriverEntry(1, &DriverEntry->Version, Id);
  else
    return -1073741822;
}
