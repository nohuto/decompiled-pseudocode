/*
 * XREFs of VidSchiAcceptDriverCallback @ 0x1400C4560
 * Callers:
 *     VidSchiWorkerThread @ 0x1400C1BB0 (VidSchiWorkerThread.c)
 *     VidSchRestartAdapter @ 0x1400C3950 (VidSchRestartAdapter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiAcceptDriverCallback(__int64 a1)
{
  return DpiSetSchedulerCallbackState(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 216LL), 3LL);
}
