/*
 * XREFs of KiCustomRecurseRoutine8 @ 0x140737660
 * Callers:
 *     KiCustomRecurseRoutine7 @ 0x1407375A0 (KiCustomRecurseRoutine7.c)
 *     KiCustomAccessRoutine8 @ 0x140737680 (KiCustomAccessRoutine8.c)
 * Callees:
 *     KiCustomRecurseRoutine9 @ 0x140737720 (KiCustomRecurseRoutine9.c)
 */

__int64 __fastcall KiCustomRecurseRoutine8(int a1, unsigned int *a2)
{
  if ( a1 != 1 )
    KiCustomRecurseRoutine9();
  return *a2;
}
