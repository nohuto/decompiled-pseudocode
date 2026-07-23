/*
 * XREFs of PpmGetPerfPolicyClass @ 0x14048482C
 * Callers:
 *     PpmPerfCalculateQosClassPolicies @ 0x140483470 (PpmPerfCalculateQosClassPolicies.c)
 *     PpmPerfApplyDomainState @ 0x140483F90 (PpmPerfApplyDomainState.c)
 *     PpmPerfApplyLatencyHint @ 0x140527A28 (PpmPerfApplyLatencyHint.c)
 *     PpmPerfResizeHistory @ 0x140B42680 (PpmPerfResizeHistory.c)
 * Callees:
 *     <none>
 */

char __fastcall PpmGetPerfPolicyClass(_BYTE *a1)
{
  unsigned __int8 v1; // dl
  char result; // al

  v1 = 0;
  if ( !a1 || !a1[68] )
    return v1;
  if ( (unsigned __int8)PpmMaxCoreClasses > 1u )
  {
    v1 = a1[88];
  }
  else
  {
    if ( (unsigned __int8)PpmHeteroNominalPerformanceClasses <= 1u || !*(_QWORD *)a1 )
      return v1;
    v1 = *(_BYTE *)(*(_QWORD *)a1 + 301LL);
    if ( v1 )
      return 1;
  }
  result = 2;
  if ( v1 < 2u )
    return v1;
  return result;
}
