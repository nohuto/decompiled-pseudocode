/*
 * XREFs of ExpAllocateOwnerEntryForLegacyShim @ 0x1402FD38C
 * Callers:
 *     ExpFastResourceLegacyAcquireSharedStarveExclusive @ 0x14025F9B4 (ExpFastResourceLegacyAcquireSharedStarveExclusive.c)
 *     ExEnterPriorityRegionAndAcquireResourceShared @ 0x1402FE680 (ExEnterPriorityRegionAndAcquireResourceShared.c)
 *     ExEnterCriticalRegionAndAcquireResourceShared @ 0x1402FE7F0 (ExEnterCriticalRegionAndAcquireResourceShared.c)
 *     SeSecurityAttributePresent @ 0x1402FF790 (SeSecurityAttributePresent.c)
 *     SepMandatoryIntegrityCheck @ 0x1403000E0 (SepMandatoryIntegrityCheck.c)
 *     ExpFastResourceLegacyConvertExclusiveToShared @ 0x14041E9E8 (ExpFastResourceLegacyConvertExclusiveToShared.c)
 *     ExpFastResourceLegacyAcquireShared @ 0x1404B281C (ExpFastResourceLegacyAcquireShared.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 ExpAllocateOwnerEntryForLegacyShim()
{
  __int64 result; // rax

  do
    result = ExAllocatePool2(0x40uLL);
  while ( !result );
  *(_OWORD *)result = 0LL;
  *(_OWORD *)(result + 16) = 0LL;
  *(_QWORD *)(result + 32) = 0LL;
  *(_QWORD *)(result + 16) = KeGetCurrentThread();
  *(_BYTE *)(result + 37) |= 1u;
  return result;
}
