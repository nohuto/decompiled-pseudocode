/*
 * XREFs of ?bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ @ 0x14001C68C
 * Callers:
 *     GreAddBitmapD3DDirtyRgn @ 0x14001C31C (GreAddBitmapD3DDirtyRgn.c)
 *     ?GetSoSurfaceData@SFMLOGICALSURFACE@@QEAAJPEAUtagDWMSURFACEDATA@@@Z @ 0x1400A4174 (-GetSoSurfaceData@SFMLOGICALSURFACE@@QEAAJPEAUtagDWMSURFACEDATA@@@Z.c)
 *     GreWindowResizeComplete @ 0x1402259FC (GreWindowResizeComplete.c)
 *     GreGetHwndUpdateIds @ 0x1403450D8 (GreGetHwndUpdateIds.c)
 *     GreHLsurfSetUpdateId @ 0x14034534C (GreHLsurfSetUpdateId.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SFMLOGICALSURFACE::bDeviceBitmap(SFMLOGICALSURFACE *this)
{
  __int64 v1; // rax
  unsigned int v2; // ecx

  v1 = *((_QWORD *)this + 23);
  if ( !v1 )
    return 0;
  v2 = 1;
  if ( (*(_DWORD *)(v1 + 92) & 1) == 0 )
    return 0;
  return v2;
}
