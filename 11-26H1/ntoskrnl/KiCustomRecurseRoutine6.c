/*
 * XREFs of KiCustomRecurseRoutine6 @ 0x140737420
 * Callers:
 *     KiCustomAccessRoutine6 @ 0x140737440 (KiCustomAccessRoutine6.c)
 *     KiCustomRecurseRoutine5 @ 0x140737960 (KiCustomRecurseRoutine5.c)
 * Callees:
 *     KiCustomRecurseRoutine7 @ 0x1407375A0 (KiCustomRecurseRoutine7.c)
 */

__int64 __fastcall KiCustomRecurseRoutine6(int a1, unsigned int *a2)
{
  if ( a1 != 1 )
    KiCustomRecurseRoutine7();
  return *a2;
}
