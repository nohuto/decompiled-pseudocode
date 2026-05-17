/*
 * XREFs of NtUnmapViewOfSection @ 0x18015F480
 * Callers:
 *     RtlpLoadNlsData @ 0x180004A18 (RtlpLoadNlsData.c)
 *     RtlpFcUpdateLocalConfiguration @ 0x1800137F4 (RtlpFcUpdateLocalConfiguration.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x18002C4C0 (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x18002D090 (LdrUnloadAlternateResourceModuleEx.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180030230 (LdrLoadAlternateResourceModuleEx.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x180036E3C (RtlpFileIsWin32WithRCManifest.c)
 *     LdrpFindLoadedDllByMappingFile @ 0x1800862EC (LdrpFindLoadedDllByMappingFile.c)
 *     RtlReportExceptionHelper @ 0x180088060 (RtlReportExceptionHelper.c)
 *     RtlDestroyQueryDebugBuffer @ 0x18008F390 (RtlDestroyQueryDebugBuffer.c)
 *     RtlpChangeQueryDebugBufferTarget @ 0x18008FF88 (RtlpChangeQueryDebugBufferTarget.c)
 *     RtlpQueryExtendedHeapInformation @ 0x180092520 (RtlpQueryExtendedHeapInformation.c)
 *     LdrpMapResourceFile @ 0x1800A5BB0 (LdrpMapResourceFile.c)
 *     PsspCaptureThreadInformation @ 0x1800B36E0 (PsspCaptureThreadInformation.c)
 *     PsspCaptureHandleInformation @ 0x1800B624C (PsspCaptureHandleInformation.c)
 *     PsspCaptureVaSpaceInformation2 @ 0x1800B6964 (PsspCaptureVaSpaceInformation2.c)
 *     PsspCaptureHandleTrace @ 0x1800B703C (PsspCaptureHandleTrace.c)
 *     LdrpMinimalMapModule @ 0x1800D2308 (LdrpMinimalMapModule.c)
 *     RtlOpenCrossProcessEmulatorWorkConnection @ 0x1800D87E0 (RtlOpenCrossProcessEmulatorWorkConnection.c)
 *     RtlCreateQueryDebugBuffer @ 0x1800E9830 (RtlCreateQueryDebugBuffer.c)
 *     RtlGetLocaleFileMappingAddress @ 0x1800F8F80 (RtlGetLocaleFileMappingAddress.c)
 *     LdrResRelease @ 0x180103100 (LdrResRelease.c)
 *     PsspCaptureAuxiliaryPages @ 0x1801059D8 (PsspCaptureAuxiliaryPages.c)
 *     LdrFlushAlternateResourceModules @ 0x180108900 (LdrFlushAlternateResourceModules.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x18010CE10 (LdrVerifyImageMatchesChecksumEx.c)
 *     RtlHeapTrkInitialize @ 0x180110AB0 (RtlHeapTrkInitialize.c)
 *     PssNtFreeWalkMarker @ 0x1801113F0 (PssNtFreeWalkMarker.c)
 *     WerpCreateCrashDataSection @ 0x180111BE4 (WerpCreateCrashDataSection.c)
 *     RtlpGetCustomCultureData @ 0x180113878 (RtlpGetCustomCultureData.c)
 *     LdrpSpecialCacheTypeHandle @ 0x1801147C4 (LdrpSpecialCacheTypeHandle.c)
 *     RtlpHpTagQueryHeapsRemote @ 0x1801157E0 (RtlpHpTagQueryHeapsRemote.c)
 *     AvrfMiniLoadDll @ 0x180116838 (AvrfMiniLoadDll.c)
 *     LdrpUnmapModule @ 0x1801199AC (LdrpUnmapModule.c)
 *     LdrpSnapModule @ 0x18011B530 (LdrpSnapModule.c)
 *     LdrpUnloadNode @ 0x18011BEB0 (LdrpUnloadNode.c)
 *     RtlComputeImportTableHash @ 0x180121A80 (RtlComputeImportTableHash.c)
 *     RtlCreateProcessReflection @ 0x1801397C0 (RtlCreateProcessReflection.c)
 *     RtlpQueryProcessDebugInformationRemote @ 0x18013A5C0 (RtlpQueryProcessDebugInformationRemote.c)
 *     RtlpSetProcessDebugInformationRemote @ 0x18013A6C0 (RtlpSetProcessDebugInformationRemote.c)
 *     RtlReportExceptionEx @ 0x18013A9A0 (RtlReportExceptionEx.c)
 *     RtlpExtendedHeapInformationWorkerCallback @ 0x180144C00 (RtlpExtendedHeapInformationWorkerCallback.c)
 *     RtlpExtendedHeapInformationWorkerThread @ 0x180144D20 (RtlpExtendedHeapInformationWorkerThread.c)
 *     RtlpHpRemoteStackSerializeWriter @ 0x1801450E0 (RtlpHpRemoteStackSerializeWriter.c)
 *     RtlpHpStackTraceSerializeRemote @ 0x18014FE10 (RtlpHpStackTraceSerializeRemote.c)
 *     PsspCaptureIptTrace @ 0x1801597AC (PsspCaptureIptTrace.c)
 *     LdrpIsCurrentPatchLatest @ 0x18015BCEC (LdrpIsCurrentPatchLatest.c)
 * Callees:
 *     <none>
 */

__int64 NtUnmapViewOfSection()
{
  __int64 result; // rax

  result = 42LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
