/*
 * XREFs of NvmeControllerDeleteErrorRecoveryContext @ 0x1400F291C
 * Callers:
 *     NvmeAdapterDeleteNvmeController @ 0x1400E74A8 (NvmeAdapterDeleteNvmeController.c)
 *     NvmeAdapterCreateNvmeController @ 0x1401A0988 (NvmeAdapterCreateNvmeController.c)
 * Callees:
 *     NvmeControllerTerminateCommandTimeoutDetectThread @ 0x1400FB6CC (NvmeControllerTerminateCommandTimeoutDetectThread.c)
 */

void __fastcall NvmeControllerDeleteErrorRecoveryContext(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 1288);
  if ( v2 )
  {
    KeCancelTimer((PKTIMER)(*(_QWORD *)(v2 + 40) + 128LL));
    NvmeControllerTerminateCommandTimeoutDetectThread(a1);
    ExFreePoolWithTag(*(PVOID *)(a1 + 1288), 0x52436152u);
    *(_QWORD *)(a1 + 1288) = 0LL;
  }
}
