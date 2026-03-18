/*
 * XREFs of ??1MapViewOfSectionObj@Gre@@QEAA@XZ @ 0x1401E756C
 * Callers:
 *     ?bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x14008C23C (-bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     cMapRemoteFonts @ 0x14010D3C8 (cMapRemoteFonts.c)
 *     ?EngMapFontFileInternal@@YAH_KPEAPEAKPEAK@Z @ 0x1403051C8 (-EngMapFontFileInternal@@YAH_KPEAPEAKPEAK@Z.c)
 *     ?bCopySection@@YAHPEAX0_K@Z @ 0x1403058A0 (-bCopySection@@YAHPEAX0_K@Z.c)
 *     ?bMapFile@@YAHPEBGPEAUFILEVIEW@@HW4GreFileKind@@@Z @ 0x140305DF8 (-bMapFile@@YAHPEBGPEAUFILEVIEW@@HW4GreFileKind@@@Z.c)
 *     ?bMapFileRetainHandle@@YAHPEBGPEAUFILEVIEW@@KW4GreFileKind@@@Z @ 0x140305F10 (-bMapFileRetainHandle@@YAHPEBGPEAUFILEVIEW@@KW4GreFileKind@@@Z.c)
 *     EngUnmapFile @ 0x140306130 (EngUnmapFile.c)
 *     GrepUnmapSessionView @ 0x1403062A0 (GrepUnmapSessionView.c)
 *     ?GreGetUFIPathname@@YAHPEAU_UNIVERSAL_FONT_ID@@PEAKPEAGK1KPEAH1PEAX31@Z @ 0x1403275E4 (-GreGetUFIPathname@@YAHPEAU_UNIVERSAL_FONT_ID@@PEAKPEAGK1KPEAH1PEAX31@Z.c)
 *     ??1FontFileBackupMapper@UmfdHostLifeTimeManager@@QEAA@XZ @ 0x14033828C (--1FontFileBackupMapper@UmfdHostLifeTimeManager@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall Gre::MapViewOfSectionObj::~MapViewOfSectionObj(Gre::MapViewOfSectionObj *this)
{
  if ( *((_DWORD *)this + 10) != 5 )
    Gre::MapViewOfSectionObj::Unmap(this);
}
