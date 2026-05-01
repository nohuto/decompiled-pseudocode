/*
 * XREFs of CrmComparisonRoutineConnectedStandbyOff @ 0x18001D180
 * Callers:
 *     <none>
 * Callees:
 *     CrmStateRoutineConnectedStandby @ 0x18001D3E0 (CrmStateRoutineConnectedStandby.c)
 */

__int64 __fastcall CrmComparisonRoutineConnectedStandbyOff(__int64 a1, __int64 a2)
{
  return (unsigned int)CrmStateRoutineConnectedStandby(a2) == 0 ? 2 : 0;
}
