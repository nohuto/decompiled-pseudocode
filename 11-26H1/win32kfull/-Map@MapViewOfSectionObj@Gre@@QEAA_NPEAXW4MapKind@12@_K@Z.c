/*
 * XREFs of ?Map@MapViewOfSectionObj@Gre@@QEAA_NPEAXW4MapKind@12@_K@Z @ 0x14021164C
 * Callers:
 *     ?MapFontFileInKernel@@YA_NPEAXPEAPEAX@Z @ 0x1400CF540 (-MapFontFileInKernel@@YA_NPEAXPEAPEAX@Z.c)
 *     ?SecureConnectPort@PROXYPORT@@SAJPEAPEAXPEAU_UNICODE_STRING@@PEAU_SECURITY_QUALITY_OF_SERVICE@@PEAU_PORT_VIEW@@0PEAXPEAK@Z @ 0x140140020 (-SecureConnectPort@PROXYPORT@@SAJPEAPEAXPEAU_UNICODE_STRING@@PEAU_SECURITY_QUALITY_OF_SERVICE@@P.c)
 *     ?bMapFileRetainHandle@@YAHPEBGPEAUFILEVIEW@@KW4GreFileKind@@@Z @ 0x1401C676C (-bMapFileRetainHandle@@YAHPEBGPEAUFILEVIEW@@KW4GreFileKind@@@Z.c)
 *     cMapRemoteFonts @ 0x14021BC40 (cMapRemoteFonts.c)
 *     HmgAllocateGdiSharedMemory @ 0x140258390 (HmgAllocateGdiSharedMemory.c)
 *     ?bFontFile@UMPDOBJ@@QEAA_NAEAVRFONTOBJ@@@Z @ 0x140292838 (-bFontFile@UMPDOBJ@@QEAA_NAEAVRFONTOBJ@@@Z.c)
 *     ?GreGetUFIPathname@@YAHPEAU_UNIVERSAL_FONT_ID@@PEAKPEAGK1KPEAH1PEAX31@Z @ 0x140310798 (-GreGetUFIPathname@@YAHPEAU_UNIVERSAL_FONT_ID@@PEAKPEAGK1KPEAH1PEAX31@Z.c)
 *     ?EngMapFontFileInternal@@YAH_KPEAPEAKPEAK@Z @ 0x14031CB80 (-EngMapFontFileInternal@@YAH_KPEAPEAKPEAK@Z.c)
 *     ?bMapFile@@YAHPEBGPEAUFILEVIEW@@HW4GreFileKind@@@Z @ 0x14031D48C (-bMapFile@@YAHPEBGPEAUFILEVIEW@@HW4GreFileKind@@@Z.c)
 *     ??0FontFileBackupMapper@UmfdHostLifeTimeManager@@QEAA@PEBUFONTFILEVIEW@@@Z @ 0x14034D4E8 (--0FontFileBackupMapper@UmfdHostLifeTimeManager@@QEAA@PEBUFONTFILEVIEW@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Gre::MapViewOfSectionObj::Map(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD v5[3]; // [rsp+30h] [rbp-18h] BYREF

  v5[0] = 0LL;
  return Gre::MapViewOfSectionObj::Map(a1, a2, a3, a4, v5);
}
