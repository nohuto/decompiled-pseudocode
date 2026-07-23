/*
 * XREFs of NtdllpReallocateStringRoutine @ 0x180121258
 * Callers:
 *     LdrpLoadForwardedDll @ 0x180024A70 (LdrpLoadForwardedDll.c)
 *     LdrpLoadDependentModuleA @ 0x180025230 (LdrpLoadDependentModuleA.c)
 *     LdrpAppendAnsiStringToFilenameBuffer @ 0x180025930 (LdrpAppendAnsiStringToFilenameBuffer.c)
 *     LdrpApplyFileNameRedirection @ 0x18002D310 (LdrpApplyFileNameRedirection.c)
 *     LdrpPreprocessDllName @ 0x180030180 (LdrpPreprocessDllName.c)
 *     LdrpLoadDll @ 0x18003BF80 (LdrpLoadDll.c)
 *     LdrpAppendUnicodeStringToFilenameBuffer @ 0x18003C510 (LdrpAppendUnicodeStringToFilenameBuffer.c)
 *     LdrpBuildSystem32FileName @ 0x1800BC260 (LdrpBuildSystem32FileName.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall NtdllpReallocateStringRoutine(SIZE_T Size, PVOID BaseAddress)
{
  return RtlReAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 0, BaseAddress, Size);
}
