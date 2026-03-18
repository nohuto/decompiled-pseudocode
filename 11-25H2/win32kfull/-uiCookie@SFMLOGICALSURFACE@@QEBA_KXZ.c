/*
 * XREFs of ?uiCookie@SFMLOGICALSURFACE@@QEBA_KXZ @ 0x140097B38
 * Callers:
 *     GreNotifyDirtySprite @ 0x140057C3C (GreNotifyDirtySprite.c)
 *     ?GrepSfmGetDirtyRgn@@YAJPEAVSFMLOGICALSURFACE@@_KPEAPEAUHRGN__@@222PEAU_POINTL@@PEAH4@Z @ 0x14008F404 (-GrepSfmGetDirtyRgn@@YAJPEAVSFMLOGICALSURFACE@@_KPEAPEAUHRGN__@@222PEAU_POINTL@@PEAH4@Z.c)
 *     ?GetSoSurfaceData@SFMLOGICALSURFACE@@QEAAJPEAUtagDWMSURFACEDATA@@@Z @ 0x14009534C (-GetSoSurfaceData@SFMLOGICALSURFACE@@QEAAJPEAUtagDWMSURFACEDATA@@@Z.c)
 *     GreAddBitmapD3DDirtyRgn @ 0x140097F10 (GreAddBitmapD3DDirtyRgn.c)
 *     GreTransferSpriteStateToDwmState @ 0x140172718 (GreTransferSpriteStateToDwmState.c)
 *     ?bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCTION@@@Z @ 0x140173F98 (-bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCT.c)
 *     ?SignalOnDirty@SFMLOGICALSURFACE@@QEAAJH@Z @ 0x1401A6A38 (-SignalOnDirty@SFMLOGICALSURFACE@@QEAAJH@Z.c)
 *     ?vSpDwmFlushSpriteClipRgnChange@@YAXPEAVSFMLOGICALSURFACE@@@Z @ 0x1401E6C88 (-vSpDwmFlushSpriteClipRgnChange@@YAXPEAVSFMLOGICALSURFACE@@@Z.c)
 *     ?SpDdNotifyFullscreenSpriteUpdate@@YAJAEAVXDCOBJ@@PEAX@Z @ 0x140322640 (-SpDdNotifyFullscreenSpriteUpdate@@YAJAEAVXDCOBJ@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall SFMLOGICALSURFACE::uiCookie(SFMLOGICALSURFACE *this)
{
  __int64 v1; // rdx
  unsigned __int64 result; // rax

  v1 = *((_QWORD *)this + 23);
  result = 0LL;
  if ( v1 )
    return *(_QWORD *)(v1 + 8);
  return result;
}
