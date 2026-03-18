/*
 * XREFs of BgGetDisplayContext @ 0x140C4FA38
 * Callers:
 *     BgkSetVirtualFrameBuffer @ 0x1405C5690 (BgkSetVirtualFrameBuffer.c)
 *     Phase1InitializationDiscard @ 0x140CABD00 (Phase1InitializationDiscard.c)
 * Callees:
 *     <none>
 */

_LIST_ENTRY *BgGetDisplayContext()
{
  return &gLoadedDiffHivesLock.Timer.TimerListEntry;
}
