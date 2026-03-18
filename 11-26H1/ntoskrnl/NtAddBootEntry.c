/*
 * XREFs of NtAddBootEntry @ 0x14083D090
 * Callers:
 *     DifNtAddBootEntryWrapper @ 0x14066A390 (DifNtAddBootEntryWrapper.c)
 * Callees:
 *     ExpSetBootEntry @ 0x14083BEC0 (ExpSetBootEntry.c)
 */

__int64 __fastcall NtAddBootEntry(unsigned int *a1, unsigned int *a2)
{
  if ( *(_DWORD *)&ExpSysDbgLock.SchedulerApcFill5[64] == 2 )
    return ExpSetBootEntry(1, a1, a2);
  else
    return 3221225474LL;
}
