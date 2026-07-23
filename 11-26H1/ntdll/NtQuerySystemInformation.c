/*
 * XREFs of NtQuerySystemInformation @ 0x18015F500
 * Callers:
 *     EtwpAddLogHeaderToLogFile @ 0x18003FCD0 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpStartUmLogger @ 0x1800656DC (EtwpStartUmLogger.c)
 *     RtlpCreateHeap @ 0x18006B0B0 (RtlpCreateHeap.c)
 *     RtlpQueryPseudoEnvironmentVariable @ 0x18009C828 (RtlpQueryPseudoEnvironmentVariable.c)
 *     TpInitializePackage @ 0x1800C8914 (TpInitializePackage.c)
 *     SendMessageToWERService @ 0x1800CB53C (SendMessageToWERService.c)
 *     RtlInitializeProcessorFeaturesBitMap @ 0x1800CC190 (RtlInitializeProcessorFeaturesBitMap.c)
 *     LdrInitializeMrdata @ 0x1800CCFB0 (LdrInitializeMrdata.c)
 *     LdrpInitializeProcess @ 0x1800CD028 (LdrpInitializeProcess.c)
 *     RtlHpInitializeHeapManager @ 0x1800D0D40 (RtlHpInitializeHeapManager.c)
 *     RtlpInitializeLowFragHeapManager @ 0x1800D0FC8 (RtlpInitializeLowFragHeapManager.c)
 *     RtlpInitializeNonVolatileFlush @ 0x1800FBD10 (RtlpInitializeNonVolatileFlush.c)
 *     RtlSystemTimeToLocalTime @ 0x1800FC9A0 (RtlSystemTimeToLocalTime.c)
 *     RtlpHeapTrkAllocCacheAligned @ 0x180110A94 (RtlpHeapTrkAllocCacheAligned.c)
 *     DbgUiIssueRemoteBreakin @ 0x180139060 (DbgUiIssueRemoteBreakin.c)
 *     RtlResetStackOverflow @ 0x18013AD18 (RtlResetStackOverflow.c)
 *     RtlQueryModuleInformation @ 0x18013BF00 (RtlQueryModuleInformation.c)
 *     RtlLocalTimeToSystemTime @ 0x1801461E0 (RtlLocalTimeToSystemTime.c)
 *     RtlRegisterSecureMemoryCacheCallback @ 0x180146C10 (RtlRegisterSecureMemoryCacheCallback.c)
 *     LdrpLogIntegrityContinuityTelemetry @ 0x18015D708 (LdrpLogIntegrityContinuityTelemetry.c)
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
