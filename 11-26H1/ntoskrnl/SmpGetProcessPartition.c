/*
 * XREFs of SmpGetProcessPartition @ 0x1404D6C0C
 * Callers:
 *     PspProcessDelete @ 0x1407FB2E0 (PspProcessDelete.c)
 *     SmProcessCompressionAcceleratorRequest @ 0x140819228 (SmProcessCompressionAcceleratorRequest.c)
 *     SmProcessCompressionReadStatsRequest @ 0x1408193C4 (SmProcessCompressionReadStatsRequest.c)
 *     SmProcessConfigRequest @ 0x1408195C0 (SmProcessConfigRequest.c)
 *     SmProcessDeleteRequest @ 0x1408198D4 (SmProcessDeleteRequest.c)
 *     SmProcessListRequest @ 0x1408199A8 (SmProcessListRequest.c)
 *     SmProcessRegistrationRequest @ 0x140819E3C (SmProcessRegistrationRequest.c)
 *     SmProcessStatsRequest @ 0x140819F3C (SmProcessStatsRequest.c)
 *     SmProcessCreateNotification @ 0x140966F58 (SmProcessCreateNotification.c)
 *     SmpKeyedStoreCreate @ 0x140966FB8 (SmpKeyedStoreCreate.c)
 *     SmStoreCompressionStart @ 0x140AE9D90 (SmStoreCompressionStart.c)
 *     SmStoreCompressionStop @ 0x140AE9E34 (SmStoreCompressionStop.c)
 *     SmProcessCompressionInfoRequest @ 0x140B26488 (SmProcessCompressionInfoRequest.c)
 *     SmSetStoreInformation @ 0x140B2E9E0 (SmSetStoreInformation.c)
 *     SmProcessSystemStoreTrimRequest @ 0x140B2EB04 (SmProcessSystemStoreTrimRequest.c)
 *     SmProcessStoreMemoryPriorityRequest @ 0x140B522A4 (SmProcessStoreMemoryPriorityRequest.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmpGetProcessPartition(__int64 a1)
{
  return *(_QWORD *)(*(_QWORD *)(a1 + 1880) + 24LL);
}
