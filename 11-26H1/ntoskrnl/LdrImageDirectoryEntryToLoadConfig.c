/*
 * XREFs of LdrImageDirectoryEntryToLoadConfig @ 0x14077DECC
 * Callers:
 *     RtlGetImageBaseAndLoadConfig @ 0x14043BE50 (RtlGetImageBaseAndLoadConfig.c)
 *     RtlGuardCheckExceptionHandler @ 0x1404570C0 (RtlGuardCheckExceptionHandler.c)
 *     RtlIsImageFullyRetpolined @ 0x1404FFD68 (RtlIsImageFullyRetpolined.c)
 *     RtlpCaptureRetpolineBinaryInfoForImage @ 0x14050B370 (RtlpCaptureRetpolineBinaryInfoForImage.c)
 *     RtlpCaptureDynamicRelocationTableRva @ 0x14052A9D4 (RtlpCaptureDynamicRelocationTableRva.c)
 *     RtlGuardCheckLongJumpTarget @ 0x140530D10 (RtlGuardCheckLongJumpTarget.c)
 * Callees:
 *     LdrImageDirectoryEntryToLoadConfigEx @ 0x14040C74C (LdrImageDirectoryEntryToLoadConfigEx.c)
 */

_DWORD *__fastcall LdrImageDirectoryEntryToLoadConfig(unsigned __int64 a1, __int64 a2)
{
  return LdrImageDirectoryEntryToLoadConfigEx(a1, a2);
}
