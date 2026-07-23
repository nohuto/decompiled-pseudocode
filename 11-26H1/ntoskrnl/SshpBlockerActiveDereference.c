/*
 * XREFs of SshpBlockerActiveDereference @ 0x140257E48
 * Callers:
 *     SleepstudyHelperBlockerActiveDereference @ 0x140257DF0 (SleepstudyHelperBlockerActiveDereference.c)
 *     SshpDereferenceBlocker @ 0x1404955E0 (SshpDereferenceBlocker.c)
 *     SleepstudyHelperDestroyLibrary @ 0x140616EC0 (SleepstudyHelperDestroyLibrary.c)
 * Callees:
 *     SshpIterateParentBlockers @ 0x140257F0C (SshpIterateParentBlockers.c)
 */

__int64 __fastcall SshpBlockerActiveDereference(__int64 a1, int a2)
{
  unsigned int v2; // ebx

  if ( *(_DWORD *)(a1 + 20) < a2 )
  {
    return (unsigned int)-1073741675;
  }
  else
  {
    v2 = 0;
    SshpIterateParentBlockers((PKSPIN_LOCK)a1);
  }
  return v2;
}
