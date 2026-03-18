/*
 * XREFs of VidMmUnmapPagingProcessGpuVA @ 0x14004D930
 * Callers:
 *     <none>
 * Callees:
 *     ?UnmapGpuVA@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@I_N@Z @ 0x1400E12E0 (-UnmapGpuVA@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@I_N@Z.c)
 */

void __fastcall VidMmUnmapPagingProcessGpuVA(
        struct VIDMM_DEVICE **a1,
        struct VIDMM_MONITORED_FENCE_STORAGE *a2,
        unsigned int a3)
{
  VIDMM_GLOBAL::UnmapGpuVA((VIDMM_GLOBAL *)a1, a1[5065], a2, a3, 1);
}
