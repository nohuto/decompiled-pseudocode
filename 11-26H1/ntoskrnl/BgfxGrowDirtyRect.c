/*
 * XREFs of BgfxGrowDirtyRect @ 0x14071AE88
 * Callers:
 *     GxpWriteFrameBufferPixels @ 0x1404B9540 (GxpWriteFrameBufferPixels.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 */

void __fastcall BgfxGrowDirtyRect(_DWORD *a1, int *a2, unsigned int a3)
{
  int Flink; // eax
  unsigned int Flink_high; // eax
  unsigned int Blink; // eax
  int v9; // edx
  unsigned int v10; // edx
  unsigned int Blink_high; // eax

  KxAcquireSpinLock((PKSPIN_LOCK)gLoadedDiffHivesLock.MutantListHead.Flink);
  Flink = (int)gLoadedDiffHivesLock.ThreadListEntry.Blink->Flink;
  if ( gLoadedDiffHivesLock.ThreadListEntry.Blink->Flink > (struct _LIST_ENTRY *)(unsigned int)*a2 )
    Flink = *a2;
  LODWORD(gLoadedDiffHivesLock.ThreadListEntry.Blink->Flink) = Flink;
  Flink_high = HIDWORD(gLoadedDiffHivesLock.ThreadListEntry.Blink->Flink);
  if ( Flink_high < *a1 / a3 + *a2 )
    Flink_high = *a1 / a3 + *a2;
  HIDWORD(gLoadedDiffHivesLock.ThreadListEntry.Blink->Flink) = Flink_high;
  Blink = (unsigned int)gLoadedDiffHivesLock.ThreadListEntry.Blink->Blink;
  if ( Blink > a2[1] )
    Blink = a2[1];
  v9 = a1[1];
  LODWORD(gLoadedDiffHivesLock.ThreadListEntry.Blink->Blink) = Blink;
  v10 = a2[1] + v9;
  Blink_high = HIDWORD(gLoadedDiffHivesLock.ThreadListEntry.Blink->Blink);
  if ( Blink_high < v10 )
    Blink_high = v10;
  HIDWORD(gLoadedDiffHivesLock.ThreadListEntry.Blink->Blink) = Blink_high;
  ++LODWORD(gLoadedDiffHivesLock.SuspendEvent.Header.WaitListHead.Blink->Flink);
  KxReleaseSpinLock((PKSPIN_LOCK)gLoadedDiffHivesLock.MutantListHead.Flink);
}
