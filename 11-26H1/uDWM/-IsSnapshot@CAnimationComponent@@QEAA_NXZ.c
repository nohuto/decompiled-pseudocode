/*
 * XREFs of ?IsSnapshot@CAnimationComponent@@QEAA_NXZ @ 0x18003ABD4
 * Callers:
 *     ?_IsAnimationComponentVisible@CTransitionVisualController@@IEAA_NPEAVCAnimationComponent@@@Z @ 0x18003AB7C (-_IsAnimationComponentVisible@CTransitionVisualController@@IEAA_NPEAVCAnimationComponent@@@Z.c)
 *     ?_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800C5700 (-_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStorybo.c)
 *     ?GetSurfaceFromExistingAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@PEBUtagRECT@@_NPEAVCVisualBrush@@PEA_NPEAUD2D_POINT_3F@@@Z @ 0x1800CF7D8 (-GetSurfaceFromExistingAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationCompon.c)
 * Callees:
 *     <none>
 */

bool __fastcall CAnimationComponent::IsSnapshot(CAnimationComponent *this)
{
  return *((_BYTE *)this + 67);
}
