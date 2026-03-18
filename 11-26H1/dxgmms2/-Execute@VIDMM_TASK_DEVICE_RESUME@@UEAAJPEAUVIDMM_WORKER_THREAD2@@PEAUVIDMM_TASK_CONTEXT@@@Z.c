/*
 * XREFs of ?Execute@VIDMM_TASK_DEVICE_RESUME@@UEAAJPEAUVIDMM_WORKER_THREAD2@@PEAUVIDMM_TASK_CONTEXT@@@Z @ 0x1400B82E0
 * Callers:
 *     <none>
 * Callees:
 *     ExecutePagingCommand @ 0x1400B8780 (ExecutePagingCommand.c)
 */

__int64 __fastcall VIDMM_TASK_DEVICE_RESUME::Execute(
        VIDMM_TASK_DEVICE_RESUME *this,
        struct VIDMM_WORKER_THREAD2 *a2,
        struct VIDMM_TASK_CONTEXT *a3)
{
  ExecutePagingCommand(a2, (VIDMM_TASK_DEVICE_RESUME *)((char *)this - 320), 0LL, 0LL);
  return 0LL;
}
