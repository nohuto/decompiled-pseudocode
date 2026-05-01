/*
 * XREFs of CrmComparisonRoutineMemoryUsageBelowMedium @ 0x180067120
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CrmComparisonRoutineMemoryUsageBelowMedium(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( *a2 )
  {
    if ( (int)a2[3] < 1 )
      return 2LL;
  }
  return result;
}
