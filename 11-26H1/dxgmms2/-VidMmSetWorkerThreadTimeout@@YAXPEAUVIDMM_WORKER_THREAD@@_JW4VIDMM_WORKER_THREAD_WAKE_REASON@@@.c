/*
 * XREFs of ?VidMmSetWorkerThreadTimeout@@YAXPEAUVIDMM_WORKER_THREAD@@_JW4VIDMM_WORKER_THREAD_WAKE_REASON@@@Z @ 0x14010C224
 * Callers:
 *     ?DoUpgrade64KPages@@YAXPEAUVIDMM_WORKER_THREAD@@@Z @ 0x140099884 (-DoUpgrade64KPages@@YAXPEAUVIDMM_WORKER_THREAD@@@Z.c)
 *     HandleTrimWnfInternal @ 0x1400A6470 (HandleTrimWnfInternal.c)
 *     VidMmWorkerThreadProc @ 0x140128480 (VidMmWorkerThreadProc.c)
 *     ?HandlePromotionCandidates@VIDMM_GLOBAL@@QEAAXPEA_N@Z @ 0x14012A214 (-HandlePromotionCandidates@VIDMM_GLOBAL@@QEAAXPEA_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VidMmSetWorkerThreadTimeout(__int64 a1, __int64 a2, char a3)
{
  if ( a2 > *(_QWORD *)(a1 + 128) )
  {
    *(_QWORD *)(a1 + 128) = a2;
    *(_BYTE *)(a1 + 214) = a3;
  }
}
