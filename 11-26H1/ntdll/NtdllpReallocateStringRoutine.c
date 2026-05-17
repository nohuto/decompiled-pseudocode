/*
 * XREFs of NtdllpReallocateStringRoutine @ 0x1801214BC
 * Callers:
 *     LdrpLoadForwardedDll @ 0x18003A500 (LdrpLoadForwardedDll.c)
 *     LdrpLoadDependentModuleA @ 0x18003ACC0 (LdrpLoadDependentModuleA.c)
 *     LdrpAppendAnsiStringToFilenameBuffer @ 0x18003B3C0 (LdrpAppendAnsiStringToFilenameBuffer.c)
 *     LdrpApplyFileNameRedirection @ 0x180042DA0 (LdrpApplyFileNameRedirection.c)
 *     LdrpPreprocessDllName @ 0x180045C10 (LdrpPreprocessDllName.c)
 *     LdrpLoadDll @ 0x180051A00 (LdrpLoadDll.c)
 *     LdrpAppendUnicodeStringToFilenameBuffer @ 0x180051F90 (LdrpAppendUnicodeStringToFilenameBuffer.c)
 *     LdrpBuildSystem32FileName @ 0x1800BE800 (LdrpBuildSystem32FileName.c)
 * Callees:
 *     <none>
 */

__int64 NtdllpReallocateStringRoutine()
{
  return RtlReAllocateHeap_0();
}
