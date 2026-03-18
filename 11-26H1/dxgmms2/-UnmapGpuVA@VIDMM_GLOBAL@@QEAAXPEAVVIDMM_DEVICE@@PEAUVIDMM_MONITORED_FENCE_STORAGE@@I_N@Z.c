/*
 * XREFs of ?UnmapGpuVA@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@I_N@Z @ 0x1400E12E0
 * Callers:
 *     VidMmUnmapGpuVA @ 0x140044840 (VidMmUnmapGpuVA.c)
 *     VidMmUnmapPagingProcessGpuVA @ 0x14004D930 (VidMmUnmapPagingProcessGpuVA.c)
 *     ?DestroyPagingFenceObjects@VIDMM_GLOBAL@@QEAAXXZ @ 0x14009D6F0 (-DestroyPagingFenceObjects@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?UnmapGpuVA@VIDMM_DEVICE_PAGING_QUEUE@@QEAAXXZ @ 0x1400E1560 (-UnmapGpuVA@VIDMM_DEVICE_PAGING_QUEUE@@QEAAXXZ.c)
 * Callees:
 *     ?UnmapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@I_N@Z @ 0x1400E1334 (-UnmapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@.c)
 */

void __fastcall VIDMM_GLOBAL::UnmapGpuVA(
        VIDMM_GLOBAL *this,
        struct VIDMM_DEVICE *a2,
        VIDMM_FENCE_STORAGE_PAGE **a3,
        unsigned int a4,
        bool a5)
{
  if ( *a3 )
  {
    if ( !a5 )
    {
LABEL_3:
      VIDMM_FENCE_STORAGE_PAGE::UnmapGpuVA(*a3, a2, (struct VIDMM_MONITORED_FENCE_STORAGE *)a3, a4, a5);
      return;
    }
    if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 744LL) + 63LL) || *((char *)this + 41065) < 0 )
    {
      a2 = (struct VIDMM_DEVICE *)*((_QWORD *)this + 5065);
      goto LABEL_3;
    }
  }
}
