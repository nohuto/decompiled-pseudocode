/*
 * XREFs of EngMapFontFileFD @ 0x1403046D0
 * Callers:
 *     <none>
 * Callees:
 *     EngMapFontFileFDInternal @ 0x1400B2070 (EngMapFontFileFDInternal.c)
 */

BOOL __stdcall EngMapFontFileFD(ULONG_PTR iFile, PULONG *ppjBuf, ULONG *pcjBuf)
{
  return EngMapFontFileFDInternal((struct FILEVIEW *)iFile, ppjBuf, pcjBuf, 1);
}
