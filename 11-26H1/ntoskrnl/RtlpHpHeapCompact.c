/*
 * XREFs of RtlpHpHeapCompact @ 0x1403473E4
 * Callers:
 *     ExpHpCompactHeapCallback @ 0x140346EF0 (ExpHpCompactHeapCallback.c)
 * Callees:
 *     RtlpHpSegContextCompact @ 0x14034742C (RtlpHpSegContextCompact.c)
 *     RtlpHpLfhContextCompact @ 0x140347628 (RtlpHpLfhContextCompact.c)
 *     RtlpHpVsContextCompact @ 0x140347BE4 (RtlpHpVsContextCompact.c)
 */

__int64 __fastcall RtlpHpHeapCompact(__int64 a1)
{
  RtlpHpVsContextCompact(a1 + 704);
  RtlpHpLfhContextCompact(a1 + 896);
  RtlpHpSegContextCompact(a1 + 320);
  RtlpHpSegContextCompact(a1 + 512);
  return 0LL;
}
