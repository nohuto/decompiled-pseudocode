/*
 * XREFs of ?GetInput@CEffectBrush@@QEBAPEAVCBrush@@I@Z @ 0x1801FE584
 * Callers:
 *     ?PopLayerTransformFromExplicitSurfaceInput@CTreeEffectLayer@@AEAAXXZ @ 0x18005CDC8 (-PopLayerTransformFromExplicitSurfaceInput@CTreeEffectLayer@@AEAAXXZ.c)
 *     ?PushLayerTransformOnExplicitSurfaceInput@CTreeEffectLayer@@AEAAXXZ @ 0x18005CE3C (-PushLayerTransformOnExplicitSurfaceInput@CTreeEffectLayer@@AEAAXXZ.c)
 *     ?AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x1800FB9F0 (-AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechnique.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802014E4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_3922508091@@@details@wil@@QEAA_NXZ @ 0x18026E8BC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_3922508091@@@details@wil@@QEAA_NX.c)
 */

struct CBrush *__fastcall CEffectBrush::GetInput(CEffectBrush *this, unsigned int a2)
{
  __int64 v2; // rbx
  const char *v4; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = a2;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_3922508091>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_3922508091>::GetImpl'::`2'::impl)
    && (unsigned int)v2 >= *((_DWORD *)this + 48) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1D8,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\effectbrush.cpp",
      v4);
  }
  return *(struct CBrush **)(*((_QWORD *)this + 21) + 8 * v2);
}
