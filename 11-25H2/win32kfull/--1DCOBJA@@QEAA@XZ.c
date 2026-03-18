/*
 * XREFs of ??1DCOBJA@@QEAA@XZ @ 0x14009A8C8
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
 *     GreCancelDC @ 0x140332B90 (GreCancelDC.c)
 *     GreConvertRedirectionToMemDC @ 0x140333098 (GreConvertRedirectionToMemDC.c)
 * Callees:
 *     ?vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x14016EDB0 (-vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 */

void __fastcall DCOBJA::~DCOBJA(DCOBJA *this)
{
  XDCOBJ::vAltUnlockNoNullSet(this);
  PopThreadGuardedObject((char *)this + 40);
}
