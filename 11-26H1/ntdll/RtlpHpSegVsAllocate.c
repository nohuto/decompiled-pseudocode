/*
 * XREFs of RtlpHpSegVsAllocate @ 0x180117B90
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpSegSubAllocate @ 0x180117AE0 (RtlpHpSegSubAllocate.c)
 */

__int64 __fastcall RtlpHpSegVsAllocate(__int64 a1, unsigned int a2, _DWORD *a3, _DWORD *a4)
{
  return RtlpHpSegSubAllocate(a1, a2, a2 < 0x10000 ? 100663296 : 100663300, a3, a4);
}
