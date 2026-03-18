/*
 * XREFs of SddlpFreeUuidString @ 0x1408186A4
 * Callers:
 *     VmPinMemoryRanges @ 0x14081D290 (VmPinMemoryRanges.c)
 *     VmpUnpinMemoryRanges @ 0x14081DBA8 (VmpUnpinMemoryRanges.c)
 *     VmpUnpinRangeSinglePages @ 0x14081DD5C (VmpUnpinRangeSinglePages.c)
 *     LocalConvertAclToString @ 0x140A607C4 (LocalConvertAclToString.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall SddlpFreeUuidString(void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    ExFreePoolWithTag(v1, 0);
}
