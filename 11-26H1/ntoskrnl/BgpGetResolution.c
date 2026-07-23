/*
 * XREFs of BgpGetResolution @ 0x14050E808
 * Callers:
 *     LogFwReport @ 0x140C55030 (LogFwReport.c)
 *     BgpConsoleInitialize @ 0x140C56420 (BgpConsoleInitialize.c)
 *     BgpTxtCreateRegion @ 0x140C57CF0 (BgpTxtCreateRegion.c)
 *     GxpReadFrameBufferPixels @ 0x140C596CC (GxpReadFrameBufferPixels.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall BgpGetResolution(_DWORD *a1)
{
  *a1 = gLoadedDiffHivesLock.Timer.TimerListEntry.Blink;
  a1[1] = HIDWORD(gLoadedDiffHivesLock.Timer.TimerListEntry.Flink);
  a1[2] = HIDWORD(gLoadedDiffHivesLock.Timer.TimerListEntry.Blink);
  return a1;
}
