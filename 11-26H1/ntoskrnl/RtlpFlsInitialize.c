/*
 * XREFs of RtlpFlsInitialize @ 0x140809D1C
 * Callers:
 *     PspTlsInitialize @ 0x140CD90E8 (PspTlsInitialize.c)
 * Callees:
 *     <none>
 */

void RtlpFlsInitialize()
{
  *(_OWORD *)&PspTlsContext.Header.Lock = 0LL;
  *(_OWORD *)&PspTlsContext.QuantumTarget = 0LL;
  PspTlsContext.Header.WaitListHead = 0LL;
  *(_OWORD *)&PspTlsContext.SListFaultAddress = 0LL;
}
