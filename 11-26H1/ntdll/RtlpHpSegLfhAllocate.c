/*
 * XREFs of RtlpHpSegLfhAllocate @ 0x180117AA0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpSegSubAllocate @ 0x180117AE0 (RtlpHpSegSubAllocate.c)
 */

__int64 __fastcall RtlpHpSegLfhAllocate(int a1, unsigned int a2, int a3, __int64 a4)
{
  int v5; // r8d

  v5 = 67108868;
  if ( a2 < 0x10000 )
    v5 = 0x4000000;
  return RtlpHpSegSubAllocate(a1, a2, v5, a3, a4);
}
