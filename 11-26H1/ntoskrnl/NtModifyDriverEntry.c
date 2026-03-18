/*
 * XREFs of NtModifyDriverEntry @ 0x14083DB40
 * Callers:
 *     DifNtModifyDriverEntryWrapper @ 0x14067BED0 (DifNtModifyDriverEntryWrapper.c)
 * Callees:
 *     ExpSetDriverEntry @ 0x14083C5DC (ExpSetDriverEntry.c)
 */

__int64 __fastcall NtModifyDriverEntry(unsigned int *a1)
{
  if ( *(_DWORD *)&ExpSysDbgLock.SchedulerApcFill5[64] == 2 )
    return ExpSetDriverEntry(0, a1, 0LL);
  else
    return 3221225474LL;
}
