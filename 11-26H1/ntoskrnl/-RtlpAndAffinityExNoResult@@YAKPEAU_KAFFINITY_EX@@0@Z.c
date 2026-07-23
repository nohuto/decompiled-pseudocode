/*
 * XREFs of ?RtlpAndAffinityExNoResult@@YAKPEAU_KAFFINITY_EX@@0@Z @ 0x140253CAC
 * Callers:
 *     KiComputeCpuSetAffinity @ 0x14022B948 (KiComputeCpuSetAffinity.c)
 *     PpmParkBuildTopologyCandidates @ 0x140253B8C (PpmParkBuildTopologyCandidates.c)
 *     KeAndAffinityEx2 @ 0x140253BF0 (KeAndAffinityEx2.c)
 *     KiTryPopulateLogicalProcessorInformation @ 0x14025B99C (KiTryPopulateLogicalProcessorInformation.c)
 *     PpmParkEvaluateRestriction @ 0x14025CAB4 (PpmParkEvaluateRestriction.c)
 *     PpmParkFindSpecificTopologyMask @ 0x14025DB70 (PpmParkFindSpecificTopologyMask.c)
 *     PpmParkComputeUnparkMask @ 0x14025E0F0 (PpmParkComputeUnparkMask.c)
 *     PpmIdleUpdateProcessorLatencyLimit @ 0x14028EF68 (PpmIdleUpdateProcessorLatencyLimit.c)
 *     KeQueryLogicalProcessorRelationship @ 0x1404D3BB0 (KeQueryLogicalProcessorRelationship.c)
 *     KeAndAffinityEx @ 0x140532190 (KeAndAffinityEx.c)
 *     KiCpuPartitionCheckAffinitization @ 0x1405F6B2C (KiCpuPartitionCheckAffinitization.c)
 *     PpmParkApplyMixedTopologyPolicy @ 0x140612450 (PpmParkApplyMixedTopologyPolicy.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpAndAffinityExNoResult(struct _KAFFINITY_EX *a1, struct _KAFFINITY_EX *a2)
{
  unsigned __int16 Count; // r9
  unsigned __int16 i; // r8

  Count = a1->Count;
  if ( a1->Count >= a2->Count )
    Count = a2->Count;
  for ( i = 0; ; ++i )
  {
    if ( i >= Count )
      return 0LL;
    if ( (a2->Bitmap[i] & a1->Bitmap[i]) != 0 )
      break;
  }
  return 1LL;
}
