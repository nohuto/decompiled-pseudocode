/*
 * XREFs of RtlpRtlpCtWaitForWnfQuiescentWorker @ 0x140809290
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     RtlpCtContextFree @ 0x1408090B8 (RtlpCtContextFree.c)
 */

void __fastcall RtlpRtlpCtWaitForWnfQuiescentWorker(PVOID *P)
{
  KeWaitForSingleObject(P[2], Executive, 0, 0, 0LL);
  RtlpCtContextFree(P);
  _InterlockedExchange((volatile __int32 *)&NormalizationListLock.SListFaultAddress, 0);
}
