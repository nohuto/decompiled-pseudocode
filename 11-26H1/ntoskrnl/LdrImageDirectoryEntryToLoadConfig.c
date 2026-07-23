/*
 * XREFs of LdrImageDirectoryEntryToLoadConfig @ 0x1407809CC
 * Callers:
 *     RtlGetImageBaseAndLoadConfig @ 0x14042E700 (RtlGetImageBaseAndLoadConfig.c)
 *     RtlGuardCheckExceptionHandler @ 0x14044E930 (RtlGuardCheckExceptionHandler.c)
 *     RtlIsImageFullyRetpolined @ 0x1404F9558 (RtlIsImageFullyRetpolined.c)
 *     RtlpCaptureRetpolineBinaryInfoForImage @ 0x140504DE0 (RtlpCaptureRetpolineBinaryInfoForImage.c)
 *     RtlpCaptureDynamicRelocationTableRva @ 0x14052CEF4 (RtlpCaptureDynamicRelocationTableRva.c)
 *     RtlGuardCheckLongJumpTarget @ 0x140533210 (RtlGuardCheckLongJumpTarget.c)
 * Callees:
 *     LdrImageDirectoryEntryToLoadConfigEx @ 0x140429E94 (LdrImageDirectoryEntryToLoadConfigEx.c)
 */

_DWORD *__fastcall LdrImageDirectoryEntryToLoadConfig(unsigned int *a1)
{
  return LdrImageDirectoryEntryToLoadConfigEx(a1);
}
