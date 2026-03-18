/*
 * XREFs of KiCustomRecurseRoutine8 @ 0x140732A90
 * Callers:
 *     KiCustomRecurseRoutine7 @ 0x1407329D0 (KiCustomRecurseRoutine7.c)
 *     KiCustomAccessRoutine8 @ 0x140732AB0 (KiCustomAccessRoutine8.c)
 * Callees:
 *     KiCustomRecurseRoutine9 @ 0x140732B50 (KiCustomRecurseRoutine9.c)
 */

__int64 __fastcall KiCustomRecurseRoutine8(int a1, unsigned int *a2)
{
  if ( a1 != 1 )
    KiCustomRecurseRoutine9();
  return *a2;
}
