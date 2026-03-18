/*
 * XREFs of ??0COcclusionContext@@QEAA@XZ @ 0x180203E84
 * Callers:
 *     ?DrawSubVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800AD448 (-DrawSubVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_R.c)
 *     ??0CaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCChannelContext@@PEAVCVisualTree@@MAEBUWICRect@@W4DXGI_FORMAT@@_K@Z @ 0x180149E78 (--0CaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCChannelContext@@PEAVCVisualTree@@MA.c)
 *     ??0?$CTargetDirtyBase@$07@@QEAA@PEBVIVisualTreeTarget@@@Z @ 0x1801C9AA4 (--0-$CTargetDirtyBase@$07@@QEAA@PEBVIVisualTreeTarget@@@Z.c)
 *     ??0CCachedVisualImage@@IEAA@PEAVCComposition@@W4Consumer@0@@Z @ 0x180203D0C (--0CCachedVisualImage@@IEAA@PEAVCComposition@@W4Consumer@0@@Z.c)
 *     ??0CDesktopTree@@IEAA@PEAVCComposition@@@Z @ 0x180203DCC (--0CDesktopTree@@IEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     <none>
 */

COcclusionContext *__fastcall COcclusionContext::COcclusionContext(COcclusionContext *this)
{
  signed __int32 v1; // eax

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *(_QWORD *)((char *)this + 92) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 25) = 0;
  *((_DWORD *)this + 19) = 0;
  *((_DWORD *)this + 13) = 0;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 22) = 0;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = (char *)this + 232;
  *((_QWORD *)this + 26) = (char *)this + 232;
  *((_DWORD *)this + 54) = 4;
  *(_QWORD *)((char *)this + 220) = 4LL;
  *((_QWORD *)this + 37) = (char *)this + 328;
  *((_QWORD *)this + 38) = (char *)this + 328;
  *((_DWORD *)this + 78) = 3;
  *(_QWORD *)((char *)this + 316) = 3LL;
  *((_QWORD *)this + 52) = 0LL;
  *((_QWORD *)this + 53) = (char *)this + 432;
  *((_DWORD *)this + 108) = 0;
  *((_QWORD *)this + 62) = (char *)this + 504;
  *((_DWORD *)this + 126) = 0;
  *((_QWORD *)this + 71) = 0LL;
  *((_QWORD *)this + 72) = 0LL;
  *((_QWORD *)this + 73) = (char *)this + 616;
  *((_QWORD *)this + 74) = (char *)this + 616;
  *((_DWORD *)this + 150) = 10;
  *(_QWORD *)((char *)this + 604) = 10LL;
  do
    v1 = _InterlockedIncrement((volatile signed __int32 *)&COcclusionContext::s_occlusionId);
  while ( !v1 );
  *((_DWORD *)this + 274) = v1;
  *((_QWORD *)this + 138) = 0LL;
  *((_QWORD *)this + 139) = 0LL;
  *((_DWORD *)this + 280) = 0x7FFFFFFF;
  *(_QWORD *)((char *)this + 1124) = 256LL;
  *((_DWORD *)this + 299) = 0;
  *((_QWORD *)this + 158) = 0LL;
  *((_QWORD *)this + 159) = 0LL;
  *((_DWORD *)this + 320) = 0;
  *((_QWORD *)this + 162) = 0LL;
  *((_QWORD *)this + 161) = 0LL;
  *((_QWORD *)this + 163) = 0LL;
  *((_QWORD *)this + 165) = 0LL;
  *((_QWORD *)this + 164) = 0LL;
  *((_QWORD *)this + 166) = 0LL;
  *((_QWORD *)this + 168) = 0LL;
  *((_QWORD *)this + 167) = 0LL;
  *((_QWORD *)this + 169) = 0LL;
  *((_QWORD *)this + 170) = (char *)this + 1384;
  *((_QWORD *)this + 171) = (char *)this + 1384;
  *((_QWORD *)this + 172) = (char *)this + 1400;
  return this;
}
