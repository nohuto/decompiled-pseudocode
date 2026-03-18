/*
 * XREFs of ?VidMmGetCurrentPagingQueueFenceId@@YA_KPEBUVIDMM_PAGING_QUEUE@@@Z @ 0x140117D88
 * Callers:
 *     VidSchWaitForSingleSyncObject @ 0x14002D9C0 (VidSchWaitForSingleSyncObject.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall VidMmGetCurrentPagingQueueFenceId(const struct VIDMM_PAGING_QUEUE *a1)
{
  return *((_QWORD *)a1 + 8);
}
