/*
 * XREFs of NtModifyDriverEntry @ 0x140843D80
 * Callers:
 *     DifNtModifyDriverEntryWrapper @ 0x14067FAB0 (DifNtModifyDriverEntryWrapper.c)
 * Callees:
 *     ExpSetDriverEntry @ 0x14084281C (ExpSetDriverEntry.c)
 */

NTSTATUS __cdecl NtModifyDriverEntry(PEFI_DRIVER_ENTRY DriverEntry)
{
  if ( LODWORD(ExpSysDbgLock.ThreadListEntry.Blink) == 2 )
    return ExpSetDriverEntry(0, &DriverEntry->Version, 0LL);
  else
    return -1073741822;
}
