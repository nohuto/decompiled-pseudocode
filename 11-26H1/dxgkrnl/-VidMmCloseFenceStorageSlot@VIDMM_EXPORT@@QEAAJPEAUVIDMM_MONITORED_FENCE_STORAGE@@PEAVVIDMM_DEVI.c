/*
 * XREFs of ?VidMmCloseFenceStorageSlot@VIDMM_EXPORT@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAVVIDMM_DEVICE@@_N@Z @ 0x14007C758
 * Callers:
 *     ?DestroyCoreState@DXGDOORBELL@@IEAAXXZ @ 0x1401E1680 (-DestroyCoreState@DXGDOORBELL@@IEAAXXZ.c)
 *     ?DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1402E5D3C (-DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 *     ?DestroyCoreState@DXGHWQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1403A7D80 (-DestroyCoreState@DXGHWQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VIDMM_EXPORT::VidMmCloseFenceStorageSlot(
        VIDMM_EXPORT *this,
        struct VIDMM_MONITORED_FENCE_STORAGE *a2,
        struct VIDMM_DEVICE *a3)
{
  return (*(__int64 (__fastcall **)(struct VIDMM_MONITORED_FENCE_STORAGE *, struct VIDMM_DEVICE *, _QWORD))(*((_QWORD *)this + 1) + 1312LL))(
           a2,
           a3,
           0LL);
}
