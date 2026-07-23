/*
 * XREFs of NtUnmapViewOfSection @ 0x18015F380
 * Callers:
 *     LdrpSetAlternateResourceModuleHandle @ 0x1800175C0 (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x180018190 (LdrUnloadAlternateResourceModuleEx.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18001B390 (LdrLoadAlternateResourceModuleEx.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x180021F9C (RtlpFileIsWin32WithRCManifest.c)
 *     RtlpLoadNlsData @ 0x180050148 (RtlpLoadNlsData.c)
 *     RtlpFcUpdateLocalConfiguration @ 0x18005EF24 (RtlpFcUpdateLocalConfiguration.c)
 *     RtlDestroyQueryDebugBuffer @ 0x180073DA0 (RtlDestroyQueryDebugBuffer.c)
 *     RtlpChangeQueryDebugBufferTarget @ 0x180074CE8 (RtlpChangeQueryDebugBufferTarget.c)
 *     LdrpFindLoadedDllByMappingFile @ 0x18007D68C (LdrpFindLoadedDllByMappingFile.c)
 *     RtlReportExceptionHelper @ 0x18007F3E0 (RtlReportExceptionHelper.c)
 *     RtlpQueryExtendedHeapInformation @ 0x180092130 (RtlpQueryExtendedHeapInformation.c)
 *     LdrpMapResourceFile @ 0x1800A4CE0 (LdrpMapResourceFile.c)
 *     PsspCaptureThreadInformation @ 0x1800B0C00 (PsspCaptureThreadInformation.c)
 *     PsspCaptureHandleInformation @ 0x1800B376C (PsspCaptureHandleInformation.c)
 *     PsspCaptureVaSpaceInformation2 @ 0x1800B3E84 (PsspCaptureVaSpaceInformation2.c)
 *     PsspCaptureHandleTrace @ 0x1800B455C (PsspCaptureHandleTrace.c)
 *     LdrpMinimalMapModule @ 0x1800D21E4 (LdrpMinimalMapModule.c)
 *     RtlOpenCrossProcessEmulatorWorkConnection @ 0x1800D57A0 (RtlOpenCrossProcessEmulatorWorkConnection.c)
 *     RtlCreateQueryDebugBuffer @ 0x1800E8A40 (RtlCreateQueryDebugBuffer.c)
 *     RtlGetLocaleFileMappingAddress @ 0x1800F8750 (RtlGetLocaleFileMappingAddress.c)
 *     LdrResRelease @ 0x180102480 (LdrResRelease.c)
 *     PsspCaptureAuxiliaryPages @ 0x180105228 (PsspCaptureAuxiliaryPages.c)
 *     LdrFlushAlternateResourceModules @ 0x1801082A0 (LdrFlushAlternateResourceModules.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x18010C960 (LdrVerifyImageMatchesChecksumEx.c)
 *     RtlHeapTrkInitialize @ 0x180110640 (RtlHeapTrkInitialize.c)
 *     PssNtFreeWalkMarker @ 0x180110F70 (PssNtFreeWalkMarker.c)
 *     WerpCreateCrashDataSection @ 0x180111754 (WerpCreateCrashDataSection.c)
 *     RtlpGetCustomCultureData @ 0x180113110 (RtlpGetCustomCultureData.c)
 *     LdrpSpecialCacheTypeHandle @ 0x180113FC0 (LdrpSpecialCacheTypeHandle.c)
 *     RtlpHpTagQueryHeapsRemote @ 0x180114FC0 (RtlpHpTagQueryHeapsRemote.c)
 *     AvrfMiniLoadDll @ 0x180116018 (AvrfMiniLoadDll.c)
 *     LdrpUnmapModule @ 0x18011975C (LdrpUnmapModule.c)
 *     LdrpSnapModule @ 0x18011B2E0 (LdrpSnapModule.c)
 *     LdrpUnloadNode @ 0x18011BC60 (LdrpUnloadNode.c)
 *     RtlComputeImportTableHash @ 0x180121820 (RtlComputeImportTableHash.c)
 *     RtlCreateProcessReflection @ 0x180139530 (RtlCreateProcessReflection.c)
 *     RtlpQueryProcessDebugInformationRemote @ 0x18013A330 (RtlpQueryProcessDebugInformationRemote.c)
 *     RtlpSetProcessDebugInformationRemote @ 0x18013A430 (RtlpSetProcessDebugInformationRemote.c)
 *     RtlReportExceptionEx @ 0x18013A710 (RtlReportExceptionEx.c)
 *     RtlpExtendedHeapInformationWorkerCallback @ 0x180144AB0 (RtlpExtendedHeapInformationWorkerCallback.c)
 *     RtlpExtendedHeapInformationWorkerThread @ 0x180144BD0 (RtlpExtendedHeapInformationWorkerThread.c)
 *     RtlpHpRemoteStackSerializeWriter @ 0x180144F90 (RtlpHpRemoteStackSerializeWriter.c)
 *     RtlpHpStackTraceSerializeRemote @ 0x18014FCC0 (RtlpHpStackTraceSerializeRemote.c)
 *     PsspCaptureIptTrace @ 0x18015967C (PsspCaptureIptTrace.c)
 *     LdrpIsCurrentPatchLatest @ 0x18015BBAC (LdrpIsCurrentPatchLatest.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtUnmapViewOfSection(HANDLE ProcessHandle, PVOID BaseAddress)
{
  NTSTATUS result; // eax

  result = 42;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
