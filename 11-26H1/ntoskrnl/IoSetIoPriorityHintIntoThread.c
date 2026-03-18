/*
 * XREFs of IoSetIoPriorityHintIntoThread @ 0x140237F50
 * Callers:
 *     <none>
 * Callees:
 *     PsSetIoPriorityThread @ 0x140238294 (PsSetIoPriorityThread.c)
 */

__int64 __fastcall IoSetIoPriorityHintIntoThread(LegacyAutoBoost *a1, unsigned int a2)
{
  if ( a2 >= 5 )
    return 3221225485LL;
  PsSetIoPriorityThread(a1);
  return 0LL;
}
