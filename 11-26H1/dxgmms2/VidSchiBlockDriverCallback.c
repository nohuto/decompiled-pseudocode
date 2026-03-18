/*
 * XREFs of VidSchiBlockDriverCallback @ 0x140099458
 * Callers:
 *     VidSchiReportHwHang @ 0x140048588 (VidSchiReportHwHang.c)
 *     VidSchQueryDmaData @ 0x14009936C (VidSchQueryDmaData.c)
 *     VidSchFlushAdapter @ 0x1400C1D50 (VidSchFlushAdapter.c)
 *     VidSchPrepareForRecovery @ 0x1400C4470 (VidSchPrepareForRecovery.c)
 *     VidSchQueryDmaHeader @ 0x1400C449C (VidSchQueryDmaHeader.c)
 *     VidSchTerminateAdapter @ 0x1400C57F0 (VidSchTerminateAdapter.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiBlockDriverCallback(__int64 a1)
{
  __int64 v1; // r9
  char v3; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(unsigned int *)(a1 + 40);
  v3 = 0;
  DpSynchronizeExecution(*(_QWORD *)(a1 + 32), VidSchiBlockInterruptCallbackAtISR, a1, v1, &v3);
  KeFlushQueuedDpcs();
  DpiSetSchedulerCallbackState(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 216LL), 0LL);
  KeFlushQueuedDpcs();
}
