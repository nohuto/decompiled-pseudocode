/*
 * XREFs of BgGetDisplayContext @ 0x140C55A38
 * Callers:
 *     BgkSetVirtualFrameBuffer @ 0x1405C7F00 (BgkSetVirtualFrameBuffer.c)
 *     Phase1InitializationDiscard @ 0x140CB1D40 (Phase1InitializationDiscard.c)
 * Callees:
 *     <none>
 */

_LIST_ENTRY *BgGetDisplayContext()
{
  return &gLoadedDiffHivesLock.Timer.TimerListEntry;
}
