/*
 * XREFs of KeQueryActiveGroupCount @ 0x1404BB3D0
 * Callers:
 *     NtSetInformationCpuPartition @ 0x1407F20D0 (NtSetInformationCpuPartition.c)
 *     NtSetInformationJobObject @ 0x1407F4C70 (NtSetInformationJobObject.c)
 *     EtwpProcessorRundown @ 0x14082FBE8 (EtwpProcessorRundown.c)
 *     ExpNodeInitialize @ 0x14083F9C0 (ExpNodeInitialize.c)
 *     PspAllocateProcess @ 0x140964C24 (PspAllocateProcess.c)
 *     NtPowerInformation @ 0x1409DE3E0 (NtPowerInformation.c)
 *     PsCreateSystemThreadEx @ 0x140A03170 (PsCreateSystemThreadEx.c)
 *     IopConnectInterrupt @ 0x140A98890 (IopConnectInterrupt.c)
 *     ExpQuerySystemInformation @ 0x140B145DC (ExpQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

USHORT KeQueryActiveGroupCount(void)
{
  return KiActiveGroups;
}
