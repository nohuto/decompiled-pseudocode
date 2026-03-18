/*
 * XREFs of ?MapGpuVaForPagingProcess@DXGDEVICESYNCOBJECT@@QEAAJIPEA_K@Z @ 0x1403500D8
 * Callers:
 *     ?Initialize@DXGPAGINGQUEUE@@IEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@@Z @ 0x14035097C (-Initialize@DXGPAGINGQUEUE@@IEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@@Z.c)
 * Callees:
 *     ?GetCurrentValueStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@XZ @ 0x140052B98 (-GetCurrentValueStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@XZ.c)
 *     ?VidMmMapPagingProcessGpuVA@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@IPEA_K@Z @ 0x14005CEF8 (-VidMmMapPagingProcessGpuVA@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_MONITORED_FENCE_STORA.c)
 */

__int64 __fastcall DXGDEVICESYNCOBJECT::MapGpuVaForPagingProcess(
        DXGDEVICESYNCOBJECT *this,
        unsigned int a2,
        unsigned __int64 *a3)
{
  VIDMM_EXPORT *v6; // rdi
  struct VIDMM_MONITORED_FENCE_STORAGE *CurrentValueStorage; // rax

  v6 = *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL);
  CurrentValueStorage = DXGSYNCOBJECT::GetCurrentValueStorage(*((DXGSYNCOBJECT **)this + 4));
  return VIDMM_EXPORT::VidMmMapPagingProcessGpuVA(
           v6,
           *(struct VIDMM_GLOBAL **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 768LL),
           CurrentValueStorage,
           a2,
           a3);
}
