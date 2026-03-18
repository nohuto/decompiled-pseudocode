/*
 * XREFs of MmGetProcessPartitionId @ 0x1404A9E18
 * Callers:
 *     ExpQueryNumaAvailableMemory @ 0x140832DEC (ExpQueryNumaAvailableMemory.c)
 *     EtwpPsProvTraceProcess @ 0x140952CBC (EtwpPsProvTraceProcess.c)
 *     ExpQuerySystemPerformanceInformation @ 0x140A5C194 (ExpQuerySystemPerformanceInformation.c)
 *     ExpQuerySystemInformation @ 0x140B145DC (ExpQuerySystemInformation.c)
 *     ExpQueryChannelInformation @ 0x140B66418 (ExpQueryChannelInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetProcessPartitionId(__int64 a1)
{
  return *(unsigned __int16 *)(a1 + 1198);
}
