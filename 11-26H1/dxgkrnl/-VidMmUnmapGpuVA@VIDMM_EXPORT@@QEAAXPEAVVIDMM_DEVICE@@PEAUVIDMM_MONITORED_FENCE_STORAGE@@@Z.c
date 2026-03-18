/*
 * XREFs of ?VidMmUnmapGpuVA@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x14005B380
 * Callers:
 *     ?DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1402E5D3C (-DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

void __fastcall VIDMM_EXPORT::VidMmUnmapGpuVA(
        VIDMM_EXPORT *this,
        struct VIDMM_DEVICE *a2,
        struct VIDMM_MONITORED_FENCE_STORAGE *a3)
{
  (*(void (__fastcall **)(struct VIDMM_DEVICE *, struct VIDMM_MONITORED_FENCE_STORAGE *))(*((_QWORD *)this + 1) + 920LL))(
    a2,
    a3);
}
