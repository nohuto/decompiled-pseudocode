/*
 * XREFs of NtAddDriverEntry @ 0x14083D0C0
 * Callers:
 *     DifNtAddDriverEntryWrapper @ 0x14066A500 (DifNtAddDriverEntryWrapper.c)
 * Callees:
 *     ExpSetDriverEntry @ 0x14083C5DC (ExpSetDriverEntry.c)
 */

__int64 __fastcall NtAddDriverEntry(unsigned int *a1, unsigned int *a2)
{
  if ( *(_DWORD *)&ExpSysDbgLock.SchedulerApcFill5[64] == 2 )
    return ExpSetDriverEntry(1, a1, a2);
  else
    return 3221225474LL;
}
