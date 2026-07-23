/*
 * XREFs of IoSetIoPriorityHintIntoThread @ 0x1402398B0
 * Callers:
 *     <none>
 * Callees:
 *     PsSetIoPriorityThread @ 0x140239BF4 (PsSetIoPriorityThread.c)
 */

__int64 __fastcall IoSetIoPriorityHintIntoThread(LegacyAutoBoost *a1, unsigned int a2)
{
  if ( a2 >= 5 )
    return 3221225485LL;
  PsSetIoPriorityThread(a1);
  return 0LL;
}
