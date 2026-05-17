/*
 * XREFs of ZwMapViewOfSection @ 0x18015F440
 * Callers:
 *     RtlpFcMapSingleBuffer @ 0x180013A3C (RtlpFcMapSingleBuffer.c)
 *     RtlpHeapTrkLeakCallback @ 0x180013D20 (RtlpHeapTrkLeakCallback.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x180036E3C (RtlpFileIsWin32WithRCManifest.c)
 *     LdrpFindLoadedDllByMappingFile @ 0x1800862EC (LdrpFindLoadedDllByMappingFile.c)
 *     RtlReportExceptionHelper @ 0x180088060 (RtlReportExceptionHelper.c)
 *     RtlpChangeQueryDebugBufferTarget @ 0x18008FF88 (RtlpChangeQueryDebugBufferTarget.c)
 *     RtlpQueryExtendedHeapInformation @ 0x180092520 (RtlpQueryExtendedHeapInformation.c)
 *     LdrpMapResourceFile @ 0x1800A5BB0 (LdrpMapResourceFile.c)
 *     PsspCaptureThreadInformation @ 0x1800B36E0 (PsspCaptureThreadInformation.c)
 *     PssNtWalkSnapshot @ 0x1800B5A00 (PssNtWalkSnapshot.c)
 *     PsspWalkInfoClass_PSS_WALK_AUXILIARY_PAGES @ 0x1800B5D9C (PsspWalkInfoClass_PSS_WALK_AUXILIARY_PAGES.c)
 *     PsspWalkInfoClass_PSS_WALK_HANDLES @ 0x1800B5EE4 (PsspWalkInfoClass_PSS_WALK_HANDLES.c)
 *     PsspWalkInfoClass_PSS_WALK_THREADS @ 0x1800B6088 (PsspWalkInfoClass_PSS_WALK_THREADS.c)
 *     PsspCaptureHandleInformation @ 0x1800B624C (PsspCaptureHandleInformation.c)
 *     PsspCaptureVaSpaceInformation2 @ 0x1800B6964 (PsspCaptureVaSpaceInformation2.c)
 *     PsspCaptureHandleTrace @ 0x1800B703C (PsspCaptureHandleTrace.c)
 *     CsrpConnectToServer @ 0x1800CAD04 (CsrpConnectToServer.c)
 *     LdrpMinimalMapModule @ 0x1800D2308 (LdrpMinimalMapModule.c)
 *     RtlOpenCrossProcessEmulatorWorkConnection @ 0x1800D87E0 (RtlOpenCrossProcessEmulatorWorkConnection.c)
 *     RtlCreateQueryDebugBuffer @ 0x1800E9830 (RtlCreateQueryDebugBuffer.c)
 *     PsspCaptureAuxiliaryPages @ 0x1801059D8 (PsspCaptureAuxiliaryPages.c)
 *     LdrpResMapFile @ 0x180109594 (LdrpResMapFile.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x18010CE10 (LdrVerifyImageMatchesChecksumEx.c)
 *     RtlHeapTrkInitialize @ 0x180110AB0 (RtlHeapTrkInitialize.c)
 *     WerpCreateCrashDataSection @ 0x180111BE4 (WerpCreateCrashDataSection.c)
 *     RtlpOpenAndMapCustomCultureFile @ 0x180113900 (RtlpOpenAndMapCustomCultureFile.c)
 *     RtlpHpTagQueryHeapsRemote @ 0x1801157E0 (RtlpHpTagQueryHeapsRemote.c)
 *     AvrfMiniLoadDll @ 0x180116838 (AvrfMiniLoadDll.c)
 *     LdrpMapAndSnapDependency @ 0x18011A660 (LdrpMapAndSnapDependency.c)
 *     RtlComputeImportTableHash @ 0x180121A80 (RtlComputeImportTableHash.c)
 *     RtlCreateProcessReflection @ 0x1801397C0 (RtlCreateProcessReflection.c)
 *     RtlpExtendedHeapInformationWorkerCallback @ 0x180144C00 (RtlpExtendedHeapInformationWorkerCallback.c)
 *     RtlpExtendedHeapInformationWorkerThread @ 0x180144D20 (RtlpExtendedHeapInformationWorkerThread.c)
 *     RtlpHpRemoteStackSerializeWriter @ 0x1801450E0 (RtlpHpRemoteStackSerializeWriter.c)
 *     RtlpHpStackTraceSerializeRemote @ 0x18014FE10 (RtlpHpStackTraceSerializeRemote.c)
 *     PsspCaptureIptTrace @ 0x1801597AC (PsspCaptureIptTrace.c)
 *     LdrpIsCurrentPatchLatest @ 0x18015BCEC (LdrpIsCurrentPatchLatest.c)
 * Callees:
 *     <none>
 */

__int64 ZwMapViewOfSection()
{
  __int64 result; // rax

  result = 40LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
