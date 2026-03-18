/*
 * XREFs of EngMapFontFile @ 0x140306110
 * Callers:
 *     <none>
 * Callees:
 *     ?EngMapFontFileInternal@@YAH_KPEAPEAKPEAK@Z @ 0x1403051C8 (-EngMapFontFileInternal@@YAH_KPEAPEAKPEAK@Z.c)
 */

BOOL __stdcall EngMapFontFile(ULONG_PTR iFile, PULONG *ppjBuf, ULONG *pcjBuf)
{
  return EngMapFontFileInternal(iFile, ppjBuf, pcjBuf);
}
