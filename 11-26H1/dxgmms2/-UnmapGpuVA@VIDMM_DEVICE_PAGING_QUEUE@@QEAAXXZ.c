/*
 * XREFs of ?UnmapGpuVA@VIDMM_DEVICE_PAGING_QUEUE@@QEAAXXZ @ 0x1400E1560
 * Callers:
 *     ?UnmapPagingQueueGpuVAs@VIDMM_DEVICE@@QEAAXXZ @ 0x1400A75D0 (-UnmapPagingQueueGpuVAs@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?DestroyState@VIDMM_DEVICE_PAGING_QUEUE@@QEAAXXZ @ 0x1400E1D88 (-DestroyState@VIDMM_DEVICE_PAGING_QUEUE@@QEAAXXZ.c)
 * Callees:
 *     ?UnmapGpuVA@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@I_N@Z @ 0x1400E12E0 (-UnmapGpuVA@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@I_N@Z.c)
 */

void __fastcall VIDMM_DEVICE_PAGING_QUEUE::UnmapGpuVA(VIDMM_DEVICE_PAGING_QUEUE *this)
{
  if ( *(_QWORD *)this )
  {
    if ( *((_QWORD *)this + 3) )
    {
      VIDMM_GLOBAL::UnmapGpuVA(
        **(VIDMM_GLOBAL ***)(*(_QWORD *)this + 96LL),
        *(struct VIDMM_DEVICE **)(**(_QWORD **)(*(_QWORD *)this + 96LL) + 40520LL),
        (VIDMM_FENCE_STORAGE_PAGE **)(*((_QWORD *)this + 1) + 64LL),
        *((_DWORD *)this + 4),
        1);
      *((_QWORD *)this + 3) = 0LL;
    }
  }
}
