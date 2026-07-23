/*
 * XREFs of RtlpHpSegVsAllocate @ 0x1404D8F90
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpSegSubAllocate @ 0x1404D8FC4 (RtlpHpSegSubAllocate.c)
 */

__int64 __fastcall RtlpHpSegVsAllocate(int a1, unsigned int a2, int a3, __int64 a4)
{
  return RtlpHpSegSubAllocate(a1, a2, a2 < 0x10000 ? 100663296 : 100663300, a3, a4);
}
