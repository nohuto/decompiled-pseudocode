/*
 * XREFs of NtQuerySystemInformationEx @ 0x180161C10
 * Callers:
 *     TppPoolUpdateNodeRelation @ 0x180015808 (TppPoolUpdateNodeRelation.c)
 *     RtlWow64GetProcessMachines @ 0x180020110 (RtlWow64GetProcessMachines.c)
 *     RtlpFcUpdateLocalConfiguration @ 0x18005EF24 (RtlpFcUpdateLocalConfiguration.c)
 *     RtlQueryProcessDebugInformation @ 0x1800742B0 (RtlQueryProcessDebugInformation.c)
 *     RtlpQueryProcessMachine @ 0x1800757E4 (RtlpQueryProcessMachine.c)
 *     RtlGetVersion @ 0x180083D40 (RtlGetVersion.c)
 *     RtlpQueryPseudoEnvironmentVariable @ 0x18009C828 (RtlpQueryPseudoEnvironmentVariable.c)
 *     TppQueryMaximumGroupCount @ 0x1800C8C88 (TppQueryMaximumGroupCount.c)
 *     RtlWow64IsWowGuestMachineSupported @ 0x1800E8050 (RtlWow64IsWowGuestMachineSupported.c)
 *     RtlpFcQueryFeatureConfigurationFromKernel @ 0x1800ECDC0 (RtlpFcQueryFeatureConfigurationFromKernel.c)
 *     RtlpHpEnvQueryProcessorCount @ 0x1800F7D94 (RtlpHpEnvQueryProcessorCount.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtQuerySystemInformationEx(
        SYSTEM_INFORMATION_CLASS SystemInformationClass,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID SystemInformation,
        ULONG SystemInformationLength,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax

  result = 367;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
