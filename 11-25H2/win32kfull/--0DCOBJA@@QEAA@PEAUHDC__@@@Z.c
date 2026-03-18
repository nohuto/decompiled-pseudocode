/*
 * XREFs of ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x14009A87C
 * Callers:
 *     GreConvertMemToRedirectionDC @ 0x1400574D0 (GreConvertMemToRedirectionDC.c)
 *     ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x140099AFC (-vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z.c)
 *     GreSelectRedirectionBitmap @ 0x14009A2A0 (GreSelectRedirectionBitmap.c)
 *     GreHintDCWnd @ 0x14009A6C0 (GreHintDCWnd.c)
 *     DxgkEngAddRedirBitmapD3DDirtyRgn @ 0x14009B990 (DxgkEngAddRedirBitmapD3DDirtyRgn.c)
 *     DxgkEngGetClientRect @ 0x14009BB50 (DxgkEngGetClientRect.c)
 *     DxgkEngGetRedirBitmapSharedHandle @ 0x14009BBB0 (DxgkEngGetRedirBitmapSharedHandle.c)
 *     DxgkEngAccumD3DPresentBounds @ 0x1401DCB20 (DxgkEngAccumD3DPresentBounds.c)
 *     GreWatchVisRgnChange @ 0x14030ECA0 (GreWatchVisRgnChange.c)
 *     DxgkEngIsRedirectionDC @ 0x140326620 (DxgkEngIsRedirectionDC.c)
 *     GreConvertRedirectionToMemDC @ 0x140333098 (GreConvertRedirectionToMemDC.c)
 * Callees:
 *     ??0XDCOBJ@@QEAA@XZ @ 0x14014AD50 (--0XDCOBJ@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ @ 0x14030E9D4 (--0-$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ.c)
 */

DCOBJA *__fastcall DCOBJA::DCOBJA(DCOBJA *this, HDC a2)
{
  __int64 v4; // rdx

  XDCOBJ::XDCOBJ(this);
  UnexpectedThreadTerminationHandler<DCOBJA>::UnexpectedThreadTerminationHandler<DCOBJA>((char *)this + 40);
  LOBYTE(v4) = 1;
  *(_QWORD *)this = HmgShareLockEx(a2, v4, 0LL);
  return this;
}
