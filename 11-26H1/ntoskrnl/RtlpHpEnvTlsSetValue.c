/*
 * XREFs of RtlpHpEnvTlsSetValue @ 0x140346E80
 * Callers:
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x14035402C (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x140402C90 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhPrivateSlotCreate @ 0x140519814 (RtlpHpLfhPrivateSlotCreate.c)
 *     RtlpHpLfhThreadDataInitializeSet @ 0x14052769C (RtlpHpLfhThreadDataInitializeSet.c)
 * Callees:
 *     ExSaDecodeHandle @ 0x1402C15D0 (ExSaDecodeHandle.c)
 */

__int64 __fastcall RtlpHpEnvTlsSetValue(unsigned int a1)
{
  _QWORD *v1; // rax
  __int64 v2; // r11

  v1 = (_QWORD *)ExSaDecodeHandle(a1);
  *v1 = v2;
  return 0LL;
}
