/*
 * XREFs of ?VidMmUnmapPagingProcessGpuVA@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@I@Z @ 0x140081E60
 * Callers:
 *     ?UnmapGpuVaForPagingProcess@DXGDEVICESYNCOBJECT@@QEAAXI@Z @ 0x140200C44 (-UnmapGpuVaForPagingProcess@DXGDEVICESYNCOBJECT@@QEAAXI@Z.c)
 *     ?Stop@DXGADAPTERSYNCOBJECT@@QEAAXXZ @ 0x140353308 (-Stop@DXGADAPTERSYNCOBJECT@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

void __fastcall VIDMM_EXPORT::VidMmUnmapPagingProcessGpuVA(
        VIDMM_EXPORT *this,
        struct VIDMM_GLOBAL *a2,
        struct VIDMM_MONITORED_FENCE_STORAGE *a3,
        unsigned int a4)
{
  (*(void (__fastcall **)(struct VIDMM_GLOBAL *, struct VIDMM_MONITORED_FENCE_STORAGE *, _QWORD))(*((_QWORD *)this + 1)
                                                                                                + 928LL))(
    a2,
    a3,
    a4);
}
