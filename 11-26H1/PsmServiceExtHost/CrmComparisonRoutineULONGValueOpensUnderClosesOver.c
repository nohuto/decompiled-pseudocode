/*
 * XREFs of CrmComparisonRoutineULONGValueOpensUnderClosesOver @ 0x18005D400
 * Callers:
 *     CrmComparisonRoutineCpuMediumConditionClosed @ 0x180075190 (CrmComparisonRoutineCpuMediumConditionClosed.c)
 *     CrmComparisonRoutineCpuMediumConditionOpen @ 0x1800751C0 (CrmComparisonRoutineCpuMediumConditionOpen.c)
 *     CrmComparisonRoutineCpuMediumConditionTransitioning @ 0x1800751F0 (CrmComparisonRoutineCpuMediumConditionTransitioning.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CrmComparisonRoutineULONGValueOpensUnderClosesOver(
        __int64 a1,
        unsigned int *a2,
        unsigned int a3,
        unsigned int a4)
{
  if ( *a2 >= a3 )
    return *a2 < a4;
  else
    return 2LL;
}
