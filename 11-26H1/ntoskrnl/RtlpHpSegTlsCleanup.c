/*
 * XREFs of RtlpHpSegTlsCleanup @ 0x14063C610
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpLfhContextTlsCleanup @ 0x14063C9A0 (RtlpHpLfhContextTlsCleanup.c)
 */

__int64 __fastcall RtlpHpSegTlsCleanup(__int64 a1)
{
  return RtlpHpLfhContextTlsCleanup(*(_QWORD *)(a1 + 24));
}
