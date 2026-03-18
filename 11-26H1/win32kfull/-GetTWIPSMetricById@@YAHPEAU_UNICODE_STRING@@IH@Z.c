/*
 * XREFs of ?GetTWIPSMetricById@@YAHPEAU_UNICODE_STRING@@IH@Z @ 0x1400CE604
 * Callers:
 *     xxxSetWindowNCMetrics @ 0x1400CDEC0 (xxxSetWindowNCMetrics.c)
 *     SetIconMetrics @ 0x1400CE144 (SetIconMetrics.c)
 *     SetMinMetrics @ 0x1400CE450 (SetMinMetrics.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetTWIPSMetricById(struct _UNICODE_STRING *a1, unsigned int a2)
{
  FastGetProfileIntFromID(a1, 23LL, a2);
  return 0LL;
}
