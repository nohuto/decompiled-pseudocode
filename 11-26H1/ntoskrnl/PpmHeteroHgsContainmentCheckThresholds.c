/*
 * XREFs of PpmHeteroHgsContainmentCheckThresholds @ 0x140416704
 * Callers:
 *     PpmCheckComputeMultiClassHeteroResponse @ 0x14041574C (PpmCheckComputeMultiClassHeteroResponse.c)
 *     PpmCheckComputeHeteroResponse @ 0x140415EE0 (PpmCheckComputeHeteroResponse.c)
 * Callees:
 *     PpmEventHgsContainmentThresholdCheck @ 0x140415DCC (PpmEventHgsContainmentThresholdCheck.c)
 *     PpmHeteroUtilityGreaterThanOrEqualThreshold @ 0x1404163FC (PpmHeteroUtilityGreaterThanOrEqualThreshold.c)
 */

BOOLEAN __fastcall PpmHeteroHgsContainmentCheckThresholds(__int64 a1, __int64 a2, __int64 a3)
{
  BOOLEAN result; // al
  __int64 v6; // rbx
  unsigned int v7; // ebp
  unsigned int v8; // r9d

  result = PpmHeteroHgsContainmentState;
  if ( (PpmHeteroHgsContainmentState & 4) != 0 )
  {
    v6 = *(_QWORD *)(a1 + 1240);
    *(_DWORD *)(v6 + 828) = 0;
    v7 = *((_DWORD *)PpmCurrentProfile + 178 * SHIDWORD(PpmIdlePolicyLock.PropagateBoostsEntry.Next) + 185);
    if ( v7 )
      *(_DWORD *)(v6 + 828) = ((unsigned int)PpmHeteroUtilityGreaterThanOrEqualThreshold(a2, a3, 0LL, v7, 0) != 0) + 1;
    *(_DWORD *)(v6 + 832) = 0;
    v8 = *((_DWORD *)PpmCurrentProfile + 178 * SHIDWORD(PpmIdlePolicyLock.PropagateBoostsEntry.Next) + 186);
    if ( v8 )
      *(_DWORD *)(v6 + 832) = ((unsigned int)PpmHeteroUtilityGreaterThanOrEqualThreshold(a2, a3, 0LL, v8, 0) != 0) + 1;
    return PpmEventHgsContainmentThresholdCheck(a2, a3, v7, v8, *(_DWORD *)(v6 + 828), *(_DWORD *)(v6 + 832));
  }
  return result;
}
