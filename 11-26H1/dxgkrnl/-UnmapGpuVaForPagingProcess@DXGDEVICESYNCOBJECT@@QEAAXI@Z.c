/*
 * XREFs of ?UnmapGpuVaForPagingProcess@DXGDEVICESYNCOBJECT@@QEAAXI@Z @ 0x140200C44
 * Callers:
 *     ?DestroyCoreState@DXGPAGINGQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1403A3B88 (-DestroyCoreState@DXGPAGINGQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ?GetCurrentValueStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@XZ @ 0x140052B98 (-GetCurrentValueStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@XZ.c)
 *     ?VidMmUnmapPagingProcessGpuVA@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@I@Z @ 0x140081E60 (-VidMmUnmapPagingProcessGpuVA@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MONITORED_FENCE_STO.c)
 */

void __fastcall DXGDEVICESYNCOBJECT::UnmapGpuVaForPagingProcess(DXGDEVICESYNCOBJECT *this, unsigned int a2)
{
  VIDMM_EXPORT *v4; // rdi
  struct VIDMM_MONITORED_FENCE_STORAGE *CurrentValueStorage; // rax

  v4 = *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL);
  CurrentValueStorage = DXGSYNCOBJECT::GetCurrentValueStorage(*((DXGSYNCOBJECT **)this + 4));
  VIDMM_EXPORT::VidMmUnmapPagingProcessGpuVA(
    v4,
    *(struct VIDMM_GLOBAL **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 768LL),
    CurrentValueStorage,
    a2);
}
