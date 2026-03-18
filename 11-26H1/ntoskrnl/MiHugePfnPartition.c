/*
 * XREFs of MiHugePfnPartition @ 0x14048E180
 * Callers:
 *     MiReplenishPageSlist @ 0x14028A710 (MiReplenishPageSlist.c)
 *     MiPageFreeToZero @ 0x14028C220 (MiPageFreeToZero.c)
 *     MiBeginPageAccessor @ 0x1403C4E34 (MiBeginPageAccessor.c)
 *     MiHugeRangeFreeToZero @ 0x14048DD70 (MiHugeRangeFreeToZero.c)
 *     MiStopPageAccessor @ 0x14048E008 (MiStopPageAccessor.c)
 *     MiInsertHugeRangeInList @ 0x14048E66C (MiInsertHugeRangeInList.c)
 *     MiSimpleUnlinkHugeRange @ 0x14048E8E0 (MiSimpleUnlinkHugeRange.c)
 *     MiCanBeginHugeIoPageAccessor @ 0x14052EEFC (MiCanBeginHugeIoPageAccessor.c)
 *     MiComputeHugeRangeColorHeadAtDpc @ 0x140532364 (MiComputeHugeRangeColorHeadAtDpc.c)
 *     MiDereferenceIoHugeRange @ 0x1406EB388 (MiDereferenceIoHugeRange.c)
 *     MiHotRemoveHugeRange @ 0x1406EBF04 (MiHotRemoveHugeRange.c)
 *     MiMakeEntireHugePfnGood @ 0x1406EC6B8 (MiMakeEntireHugePfnGood.c)
 *     MiMarkHugePfnBad @ 0x1406EC7AC (MiMarkHugePfnBad.c)
 *     MiMarkHugePfnGood @ 0x1406ECDE4 (MiMarkHugePfnGood.c)
 *     MiMoveHibernateHugeRangesFreeToZeroCallback @ 0x1406ED210 (MiMoveHibernateHugeRangesFreeToZeroCallback.c)
 *     MiReleaseMemoryRuns @ 0x1406ED4A8 (MiReleaseMemoryRuns.c)
 *     MiUpdateHugeRangeZeroFreeBitmap @ 0x1406EDE8C (MiUpdateHugeRangeZeroFreeBitmap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiHugePfnPartition(_QWORD *a1)
{
  if ( ((*a1 >> 4) & 0x7FF) == 0x401 )
    return 0LL;
  else
    return *(_QWORD *)(stru_140E2EB88.ThreadLock + 8 * ((*a1 >> 4) & 0x7FFLL));
}
