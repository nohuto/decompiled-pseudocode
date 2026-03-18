/*
 * XREFs of ?Suspend@VIDMM_DEVICE@@QEAAX_N0@Z @ 0x140100468
 * Callers:
 *     VidMmSuspendDevices @ 0x14010107C (VidMmSuspendDevices.c)
 *     ?SuspendAllDevices@VIDMM_PROCESS_ADAPTER_INFO@@QEAA_N_N@Z @ 0x140102574 (-SuspendAllDevices@VIDMM_PROCESS_ADAPTER_INFO@@QEAA_N_N@Z.c)
 *     VidMmWorkerThreadProc @ 0x140128480 (VidMmWorkerThreadProc.c)
 * Callees:
 *     ?PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1401016B4 (-PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ.c)
 *     ?FullySuspend@VIDMM_DEVICE@@IEAAX_N@Z @ 0x140101E78 (-FullySuspend@VIDMM_DEVICE@@IEAAX_N@Z.c)
 */

void __fastcall VIDMM_DEVICE::Suspend(VIDMM_DEVICE *this, char a2, bool a3)
{
  if ( a2 )
    VIDMM_DEVICE::FullySuspend(this, a3);
  else
    VIDMM_DEVICE::PartiallySuspend(this);
}
