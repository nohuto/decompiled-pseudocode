/*
 * XREFs of CrmComparisonRoutineCpuMediumConditionOpen @ 0x1800751C0
 * Callers:
 *     <none>
 * Callees:
 *     CrmComparisonRoutineULONGValueOpensUnderClosesOver @ 0x18005D400 (CrmComparisonRoutineULONGValueOpensUnderClosesOver.c)
 */

__int64 __fastcall CrmComparisonRoutineCpuMediumConditionOpen(__int64 a1, unsigned int *a2)
{
  int v2; // eax
  unsigned int v3; // ecx

  v2 = CrmComparisonRoutineULONGValueOpensUnderClosesOver(a1, a2, 0x32u, 0x4Bu);
  v3 = 0;
  if ( v2 == 2 )
    return 2;
  return v3;
}
