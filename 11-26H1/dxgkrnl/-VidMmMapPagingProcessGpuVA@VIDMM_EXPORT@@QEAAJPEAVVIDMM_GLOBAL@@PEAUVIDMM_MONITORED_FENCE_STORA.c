/*
 * XREFs of ?VidMmMapPagingProcessGpuVA@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@IPEA_K@Z @ 0x14005CEF8
 * Callers:
 *     ?MapGpuVaForPagingProcess@DXGDEVICESYNCOBJECT@@QEAAJIPEA_K@Z @ 0x1403500D8 (-MapGpuVaForPagingProcess@DXGDEVICESYNCOBJECT@@QEAAJIPEA_K@Z.c)
 *     ?InitializeAdapterObject@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@PEAVDXGDEVICE@@PEAVDXGPAGINGQUEUE@@PEAEI_N4@Z @ 0x140351D48 (-InitializeAdapterObject@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@PEAVDXGDEVICE@@PEAVDXGPAG.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VIDMM_EXPORT::VidMmMapPagingProcessGpuVA(
        VIDMM_EXPORT *this,
        struct VIDMM_GLOBAL *a2,
        struct VIDMM_MONITORED_FENCE_STORAGE *a3,
        unsigned int a4,
        unsigned __int64 *a5)
{
  return (*(__int64 (__fastcall **)(struct VIDMM_GLOBAL *, struct VIDMM_MONITORED_FENCE_STORAGE *, _QWORD, unsigned __int64 *))(*((_QWORD *)this + 1) + 904LL))(
           a2,
           a3,
           a4,
           a5);
}
