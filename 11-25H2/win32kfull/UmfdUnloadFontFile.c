/*
 * XREFs of UmfdUnloadFontFile @ 0x14010A840
 * Callers:
 *     UmfdLoadFontFile @ 0x140107CD0 (UmfdLoadFontFile.c)
 * Callees:
 *     UmfdUnloadFontFileInternal @ 0x14010A388 (UmfdUnloadFontFileInternal.c)
 */

__int64 __fastcall UmfdUnloadFontFile(PVOID pv, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx

  v4 = UmfdUnloadFontFileInternal((__int64)pv, a2, a3);
  EngFreeMem(pv);
  return v4;
}
