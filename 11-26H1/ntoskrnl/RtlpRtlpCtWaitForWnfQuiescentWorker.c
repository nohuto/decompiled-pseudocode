/*
 * XREFs of RtlpRtlpCtWaitForWnfQuiescentWorker @ 0x14080ED20
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     RtlpCtContextFree @ 0x14080EB48 (RtlpCtContextFree.c)
 */

void __fastcall RtlpRtlpCtWaitForWnfQuiescentWorker(PVOID *P)
{
  KeWaitForSingleObject(P[2], Executive, 0, 0, 0LL);
  RtlpCtContextFree(P);
  _InterlockedExchange((volatile __int32 *)&NormalizationListLock.SListFaultAddress, 0);
}
