/*
 * XREFs of KiCustomRecurseRoutine1 @ 0x1407372A0
 * Callers:
 *     KiCustomAccessRoutine1 @ 0x1407372C0 (KiCustomAccessRoutine1.c)
 *     KiCustomRecurseRoutine0 @ 0x1407377E0 (KiCustomRecurseRoutine0.c)
 * Callees:
 *     KiCustomRecurseRoutine2 @ 0x140737360 (KiCustomRecurseRoutine2.c)
 */

__int64 __fastcall KiCustomRecurseRoutine1(int a1, unsigned int *a2)
{
  if ( a1 != 1 )
    KiCustomRecurseRoutine2();
  return *a2;
}
