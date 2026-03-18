/*
 * XREFs of ?vUnreferenceFileviewSection@@YAXPEAUFILEVIEW@@@Z @ 0x14010C4A4
 * Callers:
 *     EngMapFontFileFDInternal @ 0x1400B2070 (EngMapFontFileFDInternal.c)
 *     EngUnmapFontFileFD @ 0x1400B2490 (EngUnmapFontFileFD.c)
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x1400B663C (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH.c)
 *     ?GreMakeFontDir@@YAKKPEAEPEAG@Z @ 0x14010BDE4 (-GreMakeFontDir@@YAKKPEAEPEAG@Z.c)
 *     FreeFileView @ 0x14010C314 (FreeFileView.c)
 *     ?vUnmapFileFD@@YAXPEAUFILEVIEW@@_N@Z @ 0x14010C418 (-vUnmapFileFD@@YAXPEAUFILEVIEW@@_N@Z.c)
 *     ?vUnmapFile@@YAXPEAUFILEVIEW@@H@Z @ 0x140229BB0 (-vUnmapFile@@YAXPEAUFILEVIEW@@H@Z.c)
 *     ?bCreateSectionFromHandle@@YAHPEAXPEBGPEAUFILEVIEW@@HW4GreFileKind@@@Z @ 0x140305B64 (-bCreateSectionFromHandle@@YAHPEAXPEBGPEAUFILEVIEW@@HW4GreFileKind@@@Z.c)
 *     ?bMapFile@@YAHPEBGPEAUFILEVIEW@@HW4GreFileKind@@@Z @ 0x140305DF8 (-bMapFile@@YAHPEBGPEAUFILEVIEW@@HW4GreFileKind@@@Z.c)
 *     ?bMapFileRetainHandle@@YAHPEBGPEAUFILEVIEW@@KW4GreFileKind@@@Z @ 0x140305F10 (-bMapFileRetainHandle@@YAHPEBGPEAUFILEVIEW@@KW4GreFileKind@@@Z.c)
 *     EngUnmapFile @ 0x140306130 (EngUnmapFile.c)
 * Callees:
 *     ?UnreferenceNetworkedFontFileNode@NetworkedFontFileTable@@YA_NPEAUNETWORKED_FONT_FILE_NODE@@@Z @ 0x140305814 (-UnreferenceNetworkedFontFileNode@NetworkedFontFileTable@@YA_NPEAUNETWORKED_FONT_FILE_NODE@@@Z.c)
 *     ?bCopySection@@YAHPEAX0_K@Z @ 0x1403058A0 (-bCopySection@@YAHPEAX0_K@Z.c)
 */

void __fastcall vUnreferenceFileviewSection(struct FILEVIEW *a1, struct NETWORKED_FONT_FILE_NODE *a2)
{
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rdx
  void *v6; // [rsp+40h] [rbp+8h] BYREF
  union _LARGE_INTEGER v7; // [rsp+48h] [rbp+10h] BYREF

  if ( (*((_DWORD *)a1 + 10) & 2) != 0 )
  {
    v4 = (void *)*((_QWORD *)a1 + 7);
    if ( v4 )
    {
      if ( NetworkedFontFileTable::UnreferenceNetworkedFontFileNode(v4, a2) )
      {
        v5 = (void *)*((_QWORD *)a1 + 6);
        if ( v5 )
        {
          if ( (*((_DWORD *)a1 + 10) & 4) != 0 )
          {
            v7.QuadPart = *((unsigned int *)a1 + 6);
            Gre::SectionObj::SectionObj((Gre::SectionObj *)&v6, v5, &v7, 1, 0LL);
            if ( v6 )
              bCopySection(v6, *((void **)a1 + 4), *((unsigned int *)a1 + 6));
            Gre::SectionObj::~SectionObj((Gre::SectionObj *)&v6);
          }
        }
      }
    }
  }
  if ( *((_QWORD *)a1 + 4) )
  {
    v6 = (void *)*((_QWORD *)a1 + 4);
    Gre::SectionObj::~SectionObj((Gre::SectionObj *)&v6);
    *((_QWORD *)a1 + 4) = 0LL;
  }
  v3 = (void *)*((_QWORD *)a1 + 6);
  if ( v3 )
  {
    ZwClose(v3);
    *((_QWORD *)a1 + 6) = 0LL;
  }
}
