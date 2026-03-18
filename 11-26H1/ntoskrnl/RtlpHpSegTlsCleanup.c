/*
 * XREFs of RtlpHpSegTlsCleanup @ 0x140639600
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpLfhContextTlsCleanup @ 0x140639990 (RtlpHpLfhContextTlsCleanup.c)
 */

__int64 __fastcall RtlpHpSegTlsCleanup(__int64 a1)
{
  return RtlpHpLfhContextTlsCleanup(*(_QWORD *)(a1 + 24));
}
