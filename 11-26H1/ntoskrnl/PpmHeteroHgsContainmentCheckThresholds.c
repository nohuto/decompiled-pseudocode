/*
 * XREFs of PpmHeteroHgsContainmentCheckThresholds @ 0x14041EEC4
 * Callers:
 *     PpmCheckComputeMultiClassHeteroResponse @ 0x14041DF08 (PpmCheckComputeMultiClassHeteroResponse.c)
 *     PpmCheckComputeHeteroResponse @ 0x14041E6A0 (PpmCheckComputeHeteroResponse.c)
 * Callees:
 *     PpmEventHgsContainmentThresholdCheck @ 0x14041E588 (PpmEventHgsContainmentThresholdCheck.c)
 *     PpmHeteroUtilityGreaterThanOrEqualThreshold @ 0x14041EBBC (PpmHeteroUtilityGreaterThanOrEqualThreshold.c)
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
    v7 = HIDWORD(PpmCurrentProfile[89 * dword_140F106CC + 92]);
    if ( v7 )
      *(_DWORD *)(v6 + 828) = ((unsigned int)PpmHeteroUtilityGreaterThanOrEqualThreshold(a2, a3, 0LL, v7, 0) != 0) + 1;
    *(_DWORD *)(v6 + 832) = 0;
    v8 = PpmCurrentProfile[89 * dword_140F106CC + 93];
    if ( v8 )
      *(_DWORD *)(v6 + 832) = ((unsigned int)PpmHeteroUtilityGreaterThanOrEqualThreshold(a2, a3, 0LL, v8, 0) != 0) + 1;
    return PpmEventHgsContainmentThresholdCheck(a2, a3, v7, v8, *(_DWORD *)(v6 + 828), *(_DWORD *)(v6 + 832));
  }
  return result;
}
