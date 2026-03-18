/*
 * XREFs of BgpGetResolution @ 0x140514D98
 * Callers:
 *     LogFwReport @ 0x140C4F030 (LogFwReport.c)
 *     BgpConsoleInitialize @ 0x140C50420 (BgpConsoleInitialize.c)
 *     BgpTxtCreateRegion @ 0x140C51CF0 (BgpTxtCreateRegion.c)
 *     GxpReadFrameBufferPixels @ 0x140C536CC (GxpReadFrameBufferPixels.c)
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
