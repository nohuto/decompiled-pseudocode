/*
 * XREFs of ?IsSnapshot@CAnimationComponent@@QEAA_NXZ @ 0x1800275C4
 * Callers:
 *     ?_IsAnimationComponentVisible@CTransitionVisualController@@IEAA_NPEAVCAnimationComponent@@@Z @ 0x18002757C (-_IsAnimationComponentVisible@CTransitionVisualController@@IEAA_NPEAVCAnimationComponent@@@Z.c)
 *     ?GetSurfaceFromExistingAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@PEBUtagRECT@@_NPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCachedVisualImageProxy@@PEA_NPEAUD2D_POINT_3F@@@Z @ 0x180084524 (-GetSurfaceFromExistingAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationCompon.c)
 *     ?_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800CB5C0 (-_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStorybo.c)
 * Callees:
 *     <none>
 */

bool __fastcall CAnimationComponent::IsSnapshot(CAnimationComponent *this)
{
  return *((_BYTE *)this + 67);
}
