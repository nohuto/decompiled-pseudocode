/*
 * XREFs of NtModifyBootEntry @ 0x14083DB10
 * Callers:
 *     DifNtModifyBootEntryWrapper @ 0x14067BD60 (DifNtModifyBootEntryWrapper.c)
 * Callees:
 *     ExpSetBootEntry @ 0x14083BEC0 (ExpSetBootEntry.c)
 */

__int64 __fastcall NtModifyBootEntry(unsigned int *a1)
{
  if ( *(_DWORD *)&ExpSysDbgLock.SchedulerApcFill5[64] == 2 )
    return ExpSetBootEntry(0, a1, 0LL);
  else
    return 3221225474LL;
}
