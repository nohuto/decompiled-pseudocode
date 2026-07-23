/*
 * XREFs of KeQueryActiveGroupCount @ 0x1404B4BB0
 * Callers:
 *     NtSetInformationCpuPartition @ 0x1407F7C30 (NtSetInformationCpuPartition.c)
 *     NtSetInformationJobObject @ 0x1407FA7D0 (NtSetInformationJobObject.c)
 *     EtwpProcessorRundown @ 0x140835E28 (EtwpProcessorRundown.c)
 *     ExpNodeInitialize @ 0x140845C00 (ExpNodeInitialize.c)
 *     NtPowerInformation @ 0x140A1B510 (NtPowerInformation.c)
 *     PsCreateSystemThreadEx @ 0x140A78DE0 (PsCreateSystemThreadEx.c)
 *     IopConnectInterrupt @ 0x140A9CA10 (IopConnectInterrupt.c)
 *     ExpQuerySystemInformation @ 0x140B169CC (ExpQuerySystemInformation.c)
 *     PspAllocateProcess @ 0x140B7E8A8 (PspAllocateProcess.c)
 * Callees:
 *     <none>
 */

USHORT KeQueryActiveGroupCount(void)
{
  return KiActiveGroups;
}
