/*
 * XREFs of RtlpHpEnvTlsSetValue @ 0x140348F00
 * Callers:
 *     RtlpHpLfhSlotAllocateSlow @ 0x1403FBD90 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhPrivateSlotCreate @ 0x140513284 (RtlpHpLfhPrivateSlotCreate.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x140519218 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpLfhThreadDataInitializeSet @ 0x140529D0C (RtlpHpLfhThreadDataInitializeSet.c)
 * Callees:
 *     ExSaDecodeHandle @ 0x14030C290 (ExSaDecodeHandle.c)
 */

__int64 __fastcall RtlpHpEnvTlsSetValue(unsigned int a1)
{
  _QWORD *v1; // rax
  __int64 v2; // r11

  v1 = (_QWORD *)ExSaDecodeHandle(a1);
  *v1 = v2;
  return 0LL;
}
