/*
 * XREFs of BgpGetBitsPerPixel @ 0x1404C009C
 * Callers:
 *     BgpTxtDisplayCharacter @ 0x1404AD084 (BgpTxtDisplayCharacter.c)
 *     BgpGxDrawRectangle @ 0x1404BFC2C (BgpGxDrawRectangle.c)
 *     GxpWriteFrameBufferPixels @ 0x1404BFCF0 (GxpWriteFrameBufferPixels.c)
 *     BgpClearScreen @ 0x140715B44 (BgpClearScreen.c)
 *     BgpGxProcessQrCodeBitmap @ 0x1407162FC (BgpGxProcessQrCodeBitmap.c)
 *     BgpFwDisplayBugCheckScreen @ 0x1407180B4 (BgpFwDisplayBugCheckScreen.c)
 *     LogFwReport @ 0x140C4F030 (LogFwReport.c)
 *     AnFwConfigureProgressResources @ 0x140C510AC (AnFwConfigureProgressResources.c)
 *     AnFwpFadeAnimationTimer @ 0x140C52350 (AnFwpFadeAnimationTimer.c)
 *     AnFwDisplayFade @ 0x140C52BA0 (AnFwDisplayFade.c)
 *     BgpGxReadRectangle @ 0x140C53390 (BgpGxReadRectangle.c)
 *     GxpReadFrameBufferPixels @ 0x140C536CC (GxpReadFrameBufferPixels.c)
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
