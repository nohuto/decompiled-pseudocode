/*
 * XREFs of ?SetFloatProperty@CResourceMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x140105310
 * Callers:
 *     ?SetFloatProperty@CVisualMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1400CD770 (-SetFloatProperty@CVisualMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 *     ?SetFloatProperty@CNineGridBrushMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1400F25C0 (-SetFloatProperty@CNineGridBrushMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 *     ?SetFloatProperty@CDropShadowMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x140105260 (-SetFloatProperty@CDropShadowMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 *     ?SetFloatProperty@CInteractionTrackerMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x14010BE70 (-SetFloatProperty@CInteractionTrackerMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 *     ?SetFloatProperty@CColorGradientStopMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x140116D10 (-SetFloatProperty@CColorGradientStopMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 *     ?SetFloatProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1401182F0 (-SetFloatProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 *     ?SetFloatProperty@CSpriteShapeMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x140129AD0 (-SetFloatProperty@CSpriteShapeMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 *     ?SetFloatProperty@CCompositionSpotLightMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x14012B160 (-SetFloatProperty@CCompositionSpotLightMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 *     ?SetFloatProperty@CGeometryMarshaler@DirectComposition@@MEAAJIMPEA_N@Z @ 0x140141670 (-SetFloatProperty@CGeometryMarshaler@DirectComposition@@MEAAJIMPEA_N@Z.c)
 *     ?SetFloatProperty@CNaturalAnimationMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x14015CC60 (-SetFloatProperty@CNaturalAnimationMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 *     ?SetFloatProperty@?$CSharedResourceMarshaler@VCResourceMarshaler@DirectComposition@@$00@DirectComposition@@UEAAJIMPEA_N@Z @ 0x140228A60 (-SetFloatProperty@-$CSharedResourceMarshaler@VCResourceMarshaler@DirectComposition@@$00@DirectCo.c)
 *     ?SetFloatProperty@?$CSharedResourceMarshaler@VCManipulationTransformMarshaler@DirectComposition@@$01@DirectComposition@@UEAAJIMPEA_N@Z @ 0x140230D80 (-SetFloatProperty@-$CSharedResourceMarshaler@VCManipulationTransformMarshaler@DirectComposition@.c)
 *     ?SetFloatProperty@CSaturationEffectMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x140231360 (-SetFloatProperty@CSaturationEffectMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 *     ?SetFloatProperty@CArithmeticCompositeEffectMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x140231A30 (-SetFloatProperty@CArithmeticCompositeEffectMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 *     ?SetFloatProperty@CShadowEffectMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1402321C0 (-SetFloatProperty@CShadowEffectMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 *     ?SetFloatProperty@CLinearTransferEffectMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x140232B40 (-SetFloatProperty@CLinearTransferEffectMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 *     ?SetFloatProperty@CTableTransferEffectMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x140233340 (-SetFloatProperty@CTableTransferEffectMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 *     ?SetFloatProperty@CAffineTransform2DEffectMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x140234290 (-SetFloatProperty@CAffineTransform2DEffectMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 *     ?SetFloatProperty@CCompositionAmbientLightMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x140239990 (-SetFloatProperty@CCompositionAmbientLightMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 *     ?SetFloatProperty@CCompositionDistantLightMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x140239B20 (-SetFloatProperty@CCompositionDistantLightMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 *     ?SetFloatProperty@CCompositionPointLightMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x14023A1E0 (-SetFloatProperty@CCompositionPointLightMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 *     ?SetFloatProperty@CVisualCaptureMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x14023AC90 (-SetFloatProperty@CVisualCaptureMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 *     ?SetFloatProperty@CProjectedShadowSceneMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x14023C180 (-SetFloatProperty@CProjectedShadowSceneMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 * Callees:
 *     ?GetTargetProperty@CResourceMarshaler@DirectComposition@@QEBAPEBUResPropInfo@2@I@Z @ 0x140105360 (-GetTargetProperty@CResourceMarshaler@DirectComposition@@QEBAPEBUResPropInfo@2@I@Z.c)
 */

__int64 __fastcall DirectComposition::CResourceMarshaler::SetFloatProperty(
        DirectComposition::CResourceMarshaler *this,
        unsigned int a2,
        float a3,
        bool *a4)
{
  const struct DirectComposition::ResPropInfo *TargetProperty; // rax
  _BYTE *v5; // r9
  __int64 v6; // r10
  __int64 v7; // rdx

  TargetProperty = DirectComposition::CResourceMarshaler::GetTargetProperty(this, a2);
  if ( !TargetProperty || *((_DWORD *)TargetProperty + 2) != 18 )
    return 3221225485LL;
  v7 = *((unsigned int *)TargetProperty + 3);
  if ( *(float *)(v7 + v6) != a3 )
  {
    *(float *)(v7 + v6) = a3;
    *(_DWORD *)(*((unsigned int *)TargetProperty + 4) + v6) |= *((_DWORD *)TargetProperty + 5);
    *v5 = 1;
  }
  return 0LL;
}
