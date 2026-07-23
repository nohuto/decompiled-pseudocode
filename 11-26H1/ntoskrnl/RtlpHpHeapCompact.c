/*
 * XREFs of RtlpHpHeapCompact @ 0x140349464
 * Callers:
 *     ExpHpCompactHeapCallback @ 0x140348F70 (ExpHpCompactHeapCallback.c)
 * Callees:
 *     RtlpHpSegContextCompact @ 0x1403494AC (RtlpHpSegContextCompact.c)
 *     RtlpHpLfhContextCompact @ 0x1403496A8 (RtlpHpLfhContextCompact.c)
 *     RtlpHpVsContextCompact @ 0x140349C64 (RtlpHpVsContextCompact.c)
 */

__int64 __fastcall RtlpHpHeapCompact(__int64 a1)
{
  RtlpHpVsContextCompact(a1 + 704);
  RtlpHpLfhContextCompact(a1 + 896);
  RtlpHpSegContextCompact(a1 + 320);
  RtlpHpSegContextCompact(a1 + 512);
  return 0LL;
}
