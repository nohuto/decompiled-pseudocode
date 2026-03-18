/*
 * XREFs of VidMmMapPagingProcessGpuVA @ 0x140042F20
 * Callers:
 *     <none>
 * Callees:
 *     ?MapGpuVA@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEA_KI_N@Z @ 0x1400CB2CC (-MapGpuVA@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEA_KI_N@Z.c)
 */

__int64 __fastcall VidMmMapPagingProcessGpuVA(
        struct VIDMM_DEVICE **this,
        struct VIDMM_MONITORED_FENCE_STORAGE *a2,
        char a3,
        unsigned __int64 *a4)
{
  return VIDMM_GLOBAL::MapGpuVA((VIDMM_GLOBAL *)this, this[5065], a2, a4, 1 << a3, 1);
}
