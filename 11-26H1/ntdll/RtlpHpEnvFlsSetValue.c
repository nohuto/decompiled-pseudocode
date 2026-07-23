/*
 * XREFs of RtlpHpEnvFlsSetValue @ 0x180072798
 * Callers:
 *     RtlpHpEnvTlsSetValue @ 0x1800723C0 (RtlpHpEnvTlsSetValue.c)
 * Callees:
 *     <none>
 */

__int64 RtlpHpEnvFlsSetValue()
{
  return RtlpFlsSetValue(&RtlpHpEnvFlsContext);
}
