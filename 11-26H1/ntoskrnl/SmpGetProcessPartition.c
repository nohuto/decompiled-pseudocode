/*
 * XREFs of SmpGetProcessPartition @ 0x1404D03DC
 * Callers:
 *     PspProcessDelete @ 0x140800D10 (PspProcessDelete.c)
 *     SmProcessCompressionAcceleratorRequest @ 0x14081F438 (SmProcessCompressionAcceleratorRequest.c)
 *     SmProcessCompressionReadStatsRequest @ 0x14081F5D4 (SmProcessCompressionReadStatsRequest.c)
 *     SmProcessConfigRequest @ 0x14081F7D0 (SmProcessConfigRequest.c)
 *     SmProcessDeleteRequest @ 0x14081FAE4 (SmProcessDeleteRequest.c)
 *     SmProcessListRequest @ 0x14081FBB8 (SmProcessListRequest.c)
 *     SmProcessRegistrationRequest @ 0x14082004C (SmProcessRegistrationRequest.c)
 *     SmProcessStatsRequest @ 0x14082014C (SmProcessStatsRequest.c)
 *     SmProcessCreateNotification @ 0x140ADC1FC (SmProcessCreateNotification.c)
 *     SmpKeyedStoreCreate @ 0x140ADC25C (SmpKeyedStoreCreate.c)
 *     SmStoreCompressionStart @ 0x140AEC880 (SmStoreCompressionStart.c)
 *     SmStoreCompressionStop @ 0x140AEC924 (SmStoreCompressionStop.c)
 *     SmProcessCompressionInfoRequest @ 0x140B286E8 (SmProcessCompressionInfoRequest.c)
 *     SmSetStoreInformation @ 0x140B307BC (SmSetStoreInformation.c)
 *     SmProcessSystemStoreTrimRequest @ 0x140B308E0 (SmProcessSystemStoreTrimRequest.c)
 *     SmProcessStoreMemoryPriorityRequest @ 0x140B54B44 (SmProcessStoreMemoryPriorityRequest.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmpGetProcessPartition(__int64 a1)
{
  return *(_QWORD *)(*(_QWORD *)(a1 + 1880) + 24LL);
}
