/*
 * XREFs of ?VidMmMapGpuVA@VIDMM_EXPORT@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEA_KI@Z @ 0x1400599D8
 * Callers:
 *     ?Initialize@DXGDEVICESYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@U_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@IPEAE@Z @ 0x140200460 (-Initialize@DXGDEVICESYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@U_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@I.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VIDMM_EXPORT::VidMmMapGpuVA(
        VIDMM_EXPORT *this,
        struct VIDMM_DEVICE *a2,
        struct VIDMM_MONITORED_FENCE_STORAGE *a3,
        unsigned __int64 *a4,
        unsigned int a5)
{
  return (*(__int64 (__fastcall **)(struct VIDMM_DEVICE *, struct VIDMM_MONITORED_FENCE_STORAGE *, unsigned __int64 *, _QWORD))(*((_QWORD *)this + 1) + 896LL))(
           a2,
           a3,
           a4,
           a5);
}
