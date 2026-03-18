/*
 * XREFs of MiLogMapFileEvent @ 0x140AD6354
 * Callers:
 *     NtUnmapViewOfSectionEx @ 0x1409C38B0 (NtUnmapViewOfSectionEx.c)
 *     MiUnmapVad @ 0x1409C3B30 (MiUnmapVad.c)
 *     MiUnmapViewOfSection @ 0x1409C3C30 (MiUnmapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1409C3E60 (NtUnmapViewOfSection.c)
 *     MiHandleInsertedImageVad @ 0x1409CDFA4 (MiHandleInsertedImageVad.c)
 * Callees:
 *     MiReadVadFlags @ 0x1404655D0 (MiReadVadFlags.c)
 *     MiLogPerfMemoryEvent @ 0x14048C8AC (MiLogPerfMemoryEvent.c)
 *     MiFillMapFileInfo @ 0x1409C6BC8 (MiFillMapFileInfo.c)
 */

char __fastcall MiLogMapFileEvent(__int64 a1, __int16 a2)
{
  char result; // al
  __int64 v4; // rcx
  _OWORD v5[3]; // [rsp+30h] [rbp-38h] BYREF

  memset(v5, 0, sizeof(v5));
  result = MiReadVadFlags(a1) & 0x1C;
  if ( result != 4 )
  {
    MiFillMapFileInfo(v4, (__int64)v5);
    return MiLogPerfMemoryEvent(a2, 0x8000u, (__int64)v5, 44, 5249283);
  }
  return result;
}
