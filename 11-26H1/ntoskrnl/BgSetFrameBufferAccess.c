/*
 * XREFs of BgSetFrameBufferAccess @ 0x140C554C8
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14045C380 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkSetVirtualFrameBuffer @ 0x1405C7F00 (BgkSetVirtualFrameBuffer.c)
 * Callees:
 *     <none>
 */

void __fastcall BgSetFrameBufferAccess(struct _LIST_ENTRY *a1, struct _LIST_ENTRY *a2, struct _LIST_ENTRY *a3)
{
  gLoadedDiffHivesLock.SuspendEvent.Header.WaitListHead.Blink = a1;
  gLoadedDiffHivesLock.ThreadListEntry.Blink = a2;
  gLoadedDiffHivesLock.MutantListHead.Flink = a3;
}
