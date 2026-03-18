/*
 * XREFs of ?VidMmUnmapCpuVA@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x1400577DC
 * Callers:
 *     ??1DXGDOORBELL@@IEAA@XZ @ 0x1401E0CE0 (--1DXGDOORBELL@@IEAA@XZ.c)
 *     ?DetachGlobalSyncObjectOnError@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1402003DC (-DetachGlobalSyncObjectOnError@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 *     ?DestroyCoreState@DXGHWQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1403A7D80 (-DestroyCoreState@DXGHWQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

void __fastcall VIDMM_EXPORT::VidMmUnmapCpuVA(
        VIDMM_EXPORT *this,
        struct VIDMM_DEVICE *a2,
        struct VIDMM_MONITORED_FENCE_STORAGE *a3)
{
  (*(void (__fastcall **)(struct VIDMM_DEVICE *, struct VIDMM_MONITORED_FENCE_STORAGE *))(*((_QWORD *)this + 1) + 912LL))(
    a2,
    a3);
}
