/*
 * XREFs of ?VidMmEnqueueTask@@YAXPEAUVIDMM_WORKER_THREAD2@@PEAUVIDMM_SCHCLASS@@PEAUVIDMM_TASK@@@Z @ 0x140099190
 * Callers:
 *     ?VidMmNotifyTaskWork@@YA_NPEAUVIDMM_WORKER_THREAD2@@PEAUVIDMM_SCHCLASS@@PEAUVIDMM_TASK@@K@Z @ 0x1400990DC (-VidMmNotifyTaskWork@@YA_NPEAUVIDMM_WORKER_THREAD2@@PEAUVIDMM_SCHCLASS@@PEAUVIDMM_TASK@@K@Z.c)
 *     EnqueuePagingQueueTask @ 0x1400A94DC (EnqueuePagingQueueTask.c)
 * Callees:
 *     McTemplateK0pxuu_EtwWriteTransfer @ 0x1400506F4 (McTemplateK0pxuu_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

void __fastcall VidMmEnqueueTask(struct VIDMM_WORKER_THREAD2 *a1, struct VIDMM_SCHCLASS *a2, struct VIDMM_TASK *a3)
{
  __int64 v6; // rcx
  __int64 v7; // r8
  char v8; // [rsp+28h] [rbp-20h]
  char v9; // [rsp+30h] [rbp-18h]

  *((_QWORD *)a3 + 4) = a2;
  *((_QWORD *)a3 + 6) = ++*((_QWORD *)a1 + 739);
  (**(void (__fastcall ***)(struct VIDMM_SCHCLASS *, struct VIDMM_WORKER_THREAD2 *))a2)(a2, a1);
  (*(void (__fastcall **)(struct VIDMM_TASK *, struct VIDMM_WORKER_THREAD2 *))(*(_QWORD *)a3 + 32LL))(a3, a1);
  if ( (byte_14008A203 & 4) != 0 )
  {
    v9 = *((_BYTE *)a3 + 76);
    v8 = *((_BYTE *)a2 + 21);
    McTemplateK0pxuu_EtwWriteTransfer(
      v6,
      &EventEnqueueTask,
      v7,
      *(_QWORD *)(*(_QWORD *)a1 + 24LL),
      *((_QWORD *)a3 + 6),
      v8,
      v9);
  }
  ++*((_DWORD *)a2 + 4);
  KeSetEvent(*((PRKEVENT *)a1 + 3), 0, 0);
}
