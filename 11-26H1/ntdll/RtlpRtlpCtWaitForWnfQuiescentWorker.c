/*
 * XREFs of RtlpRtlpCtWaitForWnfQuiescentWorker @ 0x1801497B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpCtContextFree @ 0x18014964C (RtlpCtContextFree.c)
 *     NtWaitForSingleObject @ 0x18015EFC0 (NtWaitForSingleObject.c)
 */

__int64 __fastcall RtlpRtlpCtWaitForWnfQuiescentWorker(__int64 a1, __int64 a2)
{
  _PEB_LDR_DATA *v3; // rdx
  __int64 v4; // r8

  NtWaitForSingleObject(*(HANDLE *)(a2 + 16), 0, 0LL);
  RtlpCtContextFree((__int64 *)a2, v3, v4);
  return (unsigned int)_InterlockedExchange(&RtlpCtPublishInProgress, 0);
}
