/*
 * XREFs of ?bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ @ 0x140097B54
 * Callers:
 *     GreAddBitmapD3DDirtyRgn @ 0x140097F10 (GreAddBitmapD3DDirtyRgn.c)
 *     GreWindowResizeComplete @ 0x1401F855C (GreWindowResizeComplete.c)
 *     GreGetHwndUpdateIds @ 0x140322ED8 (GreGetHwndUpdateIds.c)
 *     GreHLsurfSetUpdateId @ 0x140323134 (GreHLsurfSetUpdateId.c)
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
