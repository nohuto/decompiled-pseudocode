/*
 * XREFs of RtlpRtlpCtWaitForWnfQuiescentWorker @ 0x180149660
 * Callers:
 *     <none>
 * Callees:
 *     RtlpCtContextFree @ 0x1801494FC (RtlpCtContextFree.c)
 *     NtWaitForSingleObject @ 0x18015EEC0 (NtWaitForSingleObject.c)
 */

void __fastcall RtlpRtlpCtWaitForWnfQuiescentWorker(PTP_CALLBACK_INSTANCE a1, HANDLE *a2, PTP_WORK a3)
{
  NtWaitForSingleObject(a2[2], 0, 0LL);
  RtlpCtContextFree((PTP_WORK *)a2);
  _InterlockedExchange(&RtlpCtPublishInProgress, 0);
}
