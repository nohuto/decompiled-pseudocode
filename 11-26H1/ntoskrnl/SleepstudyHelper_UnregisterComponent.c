/*
 * XREFs of SleepstudyHelper_UnregisterComponent @ 0x140617250
 * Callers:
 *     <none>
 * Callees:
 *     SleepstudyHelperDestroyBlocker @ 0x1404955B0 (SleepstudyHelperDestroyBlocker.c)
 */

__int64 __fastcall SleepstudyHelper_UnregisterComponent(KSPIN_LOCK *a1)
{
  if ( a1 == (KSPIN_LOCK *)&unk_140F0A850 )
    return 0LL;
  else
    return SleepstudyHelperDestroyBlocker(a1);
}
