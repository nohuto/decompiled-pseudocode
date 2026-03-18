/*
 * XREFs of ??1MapViewOfSectionObj@Gre@@QEAA@XZ @ 0x14020AFBC
 * Callers:
 *     ?bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1400A992C (-bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?SecureConnectPort@PROXYPORT@@SAJPEAPEAXPEAU_UNICODE_STRING@@PEAU_SECURITY_QUALITY_OF_SERVICE@@PEAU_PORT_VIEW@@0PEAXPEAK@Z @ 0x140140020 (-SecureConnectPort@PROXYPORT@@SAJPEAPEAXPEAU_UNICODE_STRING@@PEAU_SECURITY_QUALITY_OF_SERVICE@@P.c)
 *     ?bMapFileRetainHandle@@YAHPEBGPEAUFILEVIEW@@KW4GreFileKind@@@Z @ 0x1401C676C (-bMapFileRetainHandle@@YAHPEBGPEAUFILEVIEW@@KW4GreFileKind@@@Z.c)
 *     cMapRemoteFonts @ 0x14021BC40 (cMapRemoteFonts.c)
 *     HmgAllocateGdiSharedMemory @ 0x140258390 (HmgAllocateGdiSharedMemory.c)
 *     ?bFontFile@UMPDOBJ@@QEAA_NAEAVRFONTOBJ@@@Z @ 0x140292838 (-bFontFile@UMPDOBJ@@QEAA_NAEAVRFONTOBJ@@@Z.c)
 *     ?GreGetUFIPathname@@YAHPEAU_UNIVERSAL_FONT_ID@@PEAKPEAGK1KPEAH1PEAX31@Z @ 0x140310798 (-GreGetUFIPathname@@YAHPEAU_UNIVERSAL_FONT_ID@@PEAKPEAGK1KPEAH1PEAX31@Z.c)
 *     ?EngMapFontFileInternal@@YAH_KPEAPEAKPEAK@Z @ 0x14031CB80 (-EngMapFontFileInternal@@YAH_KPEAPEAKPEAK@Z.c)
 *     ?bCopySection@@YAHPEAX0_K@Z @ 0x14031D284 (-bCopySection@@YAHPEAX0_K@Z.c)
 *     ?bMapFile@@YAHPEBGPEAUFILEVIEW@@HW4GreFileKind@@@Z @ 0x14031D48C (-bMapFile@@YAHPEBGPEAUFILEVIEW@@HW4GreFileKind@@@Z.c)
 *     EngUnmapFile @ 0x14031D660 (EngUnmapFile.c)
 *     GrepUnmapSessionView @ 0x14031D7D0 (GrepUnmapSessionView.c)
 *     ??0FontFileBackupMapper@UmfdHostLifeTimeManager@@QEAA@PEBUFONTFILEVIEW@@@Z @ 0x14034D4E8 (--0FontFileBackupMapper@UmfdHostLifeTimeManager@@QEAA@PEBUFONTFILEVIEW@@@Z.c)
 *     ??1FontFileBackupMapper@UmfdHostLifeTimeManager@@QEAA@XZ @ 0x14034D5C4 (--1FontFileBackupMapper@UmfdHostLifeTimeManager@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall Gre::MapViewOfSectionObj::~MapViewOfSectionObj(Gre::MapViewOfSectionObj *this)
{
  if ( *((_DWORD *)this + 8) != 6 )
    Gre::MapViewOfSectionObj::Unmap(this);
}
