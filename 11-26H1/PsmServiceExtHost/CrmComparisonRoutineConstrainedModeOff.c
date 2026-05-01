/*
 * XREFs of CrmComparisonRoutineConstrainedModeOff @ 0x1800629F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CrmComparisonRoutineConstrainedModeOff(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( !*(_DWORD *)a2 || (*(_BYTE *)(a2 + 8) & 1) == 0 )
    return 2LL;
  return result;
}
