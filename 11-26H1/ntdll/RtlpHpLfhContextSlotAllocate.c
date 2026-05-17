/*
 * XREFs of RtlpHpLfhContextSlotAllocate @ 0x180092EAC
 * Callers:
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x180092C30 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpLfhPrivateSlotCreate @ 0x180097438 (RtlpHpLfhPrivateSlotCreate.c)
 * Callees:
 *     RtlpHpLfhContextMetadataAllocate @ 0x1800932F8 (RtlpHpLfhContextMetadataAllocate.c)
 *     RtlpHpLfhContextSlotStandbyProcess @ 0x1800944D0 (RtlpHpLfhContextSlotStandbyProcess.c)
 *     RtlpHpLfhSlotInitialize @ 0x1800BF428 (RtlpHpLfhSlotInitialize.c)
 */

__int64 __fastcall RtlpHpLfhContextSlotAllocate(__int64 a1, __int64 a2)
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
