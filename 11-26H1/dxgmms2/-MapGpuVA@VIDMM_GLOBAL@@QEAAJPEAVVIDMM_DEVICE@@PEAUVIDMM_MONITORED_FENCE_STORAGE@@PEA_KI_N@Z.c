/*
 * XREFs of ?MapGpuVA@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEA_KI_N@Z @ 0x1400CB2CC
 * Callers:
 *     VidMmMapPagingProcessGpuVA @ 0x140042F20 (VidMmMapPagingProcessGpuVA.c)
 *     VidMmMapGpuVA @ 0x140044680 (VidMmMapGpuVA.c)
 *     ?MapGpuVA@VIDMM_DEVICE_PAGING_QUEUE@@QEAAJXZ @ 0x1400C9A8C (-MapGpuVA@VIDMM_DEVICE_PAGING_QUEUE@@QEAAJXZ.c)
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1400E2908 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 * Callees:
 *     ?MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEA_KI_N@Z @ 0x1400CB330 (-MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PE.c)
 */

__int64 __fastcall VIDMM_GLOBAL::MapGpuVA(
        VIDMM_GLOBAL *this,
        struct VIDMM_DEVICE *a2,
        VIDMM_FENCE_STORAGE_PAGE **a3,
        unsigned __int64 *a4,
        unsigned int a5,
        bool a6)
{
  if ( !a6 )
    return VIDMM_FENCE_STORAGE_PAGE::MapGpuVA(*a3, a2, (struct VIDMM_MONITORED_FENCE_STORAGE *)a3, a4, a5, a6);
  if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 744LL) + 63LL) || *((char *)this + 41065) < 0 )
  {
    a2 = (struct VIDMM_DEVICE *)*((_QWORD *)this + 5065);
    return VIDMM_FENCE_STORAGE_PAGE::MapGpuVA(*a3, a2, (struct VIDMM_MONITORED_FENCE_STORAGE *)a3, a4, a5, a6);
  }
  *a4 = 0LL;
  return 0LL;
}
