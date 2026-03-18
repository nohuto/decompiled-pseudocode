/*
 * XREFs of ??0VIDMM_DEVICE_PAGING_QUEUE@@QEAA@XZ @ 0x140042150
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

VIDMM_DEVICE_PAGING_QUEUE *__fastcall VIDMM_DEVICE_PAGING_QUEUE::VIDMM_DEVICE_PAGING_QUEUE(
        VIDMM_DEVICE_PAGING_QUEUE *this)
{
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_DWORD *)this + 4) = 0;
  *((_QWORD *)this + 3) = 0LL;
  return this;
}
