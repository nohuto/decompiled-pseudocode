/*
 * XREFs of ExIsFastResourceHeldExclusive @ 0x1402FD3E0
 * Callers:
 *     ExpFastResourceLegacyAcquireSharedStarveExclusive @ 0x14025F9B4 (ExpFastResourceLegacyAcquireSharedStarveExclusive.c)
 *     ExEnterPriorityRegionAndAcquireResourceShared @ 0x1402FE680 (ExEnterPriorityRegionAndAcquireResourceShared.c)
 *     ExEnterCriticalRegionAndAcquireResourceShared @ 0x1402FE7F0 (ExEnterCriticalRegionAndAcquireResourceShared.c)
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
 *     SeSecurityAttributePresent @ 0x1402FF790 (SeSecurityAttributePresent.c)
 *     SepMandatoryIntegrityCheck @ 0x1403000E0 (SepMandatoryIntegrityCheck.c)
 *     ExIsResourceAcquiredExclusiveLite @ 0x140445300 (ExIsResourceAcquiredExclusiveLite.c)
 *     ExpFastResourceLegacyAcquireShared @ 0x1404B281C (ExpFastResourceLegacyAcquireShared.c)
 *     DifExIsFastResourceHeldExclusiveWrapper @ 0x1406563A0 (DifExIsFastResourceHeldExclusiveWrapper.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
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
