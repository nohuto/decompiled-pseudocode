/*
 * XREFs of BgSetFrameBufferAccess @ 0x140C4F4C8
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x1404633C0 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkSetVirtualFrameBuffer @ 0x1405C5690 (BgkSetVirtualFrameBuffer.c)
 * Callees:
 *     <none>
 */

void __fastcall BgSetFrameBufferAccess(struct _LIST_ENTRY *a1, struct _LIST_ENTRY *a2, struct _LIST_ENTRY *a3)
{
  gLoadedDiffHivesLock.SuspendEvent.Header.WaitListHead.Blink = a1;
  gLoadedDiffHivesLock.ThreadListEntry.Blink = a2;
  gLoadedDiffHivesLock.MutantListHead.Flink = a3;
}
