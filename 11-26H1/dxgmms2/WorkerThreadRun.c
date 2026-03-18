/*
 * XREFs of WorkerThreadRun @ 0x1400B91B4
 * Callers:
 *     ?VidMmWorkerThreadProc2@@YAXPEAX@Z @ 0x1400B9110 (-VidMmWorkerThreadProc2@@YAXPEAX@Z.c)
 * Callees:
 *     McTemplateK0pp_EtwWriteTransfer @ 0x14001BA24 (McTemplateK0pp_EtwWriteTransfer.c)
 *     ??0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z @ 0x140031E00 (--0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ @ 0x140035970 (-Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     DeselectTask @ 0x1400B8CE8 (DeselectTask.c)
 *     QueryCurrentTimePrecise @ 0x1400B8E34 (QueryCurrentTimePrecise.c)
 *     QueryPendingTerminations @ 0x1400B8E64 (QueryPendingTerminations.c)
 *     SelectTask @ 0x1400B8F2C (SelectTask.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall WorkerThreadRun(struct VIDMM_WORKER_THREAD2 *a1)
{
  __int64 v2; // rbx
  struct _KEVENT *v3; // rcx
  struct VIDMM_TASK *v4; // rsi
  int v5; // ebx
  __int64 v6; // r8
  __int64 v7; // [rsp+30h] [rbp-30h] BYREF
  char v8; // [rsp+38h] [rbp-28h]
  __int128 v9; // [rsp+40h] [rbp-20h] BYREF
  __int64 v10; // [rsp+50h] [rbp-10h]
  struct VIDMM_TASK *v11; // [rsp+70h] [rbp+10h] BYREF

  *((_QWORD *)a1 + 667) = QueryCurrentTimePrecise();
  DXGAUTOPUSHLOCKFASTEXCLUSIVE::DXGAUTOPUSHLOCKFASTEXCLUSIVE(
    (DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v7,
    (struct VIDMM_WORKER_THREAD2 *)((char *)a1 + 160),
    1);
  while ( 1 )
  {
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v7);
    KeEnterCriticalRegion();
    v2 = v7;
    ExAcquirePushLockExclusiveEx(v7, 0LL);
    *(_QWORD *)(v2 + 8) = KeGetCurrentThread();
    v3 = (struct _KEVENT *)*((_QWORD *)a1 + 3);
    v8 = 1;
    KeClearEvent(v3);
    QueryPendingTerminations(a1);
    v11 = 0LL;
    v10 = 0LL;
    v9 = 0LL;
    SelectTask((__int64)a1, &v9, (volatile signed __int32 **)&v11);
    v4 = v11;
    v5 = (**(__int64 (__fastcall ***)(struct VIDMM_TASK *, struct VIDMM_WORKER_THREAD2 *, __int128 *))v11)(v11, a1, &v9);
    if ( v5 == -1073741267 && (byte_14008A203 & 4) != 0 )
      McTemplateK0pp_EtwWriteTransfer(
        *((_QWORD *)v4 + 6),
        &EventPreemptTask,
        v6,
        *(_QWORD *)(*(_QWORD *)a1 + 24LL),
        *((_QWORD *)v4 + 6));
    *((_QWORD *)a1 + 667) = QueryCurrentTimePrecise();
    DeselectTask(a1, v4, &v9);
    if ( v5 == -1073741077 )
      break;
    if ( v5 != -1073741267 && v5 && g_IsInternalRelease )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
      WdLogGlobalForLineNumber = 213;
      break;
    }
  }
  DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v7);
}
