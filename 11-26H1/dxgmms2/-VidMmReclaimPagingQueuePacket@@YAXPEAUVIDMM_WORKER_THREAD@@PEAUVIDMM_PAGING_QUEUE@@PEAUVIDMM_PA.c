/*
 * XREFs of ?VidMmReclaimPagingQueuePacket@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@@Z @ 0x1400FEC44
 * Callers:
 *     ExecutePagingCommand @ 0x1400B8780 (ExecutePagingCommand.c)
 *     VidMmFlushEvictQueue @ 0x1400FEA50 (VidMmFlushEvictQueue.c)
 *     VidMmWorkerThreadProc @ 0x140128480 (VidMmWorkerThreadProc.c)
 * Callees:
 *     Feature_PeriodicTrimImprovements__private_IsEnabledDeviceUsageNoInline @ 0x14003B500 (Feature_PeriodicTrimImprovements__private_IsEnabledDeviceUsageNoInline.c)
 *     ?VidMmIncrementPeriodicTrimUniqueness@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PROCESS_ADAPTER_INFO@@@Z @ 0x14004E9A4 (-VidMmIncrementPeriodicTrimUniqueness@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PROCESS_ADAPTER_INF.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VidMmReclaimPagingQueuePacket(
        struct VIDMM_WORKER_THREAD *a1,
        struct VIDMM_PAGING_QUEUE *a2,
        struct VIDMM_PAGING_QUEUE_PACKET *a3)
{
  char *v4; // rbp
  struct VIDMM_PAGING_QUEUE **v7; // rcx
  __int64 v8; // rcx
  _QWORD *v9; // rax
  struct VIDMM_PAGING_QUEUE *v10; // rax
  struct VIDMM_PAGING_QUEUE **v11; // rcx
  __int64 v12; // rax

  v4 = (char *)a1 + 184;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v4, 0LL);
  *((_QWORD *)v4 + 1) = KeGetCurrentThread();
  v7 = (struct VIDMM_PAGING_QUEUE **)*((_QWORD *)a2 + 3);
  if ( *v7 != (struct VIDMM_PAGING_QUEUE *)((char *)a2 + 16) )
LABEL_2:
    __fastfail(3u);
  *(_QWORD *)a3 = (char *)a2 + 16;
  *((_QWORD *)a3 + 1) = v7;
  *v7 = a3;
  *((_QWORD *)a2 + 3) = a3;
  if ( *((struct VIDMM_PAGING_QUEUE **)a2 + 4) != (struct VIDMM_PAGING_QUEUE *)((char *)a2 + 32)
    || (v8 = *((int *)a2 + 26), !(_DWORD)v8) )
  {
LABEL_12:
    --*(_DWORD *)(*((_QWORD *)a2 + 12) + 64LL);
    v12 = *(_QWORD *)a1;
    --*((_DWORD *)a1 + 52);
    if ( (*(_BYTE *)(v12 + 41065) & 0x10) == 0 )
      goto LABEL_13;
    goto LABEL_17;
  }
  if ( (_DWORD)v8 == 1 )
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      v9 = (_QWORD *)WdLogNewEntry5_WdTrace(v8);
      v9[3] = a2;
      v9[4] = *((int *)a2 + 26);
      v9[5] = 0LL;
      WdLogGlobalForLineNumber = 703;
    }
    *((_DWORD *)a2 + 26) = 0;
    if ( (*(_BYTE *)(*(_QWORD *)a1 + 41065LL) & 0x10) == 0 )
    {
      v10 = *(struct VIDMM_PAGING_QUEUE **)a2;
      if ( *(struct VIDMM_PAGING_QUEUE **)(*(_QWORD *)a2 + 8LL) != a2 )
        goto LABEL_2;
      v11 = (struct VIDMM_PAGING_QUEUE **)*((_QWORD *)a2 + 1);
      if ( *v11 != a2 )
        goto LABEL_2;
      *v11 = v10;
      *((_QWORD *)v10 + 1) = v11;
      *(_QWORD *)a2 = 0LL;
      *((_QWORD *)a2 + 1) = 0LL;
      KeSetEvent(*((PRKEVENT *)a2 + 10), 0, 0);
    }
    goto LABEL_12;
  }
  g_DxgMmsBugcheckExportIndex = 1;
  WdLogSingleEntry5(0LL, 270LL, 58LL, a2, v8, 0LL);
  WdLogGlobalForLineNumber = 213;
LABEL_17:
  _InterlockedDecrement((volatile signed __int32 *)a2 + 48);
LABEL_13:
  *((_QWORD *)v4 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v4, 0LL);
  KeLeaveCriticalRegion();
  if ( (unsigned int)Feature_PeriodicTrimImprovements__private_IsEnabledDeviceUsageNoInline() )
    VidMmIncrementPeriodicTrimUniqueness(
      (PRKEVENT *)a1,
      *(struct VIDMM_PROCESS_ADAPTER_INFO **)(*((_QWORD *)a2 + 12) + 16LL));
}
