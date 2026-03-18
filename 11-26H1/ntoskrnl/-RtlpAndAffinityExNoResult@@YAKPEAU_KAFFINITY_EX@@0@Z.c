/*
 * XREFs of ?RtlpAndAffinityExNoResult@@YAKPEAU_KAFFINITY_EX@@0@Z @ 0x14025234C
 * Callers:
 *     KiComputeCpuSetAffinity @ 0x140229FB8 (KiComputeCpuSetAffinity.c)
 *     PpmParkBuildTopologyCandidates @ 0x14025222C (PpmParkBuildTopologyCandidates.c)
 *     KeAndAffinityEx2 @ 0x140252290 (KeAndAffinityEx2.c)
 *     KiTryPopulateLogicalProcessorInformation @ 0x14025A1BC (KiTryPopulateLogicalProcessorInformation.c)
 *     PpmParkEvaluateRestriction @ 0x14025B2D8 (PpmParkEvaluateRestriction.c)
 *     PpmParkComputeUnparkMask @ 0x14025D7A0 (PpmParkComputeUnparkMask.c)
 *     PpmIdleUpdateProcessorLatencyLimit @ 0x14028FA08 (PpmIdleUpdateProcessorLatencyLimit.c)
 *     PpmParkFindSpecificTopologyMask @ 0x14045E650 (PpmParkFindSpecificTopologyMask.c)
 *     KeQueryLogicalProcessorRelationship @ 0x1404DA4D0 (KeQueryLogicalProcessorRelationship.c)
 *     KeAndAffinityEx @ 0x14052FC90 (KeAndAffinityEx.c)
 *     KiCpuPartitionCheckAffinitization @ 0x1405F416C (KiCpuPartitionCheckAffinitization.c)
 *     PpmParkApplyMixedTopologyPolicy @ 0x14060F1EC (PpmParkApplyMixedTopologyPolicy.c)
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
