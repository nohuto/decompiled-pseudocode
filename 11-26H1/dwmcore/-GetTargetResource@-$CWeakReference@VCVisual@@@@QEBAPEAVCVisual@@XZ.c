/*
 * XREFs of ?GetTargetResource@?$CWeakReference@VCVisual@@@@QEBAPEAVCVisual@@XZ @ 0x18004C160
 * Callers:
 *     ?GetVisualNoRef@CInteraction@@QEBAPEAVCVisual@@XZ @ 0x1800A97F8 (-GetVisualNoRef@CInteraction@@QEBAPEAVCVisual@@XZ.c)
 *     ?SetVisual@?$CVisualReferenceControllerGeneratedT@VCVisualReferenceController@@VCVisualReference@@@@QEAAJPEAVCVisual@@@Z @ 0x18013EBF4 (-SetVisual@-$CVisualReferenceControllerGeneratedT@VCVisualReferenceController@@VCVisualReference.c)
 *     ?GetVisualNoRef@CVisualReferenceController@@UEBAPEAVCVisual@@XZ @ 0x1801A90D0 (-GetVisualNoRef@CVisualReferenceController@@UEBAPEAVCVisual@@XZ.c)
 * Callees:
 *     ?IsLockedByCurrentThread@CTreeLock@@QEBA_NXZ @ 0x18004CD80 (-IsLockedByCurrentThread@CTreeLock@@QEBA_NXZ.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CWeakReference<CVisual>::GetTargetResource(__int64 a1)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( !g_pComposition
    || GetCurrentThreadId() != CComposition::s_compositionThreadId
    && !CTreeLock::IsLockedByCurrentThread((CComposition *)((char *)g_pComposition + 5696)) )
  {
    ModuleFailFastForHRESULT(-2003304313, retaddr);
  }
  return *(_QWORD *)(a1 + 64);
}
