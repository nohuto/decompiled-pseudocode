/*
 * XREFs of MiLogMapFileEvent @ 0x140AD3354
 * Callers:
 *     NtUnmapViewOfSectionEx @ 0x140994890 (NtUnmapViewOfSectionEx.c)
 *     MiUnmapVad @ 0x140994B10 (MiUnmapVad.c)
 *     MiUnmapViewOfSection @ 0x140994C10 (MiUnmapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x140994E40 (NtUnmapViewOfSection.c)
 *     MiHandleInsertedImageVad @ 0x14099EF84 (MiHandleInsertedImageVad.c)
 * Callees:
 *     MiReadVadFlags @ 0x14045E590 (MiReadVadFlags.c)
 *     MiLogPerfMemoryEvent @ 0x1404863EC (MiLogPerfMemoryEvent.c)
 *     MiFillMapFileInfo @ 0x140997BA8 (MiFillMapFileInfo.c)
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
