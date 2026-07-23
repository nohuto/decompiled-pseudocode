/*
 * XREFs of RtlpFlsInitialize @ 0x14080F7AC
 * Callers:
 *     PspTlsInitialize @ 0x140CDF468 (PspTlsInitialize.c)
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
