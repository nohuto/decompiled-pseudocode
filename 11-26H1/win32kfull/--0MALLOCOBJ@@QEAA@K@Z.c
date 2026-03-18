/*
 * XREFs of ??0MALLOCOBJ@@QEAA@K@Z @ 0x140186E18
 * Callers:
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x140102C2C (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH.c)
 *     ?DownloadScans@ENUMUNCOVERED@@QEBA?AUSCAN_DATA@1@XZ @ 0x140186CA0 (-DownloadScans@ENUMUNCOVERED@@QEBA-AUSCAN_DATA@1@XZ.c)
 *     ?TryResurrectHff@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z @ 0x1401871BC (-TryResurrectHff@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z.c)
 *     ?bAttemptReload@PFFOBJ@@QEAAHXZ @ 0x14026C658 (-bAttemptReload@PFFOBJ@@QEAAHXZ.c)
 *     ?ObtainSectionForNetworkedFontFile@NetworkedFontFileTable@@YAJPEAXPEBGPEAT_LARGE_INTEGER@@PEAPEAXPEAPEAUNETWORKED_FONT_FILE_NODE@@@Z @ 0x14031CE4C (-ObtainSectionForNetworkedFontFile@NetworkedFontFileTable@@YAJPEAXPEBGPEAT_LARGE_INTEGER@@PEAPEA.c)
 *     GreEudcLoadLinkW @ 0x14032453C (GreEudcLoadLinkW.c)
 *     bDeleteFlEntry @ 0x140324924 (bDeleteFlEntry.c)
 *     bWriteUserSystemEUDCRegistry @ 0x140324B28 (bWriteUserSystemEUDCRegistry.c)
 *     ?BackPropagateLargeBitmapBits@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAXH@Z @ 0x14034A094 (-BackPropagateLargeBitmapBits@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAXH@Z.c)
 * Callees:
 *     <none>
 */

MALLOCOBJ *__fastcall MALLOCOBJ::MALLOCOBJ(MALLOCOBJ *this, unsigned int a2)
{
  __int64 v3; // rax

  *(_QWORD *)this = 0LL;
  if ( !a2 || (v3 = Win32AllocPoolZInit(a2, 1886221383LL), (*(_QWORD *)this = v3) == 0LL) )
    EngSetLastError(8u);
  return this;
}
