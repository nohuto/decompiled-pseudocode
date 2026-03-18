/*
 * XREFs of ?VidMmiQuerySystemTime@@YA_JXZ @ 0x140037658
 * Callers:
 *     VidMmSuspendDevice @ 0x14009A77C (VidMmSuspendDevice.c)
 *     ?InitializePeriodicTrimData@@YAXPEAUVIDMM_PERIODIC_TRIM_DATA@@@Z @ 0x14009F5DC (-InitializePeriodicTrimData@@YAXPEAUVIDMM_PERIODIC_TRIM_DATA@@@Z.c)
 *     ?CreatePagingProcessPagingQueues@VIDMM_DEVICE@@QEAAJXZ @ 0x1400A70A8 (-CreatePagingProcessPagingQueues@VIDMM_DEVICE@@QEAAJXZ.c)
 *     ?Init@VIDMM_DEVICE@@QEAAJ_NPEAVVIDMM_PROCESS@@@Z @ 0x1400C9AE0 (-Init@VIDMM_DEVICE@@QEAAJ_NPEAVVIDMM_PROCESS@@@Z.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAUVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1400E53F0 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAUVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1401016B4 (-PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ.c)
 *     ?Resume@VIDMM_DEVICE@@QEAAJ_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1401017C4 (-Resume@VIDMM_DEVICE@@QEAAJ_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?FullySuspend@VIDMM_DEVICE@@IEAAX_N@Z @ 0x140101E78 (-FullySuspend@VIDMM_DEVICE@@IEAAX_N@Z.c)
 *     ?Yield@VIDMM_DEVICE@@QEAAXPEAV1@@Z @ 0x14010216C (-Yield@VIDMM_DEVICE@@QEAAXPEAV1@@Z.c)
 *     ?IsBetterYieldCandidate@VIDMM_DEVICE@@QEAA_NPEAV1@@Z @ 0x14011C300 (-IsBetterYieldCandidate@VIDMM_DEVICE@@QEAA_NPEAV1@@Z.c)
 *     VidMmSetWorkerThreadStatus @ 0x14011CE30 (VidMmSetWorkerThreadStatus.c)
 *     VidMmWorkerThreadProc @ 0x140128480 (VidMmWorkerThreadProc.c)
 *     ?HandlePromotionCandidates@VIDMM_GLOBAL@@QEAAXPEA_N@Z @ 0x14012A214 (-HandlePromotionCandidates@VIDMM_GLOBAL@@QEAAXPEA_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 VidMmiQuerySystemTime(void)
{
  __int64 v0; // rbx

  v0 = MEMORY[0xFFFFF78000000320];
  return v0 * KeQueryTimeIncrement();
}
