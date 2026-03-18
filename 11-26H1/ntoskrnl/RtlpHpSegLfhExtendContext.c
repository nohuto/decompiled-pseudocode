/*
 * XREFs of RtlpHpSegLfhExtendContext @ 0x1404DF1B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpHeapExtendContext @ 0x1404DF1CC (RtlpHpHeapExtendContext.c)
 */

__int64 __fastcall RtlpHpSegLfhExtendContext(__int64 a1)
{
  return RtlpHpHeapExtendContext(*(_QWORD *)(a1 + 56));
}
