/*
 * XREFs of VidSchIsWorkerThread @ 0x1400360D0
 * Callers:
 *     VidSchFlushAdapter @ 0x1400C1D50 (VidSchFlushAdapter.c)
 *     VidSchTerminateAdapter @ 0x1400C57F0 (VidSchTerminateAdapter.c)
 *     WaitDmaBufferNotBusy @ 0x1400EB03C (WaitDmaBufferNotBusy.c)
 * Callees:
 *     <none>
 */

bool __fastcall VidSchIsWorkerThread(__int64 a1)
{
  return KeGetCurrentThread() == *(struct _KTHREAD **)(a1 + 184);
}
