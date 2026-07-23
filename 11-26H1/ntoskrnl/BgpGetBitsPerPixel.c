/*
 * XREFs of BgpGetBitsPerPixel @ 0x1404B98EC
 * Callers:
 *     BgpTxtDisplayCharacter @ 0x1404A6714 (BgpTxtDisplayCharacter.c)
 *     BgpGxDrawRectangle @ 0x1404B947C (BgpGxDrawRectangle.c)
 *     GxpWriteFrameBufferPixels @ 0x1404B9540 (GxpWriteFrameBufferPixels.c)
 *     BgpClearScreen @ 0x14071A834 (BgpClearScreen.c)
 *     BgpGxProcessQrCodeBitmap @ 0x14071AFEC (BgpGxProcessQrCodeBitmap.c)
 *     BgpFwDisplayBugCheckScreen @ 0x14071CDA4 (BgpFwDisplayBugCheckScreen.c)
 *     LogFwReport @ 0x140C55030 (LogFwReport.c)
 *     AnFwConfigureProgressResources @ 0x140C570AC (AnFwConfigureProgressResources.c)
 *     AnFwpFadeAnimationTimer @ 0x140C58350 (AnFwpFadeAnimationTimer.c)
 *     AnFwDisplayFade @ 0x140C58BA0 (AnFwDisplayFade.c)
 *     BgpGxReadRectangle @ 0x140C59390 (BgpGxReadRectangle.c)
 *     GxpReadFrameBufferPixels @ 0x140C596CC (GxpReadFrameBufferPixels.c)
 * Callees:
 *     <none>
 */

__int64 BgpGetBitsPerPixel()
{
  __int64 result; // rax

  if ( LODWORD(gLoadedDiffHivesLock.Timer.Dpc) == 4 )
    return 24LL;
  result = 1LL;
  if ( LODWORD(gLoadedDiffHivesLock.Timer.Dpc) == 5 )
    return 32LL;
  return result;
}
