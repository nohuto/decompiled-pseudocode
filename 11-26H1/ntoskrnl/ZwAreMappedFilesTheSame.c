/*
 * XREFs of ZwAreMappedFilesTheSame @ 0x1407291C0
 * Callers:
 *     DifZwAreMappedFilesTheSameWrapper @ 0x14069FBF0 (DifZwAreMappedFilesTheSameWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAreMappedFilesTheSame(PVOID File1MappedAsAnImage, PVOID File2MappedAsFile)
{
  _disable();
  __readeflags();
  return KiServiceInternal(File1MappedAsAnImage);
}
