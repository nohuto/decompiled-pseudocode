/*
 * XREFs of ?vUnmapFileFD@@YAXPEAUFILEVIEW@@_N@Z @ 0x14010C418
 * Callers:
 *     EngMapFontFileFDInternal @ 0x1400B2070 (EngMapFontFileFDInternal.c)
 * Callees:
 *     ?UnmapViewOfSectionFromFontDriverProcess@@YAXPEAUFILEVIEW@@@Z @ 0x14010C458 (-UnmapViewOfSectionFromFontDriverProcess@@YAXPEAUFILEVIEW@@@Z.c)
 *     ?vUnreferenceFileviewSection@@YAXPEAUFILEVIEW@@@Z @ 0x14010C4A4 (-vUnreferenceFileviewSection@@YAXPEAUFILEVIEW@@@Z.c)
 */

void __fastcall vUnmapFileFD(struct FILEVIEW *a1, char a2)
{
  UnmapViewOfSectionFromFontDriverProcess(a1);
  if ( !*((_QWORD *)a1 + 1) && a2 )
    vUnreferenceFileviewSection(a1);
  *((_DWORD *)a1 + 10) &= ~1u;
}
