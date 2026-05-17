/*
 * XREFs of NtQuerySystemInformationEx @ 0x180161D10
 * Callers:
 *     RtlpFcUpdateLocalConfiguration @ 0x1800137F4 (RtlpFcUpdateLocalConfiguration.c)
 *     TppPoolUpdateNodeRelation @ 0x18002A708 (TppPoolUpdateNodeRelation.c)
 *     RtlWow64GetProcessMachines @ 0x180034FB0 (RtlWow64GetProcessMachines.c)
 *     RtlGetVersion @ 0x1800638F0 (RtlGetVersion.c)
 *     RtlQueryProcessDebugInformation @ 0x18008F550 (RtlQueryProcessDebugInformation.c)
 *     RtlpQueryProcessMachine @ 0x180090A84 (RtlpQueryProcessMachine.c)
 *     RtlpQueryPseudoEnvironmentVariable @ 0x18009D6F8 (RtlpQueryPseudoEnvironmentVariable.c)
 *     TppQueryMaximumGroupCount @ 0x1800CB518 (TppQueryMaximumGroupCount.c)
 *     RtlpFcQueryFeatureConfigurationFromKernel @ 0x1800E40C0 (RtlpFcQueryFeatureConfigurationFromKernel.c)
 *     RtlWow64IsWowGuestMachineSupported @ 0x1800E8E40 (RtlWow64IsWowGuestMachineSupported.c)
 *     RtlpHpEnvQueryProcessorCount @ 0x1800F85C4 (RtlpHpEnvQueryProcessorCount.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NtQuerySystemInformationEx()
{
  __int64 result; // rax

  result = 367LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
