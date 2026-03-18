/*
 * XREFs of VidMmFlushEvictQueue @ 0x1400FEA50
 * Callers:
 *     VidMmFlushDeferredEvictions @ 0x14010065C (VidMmFlushDeferredEvictions.c)
 * Callees:
 *     VidMmSubmitPacket @ 0x1400CF830 (VidMmSubmitPacket.c)
 *     VidMmSelectEvictPacket @ 0x1400FEB68 (VidMmSelectEvictPacket.c)
 *     ?VidMmReclaimPagingQueuePacket@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@@Z @ 0x1400FEC44 (-VidMmReclaimPagingQueuePacket@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_PA.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VidMmFlushEvictQueue(VIDMM_GLOBAL **a1, struct VIDMM_PAGING_QUEUE *a2)
{
  __int64 result; // rax
  __int64 v5; // rbx
  int v6; // eax
  bool v7; // zf
  __int64 v8; // rdx
  VIDMM_GLOBAL *v9; // rcx
  bool v10; // [rsp+50h] [rbp+18h] BYREF
  struct VIDMM_ALLOC *v11; // [rsp+58h] [rbp+20h] BYREF

  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(a1) + 24) = a2;
    WdLogGlobalForLineNumber = 1655;
  }
  while ( 1 )
  {
    result = VidMmSelectEvictPacket(a1, a2);
    v5 = result;
    if ( !result )
      break;
    v10 = 0;
    v11 = 0LL;
    v6 = VidMmSubmitPacket(a1, (__int64)a2, result, 0, &v10, &v11);
    if ( v6 < 0 || v10 )
    {
      if ( *(_BYTE *)(v5 + 24) )
        v7 = *(_QWORD *)(v5 + 72) == 0LL;
      else
        v7 = *(_QWORD *)(v5 + 80) == 0LL;
      v8 = *(int *)(v5 + 48);
      if ( v7 )
      {
        v9 = *a1;
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 76LL, v6, v9, v8);
        WdLogGlobalForLineNumber = 213;
        JUMPOUT(0x1400FEB60LL);
      }
    }
    VidMmReclaimPagingQueuePacket((struct VIDMM_WORKER_THREAD *)a1, a2, (struct VIDMM_PAGING_QUEUE_PACKET *)v5);
  }
  return result;
}
