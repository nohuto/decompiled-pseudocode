/*
 * XREFs of CcReapPrivateVolumeCachemap @ 0x14038BB90
 * Callers:
 *     CcReapPrivateVolumeCachemapWorkerThread @ 0x14038BCD0 (CcReapPrivateVolumeCachemapWorkerThread.c)
 * Callees:
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     CcIsDirtyCachemapListEmptyForVolume @ 0x14038BAA4 (CcIsDirtyCachemapListEmptyForVolume.c)
 *     DbgPrintEx @ 0x1403992B0 (DbgPrintEx.c)
 *     CcPostDeferredWrites @ 0x14039D37C (CcPostDeferredWrites.c)
 *     CcDeletePrivateVolumeCacheMap @ 0x1403E7080 (CcDeletePrivateVolumeCacheMap.c)
 *     CcDeleteSectionsForPartition @ 0x1405B4C80 (CcDeleteSectionsForPartition.c)
 */

__int64 __fastcall CcReapPrivateVolumeCachemap(struct _KEVENT *P)
{
  struct _LIST_ENTRY *Flink; // rsi

  DbgPrintEx(
    0x7Fu,
    2u,
    "[%04x:%04x]CcReapPrivateVolumeCachemap: Delete Processing PVCM, VCM:%p(vid:%2lx), PVCM:%p(vid:%2lx)\n",
    LODWORD(KeGetCurrentThread()[1].CycleTime),
    KeGetCurrentThread()[1].CurrentRunTime,
    P[1].Header.WaitListHead.Blink,
    HIDWORD(P[1].Header.WaitListHead.Blink[13].Flink),
    P,
    P[1].Header.LockNV);
  Flink = P[1].Header.WaitListHead.Flink;
  if ( BYTE5(P[48].Header.WaitListHead.Blink) && BYTE4(P[51].Header.WaitListHead.Flink) )
    KeSetEvent(P + 35, 0, 0);
  while ( P[25].Header.WaitListHead.Flink != &P[25].Header.WaitListHead
       || !CcIsDirtyCachemapListEmptyForVolume((__int64)P) )
  {
    CcDeleteSectionsForPartition(&P[26].Header.WaitListHead.Blink, Flink);
    CcDeleteSectionsForPartition(&P[25].Header.WaitListHead, Flink);
  }
  CcPostDeferredWrites(Flink, P);
  DbgPrintEx(
    0x7Fu,
    2u,
    "[%04x:%04x]CcReapPrivateVolumeCachemap: PVCM:%p(vid:%2lx) - All lists processed, deleting PVCM\n",
    LODWORD(KeGetCurrentThread()[1].CycleTime),
    KeGetCurrentThread()[1].CurrentRunTime,
    P,
    P[1].Header.LockNV);
  return CcDeletePrivateVolumeCacheMap(P);
}
