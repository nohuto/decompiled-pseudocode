/*
 * XREFs of RtlpHpSegPgAllocate @ 0x1801584F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpSegSubAllocate @ 0x180117AE0 (RtlpHpSegSubAllocate.c)
 */

__int64 __fastcall RtlpHpSegPgAllocate(__int64 a1, unsigned int a2, _DWORD *a3, _DWORD *a4)
{
  return RtlpHpSegSubAllocate(a1, a2, 0x8000000, a3, a4);
}
