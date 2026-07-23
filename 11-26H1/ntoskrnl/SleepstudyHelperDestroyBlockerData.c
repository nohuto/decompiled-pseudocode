/*
 * XREFs of SleepstudyHelperDestroyBlockerData @ 0x1407E9F00
 * Callers:
 *     <none>
 * Callees:
 *     SshpFreeDataEntry @ 0x1407E8E24 (SshpFreeDataEntry.c)
 */

__int64 __fastcall SleepstudyHelperDestroyBlockerData(_QWORD *a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 result; // rax

  result = 3221225485LL;
  if ( a1 )
  {
    SshpFreeDataEntry(a1, a2, a3, a4);
    return 0LL;
  }
  return result;
}
