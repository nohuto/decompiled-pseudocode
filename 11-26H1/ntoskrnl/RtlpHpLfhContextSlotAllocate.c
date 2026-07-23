/*
 * XREFs of RtlpHpLfhContextSlotAllocate @ 0x140348DE8
 * Callers:
 *     RtlpHpLfhPrivateSlotCreate @ 0x140513284 (RtlpHpLfhPrivateSlotCreate.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x140519218 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 * Callees:
 *     RtlpHpLfhSlotInitialize @ 0x1403484B0 (RtlpHpLfhSlotInitialize.c)
 *     RtlpHpLfhContextMetadataAllocate @ 0x140348E44 (RtlpHpLfhContextMetadataAllocate.c)
 *     RtlpHpLfhContextSlotStandbyProcess @ 0x140349DA0 (RtlpHpLfhContextSlotStandbyProcess.c)
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
