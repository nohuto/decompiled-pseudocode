/*
 * XREFs of VidMmDestroyPagingQueue_0 @ 0x1400E1E28
 * Callers:
 *     ??1VIDMM_PAGING_QUEUE@@QEAA@XZ @ 0x1400E1E10 (--1VIDMM_PAGING_QUEUE@@QEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1400048C0 (--3@YAXPEAX@Z.c)
 *     ?RemovePagingQueueList@VIDMM_DEVICE@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x14003F4F8 (-RemovePagingQueueList@VIDMM_DEVICE@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?VidMmFlushPagingQueue@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@@Z @ 0x1400E1FE4 (-VidMmFlushPagingQueue@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VidMmDestroyPagingQueue_0(struct VIDMM_PAGING_QUEUE *a1)
{
  struct VIDMM_WORKER_THREAD ***v1; // rax
  struct VIDMM_WORKER_THREAD *v3; // rdi
  char *v4; // rdi
  char *v5; // rcx
  __int64 v6; // rax
  struct VIDMM_PAGING_QUEUE *v7; // rax
  struct VIDMM_PAGING_QUEUE **v8; // rcx

  v1 = (struct VIDMM_WORKER_THREAD ***)*((_QWORD *)a1 + 12);
  v3 = **v1;
  if ( !v3 )
    return;
  if ( *((_QWORD *)a1 + 10) )
    VidMmFlushPagingQueue(**v1, a1);
  if ( *((_QWORD *)a1 + 6) )
    VIDMM_DEVICE::RemovePagingQueueList(*((VIDMM_DEVICE **)a1 + 12), (struct _LIST_ENTRY *)a1 + 3);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)v3 + 184, 0LL);
  *((_QWORD *)v3 + 24) = KeGetCurrentThread();
  if ( *((struct VIDMM_PAGING_QUEUE **)a1 + 4) != (struct VIDMM_PAGING_QUEUE *)((char *)a1 + 32) )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 50LL, a1, 0LL, 0LL);
    WdLogGlobalForLineNumber = 213;
LABEL_19:
    v7 = *(struct VIDMM_PAGING_QUEUE **)a1;
    if ( *(struct VIDMM_PAGING_QUEUE **)(*(_QWORD *)a1 + 8LL) != a1
      || (v8 = (struct VIDMM_PAGING_QUEUE **)*((_QWORD *)a1 + 1), *v8 != a1) )
    {
LABEL_17:
      __fastfail(3u);
    }
    *v8 = v7;
    *((_QWORD *)v7 + 1) = v8;
    *(_QWORD *)a1 = 0LL;
    *((_QWORD *)a1 + 1) = 0LL;
    goto LABEL_10;
  }
  if ( *((_DWORD *)a1 + 26) == 2 )
    goto LABEL_19;
  if ( *(_QWORD *)a1 || *((_QWORD *)a1 + 1) )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 49LL, a1, 0LL, 0LL);
    WdLogGlobalForLineNumber = 213;
    JUMPOUT(0x1400E1FDELL);
  }
LABEL_10:
  *((_QWORD *)v3 + 24) = 0LL;
  ExReleasePushLockExclusiveEx((char *)v3 + 184, 0LL);
  KeLeaveCriticalRegion();
  v4 = (char *)a1 + 16;
  while ( 1 )
  {
    v5 = *(char **)v4;
    if ( *(char **)(*(_QWORD *)v4 + 8LL) != v4 )
      goto LABEL_17;
    v6 = *(_QWORD *)v5;
    if ( *(char **)(*(_QWORD *)v5 + 8LL) != v5 )
      goto LABEL_17;
    *(_QWORD *)v4 = v6;
    *(_QWORD *)(v6 + 8) = v4;
    if ( v5 == v4 )
      break;
    operator delete(v5);
  }
  operator delete(*((void **)a1 + 10));
  *((_QWORD *)a1 + 10) = 0LL;
}
