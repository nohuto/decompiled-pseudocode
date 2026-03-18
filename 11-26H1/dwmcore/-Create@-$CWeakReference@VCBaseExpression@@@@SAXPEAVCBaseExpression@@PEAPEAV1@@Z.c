/*
 * XREFs of ?Create@?$CWeakReference@VCBaseExpression@@@@SAXPEAVCBaseExpression@@PEAPEAV1@@Z @ 0x18013EDCC
 * Callers:
 *     ?SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z @ 0x1800E4C70 (-SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z.c)
 *     ??$ReplaceNotifier@VCVisual@@@CResource@@QEAAXPEAPEAV?$CWeakReference@VCVisual@@@@PEAVCVisual@@@Z @ 0x18013EC60 (--$ReplaceNotifier@VCVisual@@@CResource@@QEAAXPEAPEAV-$CWeakReference@VCVisual@@@@PEAVCVisual@@@.c)
 *     ??0CExcludeVisualReference@@QEAA@PEAVCVisual@@@Z @ 0x18013ED8C (--0CExcludeVisualReference@@QEAA@PEAVCVisual@@@Z.c)
 *     ?TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x18014B5C8 (-TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTa.c)
 *     ?TransitionToCustomAnimation@CInteractionTracker2@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x18027740C (-TransitionToCustomAnimation@CInteractionTracker2@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationT.c)
 * Callees:
 *     ?GetWeakReference@CResource@@UEAAJPEAPEAVIUnknownWeakRef@@@Z @ 0x18013EF70 (-GetWeakReference@CResource@@UEAAJPEAPEAVIUnknownWeakRef@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 */

struct IUnknownWeakRef *__fastcall CWeakReference<CBaseExpression>::Create(CResource *a1, struct IUnknownWeakRef **a2)
{
  int WeakReference; // eax
  struct IUnknownWeakRef *result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]
  struct IUnknownWeakRef *v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = 0LL;
  WeakReference = CResource::GetWeakReference(a1, &v6);
  if ( WeakReference < 0 )
    ModuleFailFastForHRESULT(WeakReference, retaddr);
  result = v6;
  *a2 = v6;
  return result;
}
