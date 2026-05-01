/*
 * XREFs of CrmComparisonRoutineMemoryUsageBelowHigh @ 0x180065000
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CrmComparisonRoutineMemoryUsageBelowHigh(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( *a2 )
  {
    if ( (int)a2[3] < 2 )
      return 2LL;
  }
  return result;
}
