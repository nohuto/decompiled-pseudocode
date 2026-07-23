/*
 * XREFs of MmGetProcessPartitionId @ 0x1404A34A8
 * Callers:
 *     ExpQueryNumaAvailableMemory @ 0x14083902C (ExpQueryNumaAvailableMemory.c)
 *     EtwpPsProvTraceProcess @ 0x1409CE5FC (EtwpPsProvTraceProcess.c)
 *     ExpQuerySystemPerformanceInformation @ 0x140A69154 (ExpQuerySystemPerformanceInformation.c)
 *     ExpQuerySystemInformation @ 0x140B169CC (ExpQuerySystemInformation.c)
 *     ExpQueryChannelInformation @ 0x140B693A4 (ExpQueryChannelInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetProcessPartitionId(__int64 a1)
{
  return *(unsigned __int16 *)(a1 + 1198);
}
