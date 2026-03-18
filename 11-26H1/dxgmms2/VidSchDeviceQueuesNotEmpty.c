/*
 * XREFs of VidSchDeviceQueuesNotEmpty @ 0x140042B5C
 * Callers:
 *     ?Execute@VIDMM_TASK_PENALTY_BOX@@UEAAJPEAUVIDMM_WORKER_THREAD2@@PEAUVIDMM_TASK_CONTEXT@@@Z @ 0x1400B84D0 (-Execute@VIDMM_TASK_PENALTY_BOX@@UEAAJPEAUVIDMM_WORKER_THREAD2@@PEAUVIDMM_TASK_CONTEXT@@@Z.c)
 *     ?FullySuspend@VIDMM_DEVICE@@IEAAX_N@Z @ 0x140101E78 (-FullySuspend@VIDMM_DEVICE@@IEAAX_N@Z.c)
 *     ?IndefinitelySuspend@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1401026D8 (-IndefinitelySuspend@VIDMM_DEVICE@@QEAAX_N@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall VidSchDeviceQueuesNotEmpty(__int64 a1)
{
  char v1; // dl

  v1 = 0;
  if ( !a1 )
    return 0;
  if ( *(_DWORD *)(a1 + 1844) || *(_DWORD *)(a1 + 1840) )
    return 1;
  return v1;
}
