/*
 * XREFs of CrmComparisonRoutineConnectedStandby @ 0x18001D3C0
 * Callers:
 *     <none>
 * Callees:
 *     CrmStateRoutineConnectedStandby @ 0x18001D3E0 (CrmStateRoutineConnectedStandby.c)
 */

__int64 __fastcall CrmComparisonRoutineConnectedStandby(__int64 a1, __int64 a2)
{
  return (unsigned int)CrmStateRoutineConnectedStandby(a2) != 0 ? 2 : 0;
}
