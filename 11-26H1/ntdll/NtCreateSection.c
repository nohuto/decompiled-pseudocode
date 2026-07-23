/*
 * XREFs of NtCreateSection @ 0x18015F780
 * Callers:
 *     RtlpFileIsWin32WithRCManifest @ 0x180021F9C (RtlpFileIsWin32WithRCManifest.c)
 *     RtlGetImageFileMachines @ 0x18002F2C0 (RtlGetImageFileMachines.c)
 *     LdrpMapDllNtFileName @ 0x18007A750 (LdrpMapDllNtFileName.c)
 *     LdrpFindLoadedDllByMappingFile @ 0x18007D68C (LdrpFindLoadedDllByMappingFile.c)
 *     RtlReportExceptionHelper @ 0x18007F3E0 (RtlReportExceptionHelper.c)
 *     RtlpQueryExtendedHeapInformation @ 0x180092130 (RtlpQueryExtendedHeapInformation.c)
 *     LdrpMapResourceFile @ 0x1800A4CE0 (LdrpMapResourceFile.c)
 *     PsspCaptureThreadInformation @ 0x1800B0C00 (PsspCaptureThreadInformation.c)
 *     PsspCaptureHandleInformation @ 0x1800B376C (PsspCaptureHandleInformation.c)
 *     PsspCaptureVaSpaceInformation2 @ 0x1800B3E84 (PsspCaptureVaSpaceInformation2.c)
 *     PsspCaptureHandleTrace @ 0x1800B455C (PsspCaptureHandleTrace.c)
 *     CsrpConnectToServer @ 0x1800C8474 (CsrpConnectToServer.c)
 *     RtlCreateQueryDebugBuffer @ 0x1800E8A40 (RtlCreateQueryDebugBuffer.c)
 *     PsspCaptureAuxiliaryPages @ 0x180105228 (PsspCaptureAuxiliaryPages.c)
 *     LdrpResMapFile @ 0x180108F34 (LdrpResMapFile.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x18010C960 (LdrVerifyImageMatchesChecksumEx.c)
 *     WerpCreateCrashDataSection @ 0x180111754 (WerpCreateCrashDataSection.c)
 *     RtlpOpenAndMapCustomCultureFile @ 0x180113198 (RtlpOpenAndMapCustomCultureFile.c)
 *     RtlpHpTagQueryHeapsRemote @ 0x180114FC0 (RtlpHpTagQueryHeapsRemote.c)
 *     AvrfMiniLoadDll @ 0x180116018 (AvrfMiniLoadDll.c)
 *     RtlComputeImportTableHash @ 0x180121820 (RtlComputeImportTableHash.c)
 *     RtlCreateProcessReflection @ 0x180139530 (RtlCreateProcessReflection.c)
 *     RtlpHpStackTraceSerializeRemote @ 0x18014FCC0 (RtlpHpStackTraceSerializeRemote.c)
 *     PsspCaptureIptTrace @ 0x18015967C (PsspCaptureIptTrace.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtCreateSection(
        PHANDLE SectionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PLARGE_INTEGER MaximumSize,
        ULONG SectionPageProtection,
        ULONG AllocationAttributes,
        HANDLE FileHandle)
{
  NTSTATUS result; // eax

  result = 74;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
