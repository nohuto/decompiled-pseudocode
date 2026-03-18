/*
 * XREFs of ?DequeueTask@VIDMM_SCHCLASS_PAGING@@UEAAXPEAUVIDMM_WORKER_THREAD2@@PEAUVIDMM_TASK@@@Z @ 0x1400C0310
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_SCHCLASS_PAGING::DequeueTask(
        VIDMM_SCHCLASS_PAGING *this,
        struct VIDMM_WORKER_THREAD2 *a2,
        struct VIDMM_TASK *a3)
{
  RtlAvlRemoveNode((char *)this + 24, (char *)a3 + 8);
  *((_QWORD *)a3 + 7) = *((_QWORD *)this + 4) - *((_QWORD *)a3 + 7);
}
