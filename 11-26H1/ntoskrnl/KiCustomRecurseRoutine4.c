/*
 * XREFs of KiCustomRecurseRoutine4 @ 0x1407378A0
 * Callers:
 *     KiCustomRecurseRoutine3 @ 0x1407374E0 (KiCustomRecurseRoutine3.c)
 *     KiCustomAccessRoutine4 @ 0x1407378C0 (KiCustomAccessRoutine4.c)
 * Callees:
 *     KiCustomRecurseRoutine5 @ 0x140737960 (KiCustomRecurseRoutine5.c)
 */

__int64 __fastcall KiCustomRecurseRoutine4(int a1, unsigned int *a2)
{
  if ( a1 != 1 )
    KiCustomRecurseRoutine5();
  return *a2;
}
