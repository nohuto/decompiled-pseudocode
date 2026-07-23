/*
 * XREFs of KiCustomRecurseRoutine3 @ 0x1407374E0
 * Callers:
 *     KiCustomRecurseRoutine2 @ 0x140737360 (KiCustomRecurseRoutine2.c)
 *     KiCustomAccessRoutine3 @ 0x140737500 (KiCustomAccessRoutine3.c)
 * Callees:
 *     KiCustomRecurseRoutine4 @ 0x1407378A0 (KiCustomRecurseRoutine4.c)
 */

__int64 __fastcall KiCustomRecurseRoutine3(int a1, unsigned int *a2)
{
  if ( a1 != 1 )
    KiCustomRecurseRoutine4();
  return *a2;
}
