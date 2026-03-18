/*
 * XREFs of EtwTraceCompletePowerRequest @ 0x1400E96A4
 * Callers:
 *     xxxUserPowerCalloutWorker @ 0x1400E9120 (xxxUserPowerCalloutWorker.c)
 *     QueuePowerRequest @ 0x1400E9340 (QueuePowerRequest.c)
 *     ?CancelPowerRequest@@YAXPEAUtagPOWERREQUEST@@@Z @ 0x1401AFA40 (-CancelPowerRequest@@YAXPEAUtagPOWERREQUEST@@@Z.c)
 * Callees:
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1400E0D04 (McTemplateK0pq_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall EtwTraceCompletePowerRequest(__int64 a1, int a2, __int64 a3)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    return McTemplateK0pq_EtwWriteTransfer(a1, &CompletedPowerRequest, a3, a1, a2);
  return result;
}
