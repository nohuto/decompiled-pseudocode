/*
 * XREFs of MiHugePfnPartition @ 0x140487CC0
 * Callers:
 *     MiReplenishPageSlist @ 0x140289C70 (MiReplenishPageSlist.c)
 *     MiPageFreeToZero @ 0x14028B780 (MiPageFreeToZero.c)
 *     MiBeginPageAccessor @ 0x1403CED40 (MiBeginPageAccessor.c)
 *     MiHugeRangeFreeToZero @ 0x1404878B0 (MiHugeRangeFreeToZero.c)
 *     MiStopPageAccessor @ 0x140487B48 (MiStopPageAccessor.c)
 *     MiInsertHugeRangeInList @ 0x1404881AC (MiInsertHugeRangeInList.c)
 *     MiSimpleUnlinkHugeRange @ 0x140488420 (MiSimpleUnlinkHugeRange.c)
 *     MiCanBeginHugeIoPageAccessor @ 0x14053141C (MiCanBeginHugeIoPageAccessor.c)
 *     MiComputeHugeRangeColorHeadAtDpc @ 0x140534804 (MiComputeHugeRangeColorHeadAtDpc.c)
 *     MiDereferenceIoHugeRange @ 0x1406F0028 (MiDereferenceIoHugeRange.c)
 *     MiHotRemoveHugeRange @ 0x1406F0BA4 (MiHotRemoveHugeRange.c)
 *     MiMakeEntireHugePfnGood @ 0x1406F1358 (MiMakeEntireHugePfnGood.c)
 *     MiMarkHugePfnBad @ 0x1406F144C (MiMarkHugePfnBad.c)
 *     MiMarkHugePfnGood @ 0x1406F1A84 (MiMarkHugePfnGood.c)
 *     MiMoveHibernateHugeRangesFreeToZeroCallback @ 0x1406F1EB0 (MiMoveHibernateHugeRangesFreeToZeroCallback.c)
 *     MiReleaseMemoryRuns @ 0x1406F2148 (MiReleaseMemoryRuns.c)
 *     MiUpdateHugeRangeZeroFreeBitmap @ 0x1406F2B2C (MiUpdateHugeRangeZeroFreeBitmap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiHugePfnPartition(_QWORD *a1)
{
  if ( ((*a1 >> 4) & 0x7FF) == 0x401 )
    return 0LL;
  else
    return *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*a1 >> 4) & 0x7FFLL));
}
