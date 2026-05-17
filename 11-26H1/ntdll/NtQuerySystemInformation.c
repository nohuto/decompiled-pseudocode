/*
 * XREFs of NtQuerySystemInformation @ 0x18015F600
 * Callers:
 *     EtwpAddLogHeaderToLogFile @ 0x180055750 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpStartUmLogger @ 0x180076EBC (EtwpStartUmLogger.c)
 *     RtlpCreateHeap @ 0x18007C890 (RtlpCreateHeap.c)
 *     RtlHpInitializeHeapManager @ 0x180089A00 (RtlHpInitializeHeapManager.c)
 *     RtlpQueryPseudoEnvironmentVariable @ 0x18009D6F8 (RtlpQueryPseudoEnvironmentVariable.c)
 *     TpInitializePackage @ 0x1800CB1A4 (TpInitializePackage.c)
 *     SendMessageToWERService @ 0x1800CDDCC (SendMessageToWERService.c)
 *     RtlInitializeProcessorFeaturesBitMap @ 0x1800CEA20 (RtlInitializeProcessorFeaturesBitMap.c)
 *     LdrInitializeMrdata @ 0x1800CF840 (LdrInitializeMrdata.c)
 *     LdrpInitializeProcess @ 0x1800CF8B8 (LdrpInitializeProcess.c)
 *     RtlpInitializeLowFragHeapManager @ 0x1800D5070 (RtlpInitializeLowFragHeapManager.c)
 *     RtlpInitializeNonVolatileFlush @ 0x1800FC5C0 (RtlpInitializeNonVolatileFlush.c)
 *     RtlSystemTimeToLocalTime @ 0x1800FD250 (RtlSystemTimeToLocalTime.c)
 *     RtlpHeapTrkAllocCacheAligned @ 0x180110F04 (RtlpHeapTrkAllocCacheAligned.c)
 *     DbgUiIssueRemoteBreakin @ 0x1801392F0 (DbgUiIssueRemoteBreakin.c)
 *     RtlResetStackOverflow @ 0x18013AFA8 (RtlResetStackOverflow.c)
 *     RtlQueryModuleInformation @ 0x18013C040 (RtlQueryModuleInformation.c)
 *     RtlLocalTimeToSystemTime @ 0x180146330 (RtlLocalTimeToSystemTime.c)
 *     RtlRegisterSecureMemoryCacheCallback @ 0x180146D60 (RtlRegisterSecureMemoryCacheCallback.c)
 *     LdrpLogIntegrityContinuityTelemetry @ 0x18015D848 (LdrpLogIntegrityContinuityTelemetry.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall NtQuerySystemInformation(
        SYSTEM_INFORMATION_CLASS SystemInformationClass,
        PVOID SystemInformation,
        ULONG SystemInformationLength,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax

  result = 54;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
