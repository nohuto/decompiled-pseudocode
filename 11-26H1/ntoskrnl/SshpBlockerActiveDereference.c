/*
 * XREFs of SshpBlockerActiveDereference @ 0x1402564B8
 * Callers:
 *     SleepstudyHelperBlockerActiveDereference @ 0x140256460 (SleepstudyHelperBlockerActiveDereference.c)
 *     SshpDereferenceBlocker @ 0x14049BA90 (SshpDereferenceBlocker.c)
 *     SleepstudyHelperDestroyLibrary @ 0x140614000 (SleepstudyHelperDestroyLibrary.c)
 * Callees:
 *     SshpIterateParentBlockers @ 0x14025657C (SshpIterateParentBlockers.c)
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
