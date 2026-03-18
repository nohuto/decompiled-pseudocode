/*
 * XREFs of ?VidMmSuspendPagingQueue@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@@Z @ 0x140102380
 * Callers:
 *     ?SuspendPagingQueues@VIDMM_DEVICE@@QEAAXXZ @ 0x1401022D0 (-SuspendPagingQueues@VIDMM_DEVICE@@QEAAXXZ.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z @ 0x140031E00 (--0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ @ 0x140035970 (-Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ.c)
 *     ?VidMmDequeueTask@@YAXPEAUVIDMM_WORKER_THREAD2@@PEAUVIDMM_TASK@@@Z @ 0x1400B895C (-VidMmDequeueTask@@YAXPEAUVIDMM_WORKER_THREAD2@@PEAUVIDMM_TASK@@@Z.c)
 */

void __fastcall VidMmSuspendPagingQueue(struct VIDMM_WORKER_THREAD *a1, struct VIDMM_PAGING_QUEUE *a2)
{
  char *v3; // rsi
  __int64 v5; // rcx
  _QWORD *v6; // rax
  _DWORD *v7; // rdx
  struct VIDMM_WORKER_THREAD **v8; // rcx
  __int64 v9; // r8
  struct VIDMM_PAGING_QUEUE *v10; // rax
  struct VIDMM_PAGING_QUEUE **v11; // rcx
  _BYTE v12[24]; // [rsp+20h] [rbp-18h] BYREF

  v3 = (char *)a1 + 184;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v3, 0LL);
  *((_QWORD *)v3 + 1) = KeGetCurrentThread();
  if ( (*(_BYTE *)(*(_QWORD *)a1 + 41065LL) & 0x10) != 0 && *((_DWORD *)a2 + 26) == 1 )
  {
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::DXGAUTOPUSHLOCKFASTEXCLUSIVE(
      (DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v12,
      (struct VIDMM_WORKER_THREAD *)((char *)a1 + 5344),
      1);
    VidMmDequeueTask(a1, (struct VIDMM_PAGING_QUEUE *)((char *)a2 + 120), v9);
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v12);
  }
  if ( g_IsInternalReleaseOrDbg )
  {
    v6 = (_QWORD *)WdLogNewEntry5_WdTrace(v5);
    v7 = (_DWORD *)((char *)a2 + 104);
    v6[3] = a2;
    v6[4] = *((int *)a2 + 26);
    v6[5] = 2LL;
    WdLogGlobalForLineNumber = 703;
  }
  else
  {
    v7 = (_DWORD *)((char *)a2 + 104);
  }
  if ( (*(_BYTE *)(*(_QWORD *)a1 + 41065LL) & 0x10) == 0 )
  {
    if ( *v7 == 1 )
    {
      v10 = *(struct VIDMM_PAGING_QUEUE **)a2;
      if ( *(struct VIDMM_PAGING_QUEUE **)(*(_QWORD *)a2 + 8LL) != a2
        || (v11 = (struct VIDMM_PAGING_QUEUE **)*((_QWORD *)a2 + 1), *v11 != a2) )
      {
LABEL_7:
        __fastfail(3u);
      }
      *v11 = v10;
      v7 = (_DWORD *)((char *)a2 + 104);
      *((_QWORD *)v10 + 1) = v11;
      *(_QWORD *)a2 = 0LL;
      *((_QWORD *)a2 + 1) = 0LL;
    }
    v8 = (struct VIDMM_WORKER_THREAD **)*((_QWORD *)a1 + 11);
    if ( *v8 != (struct VIDMM_WORKER_THREAD *)((char *)a1 + 80) )
      goto LABEL_7;
    *(_QWORD *)a2 = (char *)a1 + 80;
    *((_QWORD *)a2 + 1) = v8;
    *v8 = a2;
    *((_QWORD *)a1 + 11) = a2;
  }
  *v7 = 2;
  *((_QWORD *)v3 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v3, 0LL);
  KeLeaveCriticalRegion();
}
