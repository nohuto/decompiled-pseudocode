/*
 * XREFs of RtlpHpLfhContextSlotAllocate @ 0x140346D68
 * Callers:
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x14035402C (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpLfhPrivateSlotCreate @ 0x140519814 (RtlpHpLfhPrivateSlotCreate.c)
 * Callees:
 *     RtlpHpLfhSlotInitialize @ 0x140346430 (RtlpHpLfhSlotInitialize.c)
 *     RtlpHpLfhContextMetadataAllocate @ 0x140346DC4 (RtlpHpLfhContextMetadataAllocate.c)
 *     RtlpHpLfhContextSlotStandbyProcess @ 0x140347D20 (RtlpHpLfhContextSlotStandbyProcess.c)
 */

__int64 __fastcall RtlpHpLfhContextSlotAllocate(__int64 a1, unsigned __int8 *a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx

  RtlpHpLfhContextSlotStandbyProcess(a1, 0LL);
  v4 = RtlpHpLfhContextMetadataAllocate(a1, 2LL);
  v5 = v4;
  if ( v4 )
    RtlpHpLfhSlotInitialize(v4, a2, a1);
  return v5;
}
