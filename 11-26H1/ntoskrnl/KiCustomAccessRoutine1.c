/*
 * XREFs of KiCustomAccessRoutine1 @ 0x1407326F0
 * Callers:
 *     IopTimerDispatch @ 0x1404D3F80 (IopTimerDispatch.c)
 * Callees:
 *     KiCustomRecurseRoutine1 @ 0x1407326D0 (KiCustomRecurseRoutine1.c)
 */

__int64 __fastcall KiCustomAccessRoutine1(unsigned int *a1)
{
  return KiCustomRecurseRoutine1(((unsigned __int8)a1 & 3u) + 1, a1);
}
