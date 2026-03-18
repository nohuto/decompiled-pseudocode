/*
 * XREFs of KiCustomRecurseRoutine1 @ 0x1407326D0
 * Callers:
 *     KiCustomAccessRoutine1 @ 0x1407326F0 (KiCustomAccessRoutine1.c)
 *     KiCustomRecurseRoutine0 @ 0x140732C10 (KiCustomRecurseRoutine0.c)
 * Callees:
 *     KiCustomRecurseRoutine2 @ 0x140732790 (KiCustomRecurseRoutine2.c)
 */

__int64 __fastcall KiCustomRecurseRoutine1(int a1, unsigned int *a2)
{
  if ( a1 != 1 )
    KiCustomRecurseRoutine2();
  return *a2;
}
