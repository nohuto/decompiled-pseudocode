/*
 * XREFs of ExpAllocateOwnerEntryForLegacyShim @ 0x1402B26BC
 * Callers:
 *     ExEnterPriorityRegionAndAcquireResourceShared @ 0x1402B39B0 (ExEnterPriorityRegionAndAcquireResourceShared.c)
 *     ExEnterCriticalRegionAndAcquireResourceShared @ 0x1402B3B20 (ExEnterCriticalRegionAndAcquireResourceShared.c)
 *     SeSecurityAttributePresent @ 0x1402B4AC0 (SeSecurityAttributePresent.c)
 *     SepMandatoryIntegrityCheck @ 0x1402B5410 (SepMandatoryIntegrityCheck.c)
 *     ExpFastResourceLegacyConvertExclusiveToShared @ 0x1404319B8 (ExpFastResourceLegacyConvertExclusiveToShared.c)
 *     ExpFastResourceLegacyAcquireSharedStarveExclusive @ 0x1404563A4 (ExpFastResourceLegacyAcquireSharedStarveExclusive.c)
 *     ExpFastResourceLegacyAcquireShared @ 0x1404B8FEC (ExpFastResourceLegacyAcquireShared.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
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
