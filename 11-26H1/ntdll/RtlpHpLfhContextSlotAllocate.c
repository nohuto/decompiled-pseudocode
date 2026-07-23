/*
 * XREFs of RtlpHpLfhContextSlotAllocate @ 0x180072140
 * Callers:
 *     RtlpHpLfhPrivateSlotCreate @ 0x18010B444 (RtlpHpLfhPrivateSlotCreate.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x180117744 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 * Callees:
 *     RtlpHpLfhSlotInitialize @ 0x180071FD8 (RtlpHpLfhSlotInitialize.c)
 *     RtlpHpLfhContextMetadataAllocate @ 0x18007225C (RtlpHpLfhContextMetadataAllocate.c)
 *     RtlpHpLfhContextSlotStandbyProcess @ 0x1800736A0 (RtlpHpLfhContextSlotStandbyProcess.c)
 */

_BYTE *__fastcall RtlpHpLfhContextSlotAllocate(__int64 a1, _BYTE *a2)
{
  _BYTE *v4; // rax
  _BYTE *v5; // rbx

  RtlpHpLfhContextSlotStandbyProcess(a1, 0LL);
  v4 = (_BYTE *)RtlpHpLfhContextMetadataAllocate(a1, 2LL);
  v5 = v4;
  if ( v4 )
    RtlpHpLfhSlotInitialize(v4, a2, a1);
  return v5;
}
