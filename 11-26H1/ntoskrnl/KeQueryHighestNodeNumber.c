/*
 * XREFs of KeQueryHighestNodeNumber @ 0x140481FE0
 * Callers:
 *     EtwpProcessorRundown @ 0x140835E28 (EtwpProcessorRundown.c)
 *     ExpQueryNumaAvailableMemory @ 0x14083902C (ExpQueryNumaAvailableMemory.c)
 *     ExpQueryNumaProcessorMap @ 0x140AF8958 (ExpQueryNumaProcessorMap.c)
 *     IoGetDeviceNumaNode @ 0x140B31640 (IoGetDeviceNumaNode.c)
 * Callees:
 *     <none>
 */

USHORT KeQueryHighestNodeNumber(void)
{
  return KeNumberNodes - 1;
}
