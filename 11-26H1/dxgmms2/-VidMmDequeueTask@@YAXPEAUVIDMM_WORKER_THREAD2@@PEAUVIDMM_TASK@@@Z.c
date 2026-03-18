/*
 * XREFs of ?VidMmDequeueTask@@YAXPEAUVIDMM_WORKER_THREAD2@@PEAUVIDMM_TASK@@@Z @ 0x1400B895C
 * Callers:
 *     ?VidMmCancelTask@@YAXPEAUVIDMM_WORKER_THREAD2@@PEAUVIDMM_TASK@@@Z @ 0x14009AC7C (-VidMmCancelTask@@YAXPEAUVIDMM_WORKER_THREAD2@@PEAUVIDMM_TASK@@@Z.c)
 *     DeselectTask @ 0x1400B8CE8 (DeselectTask.c)
 *     ?VidMmSuspendPagingQueue@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@@Z @ 0x140102380 (-VidMmSuspendPagingQueue@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@@Z.c)
 * Callees:
 *     McTemplateK0pxuu_EtwWriteTransfer @ 0x1400506F4 (McTemplateK0pxuu_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

void __fastcall VidMmDequeueTask(struct VIDMM_WORKER_THREAD2 *a1, struct VIDMM_TASK *a2, __int64 a3)
{
  __int64 v4; // rsi
  char v6; // [rsp+28h] [rbp-20h]
  char v7; // [rsp+30h] [rbp-18h]

  v4 = *((_QWORD *)a2 + 4);
  if ( (byte_14008A203 & 4) != 0 )
  {
    v7 = *((_BYTE *)a2 + 76);
    v6 = *(_BYTE *)(v4 + 21);
    McTemplateK0pxuu_EtwWriteTransfer(
      (__int64)a1,
      &EventDequeueTask,
      a3,
      *(_QWORD *)(*(_QWORD *)a1 + 24LL),
      *((_QWORD *)a2 + 6),
      v6,
      v7);
  }
  (*(void (__fastcall **)(struct VIDMM_TASK *, struct VIDMM_WORKER_THREAD2 *))(*(_QWORD *)a2 + 40LL))(a2, a1);
  (*(void (__fastcall **)(__int64, struct VIDMM_WORKER_THREAD2 *, struct VIDMM_TASK *))(*(_QWORD *)v4 + 8LL))(
    v4,
    a1,
    a2);
  --*(_DWORD *)(v4 + 16);
  *((_QWORD *)a2 + 4) = 0LL;
  *((_QWORD *)a2 + 6) = 0LL;
}
