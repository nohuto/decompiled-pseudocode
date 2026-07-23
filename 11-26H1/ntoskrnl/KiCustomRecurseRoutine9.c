/*
 * XREFs of KiCustomRecurseRoutine9 @ 0x140737720
 * Callers:
 *     KiCustomRecurseRoutine8 @ 0x140737660 (KiCustomRecurseRoutine8.c)
 *     KiCustomAccessRoutine9 @ 0x140737740 (KiCustomAccessRoutine9.c)
 * Callees:
 *     KiCustomRecurseRoutine0 @ 0x1407377E0 (KiCustomRecurseRoutine0.c)
 */

__int64 __fastcall KiCustomRecurseRoutine9(int a1, unsigned int *a2)
{
  if ( a1 != 1 )
    KiCustomRecurseRoutine0();
  return *a2;
}
