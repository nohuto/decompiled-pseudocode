/*
 * XREFs of ?vUnmapFile@@YAXPEAUFILEVIEW@@H@Z @ 0x140229BB0
 * Callers:
 *     vUnmapFontCacheFile @ 0x140303FC4 (vUnmapFontCacheFile.c)
 *     EngFreeModule @ 0x140304590 (EngFreeModule.c)
 *     ?EngMapFontFileInternal@@YAH_KPEAPEAKPEAK@Z @ 0x1403051C8 (-EngMapFontFileInternal@@YAH_KPEAPEAKPEAK@Z.c)
 *     EngUnmapFontFile @ 0x1403061C0 (EngUnmapFontFile.c)
 * Callees:
 *     ?vUnreferenceFileviewSection@@YAXPEAUFILEVIEW@@@Z @ 0x14010C4A4 (-vUnreferenceFileviewSection@@YAXPEAUFILEVIEW@@@Z.c)
 */

void __fastcall vUnmapFile(struct FILEVIEW *a1)
{
  struct NETWORKED_FONT_FILE_NODE *v2; // rdx
  _QWORD v3[5]; // [rsp+20h] [rbp-38h] BYREF
  int v4; // [rsp+48h] [rbp-10h]

  v3[0] = 0LL;
  v3[3] = 0LL;
  v3[4] = 0LL;
  v3[1] = 0LL;
  v3[2] = *((_QWORD *)a1 + 1);
  v4 = 3;
  Gre::MapViewOfSectionObj::Unmap((Gre::MapViewOfSectionObj *)v3);
  if ( !*((_QWORD *)a1 + 2) )
    vUnreferenceFileviewSection(a1, v2);
  *((_DWORD *)a1 + 10) &= ~1u;
  if ( v4 != 5 )
    Gre::MapViewOfSectionObj::Unmap((Gre::MapViewOfSectionObj *)v3);
}
