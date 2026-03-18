/*
 * XREFs of KeQueryHighestNodeNumber @ 0x1404884A0
 * Callers:
 *     EtwpProcessorRundown @ 0x14082FBE8 (EtwpProcessorRundown.c)
 *     ExpQueryNumaAvailableMemory @ 0x140832DEC (ExpQueryNumaAvailableMemory.c)
 *     ExpQueryNumaProcessorMap @ 0x140AF62B8 (ExpQueryNumaProcessorMap.c)
 *     IoGetDeviceNumaNode @ 0x140B2F860 (IoGetDeviceNumaNode.c)
 * Callees:
 *     <none>
 */

USHORT KeQueryHighestNodeNumber(void)
{
  return KeNumberNodes - 1;
}
