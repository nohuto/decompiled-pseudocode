/*
 * XREFs of ExIsFastResourceHeldExclusive @ 0x1402B2710
 * Callers:
 *     ExEnterPriorityRegionAndAcquireResourceShared @ 0x1402B39B0 (ExEnterPriorityRegionAndAcquireResourceShared.c)
 *     ExEnterCriticalRegionAndAcquireResourceShared @ 0x1402B3B20 (ExEnterCriticalRegionAndAcquireResourceShared.c)
 *     ExAcquireResourceSharedLite @ 0x1402B3C80 (ExAcquireResourceSharedLite.c)
 *     SeSecurityAttributePresent @ 0x1402B4AC0 (SeSecurityAttributePresent.c)
 *     SepMandatoryIntegrityCheck @ 0x1402B5410 (SepMandatoryIntegrityCheck.c)
 *     ExIsResourceAcquiredExclusiveLite @ 0x14044D1E0 (ExIsResourceAcquiredExclusiveLite.c)
 *     ExpFastResourceLegacyAcquireSharedStarveExclusive @ 0x1404563A4 (ExpFastResourceLegacyAcquireSharedStarveExclusive.c)
 *     ExpFastResourceLegacyAcquireShared @ 0x1404B8FEC (ExpFastResourceLegacyAcquireShared.c)
 *     DifExIsFastResourceHeldExclusiveWrapper @ 0x1406527C0 (DifExIsFastResourceHeldExclusiveWrapper.c)
 * Callees:
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

bool __fastcall ExIsFastResourceHeldExclusive(ULONG_PTR BugCheckParameter2)
{
  unsigned __int8 CurrentIrql; // al

  if ( (*(_BYTE *)(BugCheckParameter2 + 26) & 1) == 0 )
    KeBugCheckEx(0x1C6u, 3uLL, BugCheckParameter2, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 2uLL, 0LL);
  return *(_QWORD *)(BugCheckParameter2 + 80) == (_QWORD)KeGetCurrentThread();
}
