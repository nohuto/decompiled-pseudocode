/*
 * XREFs of HalpPeiInterruptHandler @ 0x140590B10
 * Callers:
 *     <none>
 * Callees:
 *     HalpCheckAndReportGhes @ 0x1404D5CCC (HalpCheckAndReportGhes.c)
 */

char __fastcall HalpPeiInterruptHandler(__int64 a1, __int64 a2)
{
  if ( HalpGenericPeiInitDone && a2 )
    HalpCheckAndReportGhes(a2);
  return 1;
}
