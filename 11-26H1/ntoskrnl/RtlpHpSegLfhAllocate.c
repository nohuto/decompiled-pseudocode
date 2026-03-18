/*
 * XREFs of RtlpHpSegLfhAllocate @ 0x1404DF870
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpSegSubAllocate @ 0x1404DF8E4 (RtlpHpSegSubAllocate.c)
 */

__int64 __fastcall RtlpHpSegLfhAllocate(int a1, unsigned int a2, int a3, __int64 a4)
{
  return RtlpHpSegSubAllocate(a1, a2, a2 < 0x10000 ? 0x4000000 : 67108868, a3, a4);
}
