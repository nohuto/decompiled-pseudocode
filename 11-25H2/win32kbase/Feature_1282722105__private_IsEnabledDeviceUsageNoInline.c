/*
 * XREFs of Feature_1282722105__private_IsEnabledDeviceUsageNoInline @ 0x140228EC8
 * Callers:
 *     ?SetFloatProperty@?$CSharedResourceMarshaler@VCResourceMarshaler@DirectComposition@@$00@DirectComposition@@UEAAJIMPEA_N@Z @ 0x140228A60 (-SetFloatProperty@-$CSharedResourceMarshaler@VCResourceMarshaler@DirectComposition@@$00@DirectCo.c)
 *     ?SetFloatProperty@?$CSharedResourceMarshaler@VCVisualMarshaler@DirectComposition@@$01@DirectComposition@@UEAAJIMPEA_N@Z @ 0x140228AC0 (-SetFloatProperty@-$CSharedResourceMarshaler@VCVisualMarshaler@DirectComposition@@$01@DirectComp.c)
 *     ?SetFloatProperty@?$CSharedResourceMarshaler@VCManipulationTransformMarshaler@DirectComposition@@$01@DirectComposition@@UEAAJIMPEA_N@Z @ 0x140230D80 (-SetFloatProperty@-$CSharedResourceMarshaler@VCManipulationTransformMarshaler@DirectComposition@.c)
 *     ?SetFloatProperty@?$CSharedResourceMarshaler@VCCompositionAmbientLightMarshaler@DirectComposition@@$01@DirectComposition@@UEAAJIMPEA_N@Z @ 0x140230DD0 (-SetFloatProperty@-$CSharedResourceMarshaler@VCCompositionAmbientLightMarshaler@DirectCompositio.c)
 *     ?SetFloatProperty@?$CSharedResourceMarshaler@VCCompositionDistantLightMarshaler@DirectComposition@@$01@DirectComposition@@UEAAJIMPEA_N@Z @ 0x140230E20 (-SetFloatProperty@-$CSharedResourceMarshaler@VCCompositionDistantLightMarshaler@DirectCompositio.c)
 *     ?SetFloatProperty@?$CSharedResourceMarshaler@VCCompositionPointLightMarshaler@DirectComposition@@$01@DirectComposition@@UEAAJIMPEA_N@Z @ 0x140230E70 (-SetFloatProperty@-$CSharedResourceMarshaler@VCCompositionPointLightMarshaler@DirectComposition@.c)
 *     ?SetFloatProperty@?$CSharedResourceMarshaler@VCCompositionSpotLightMarshaler@DirectComposition@@$01@DirectComposition@@UEAAJIMPEA_N@Z @ 0x140230EC0 (-SetFloatProperty@-$CSharedResourceMarshaler@VCCompositionSpotLightMarshaler@DirectComposition@@.c)
 *     ?SetFloatProperty@?$CSharedResourceMarshaler@VCMatrixTransform3DMarshaler@DirectComposition@@$01@DirectComposition@@UEAAJIMPEA_N@Z @ 0x140230F10 (-SetFloatProperty@-$CSharedResourceMarshaler@VCMatrixTransform3DMarshaler@DirectComposition@@$01.c)
 *     ?SetFloatProperty@?$CSharedResourceMarshaler@VCMatrixTransformMarshaler@DirectComposition@@$01@DirectComposition@@UEAAJIMPEA_N@Z @ 0x140230F60 (-SetFloatProperty@-$CSharedResourceMarshaler@VCMatrixTransformMarshaler@DirectComposition@@$01@D.c)
 *     ?SetFloatProperty@?$CSharedResourceMarshaler@VCPrimitiveColorMarshaler@DirectComposition@@$01@DirectComposition@@UEAAJIMPEA_N@Z @ 0x140230FB0 (-SetFloatProperty@-$CSharedResourceMarshaler@VCPrimitiveColorMarshaler@DirectComposition@@$01@Di.c)
 *     ?SetFloatProperty@?$CSharedResourceMarshaler@VCRegionGeometryMarshaler@DirectComposition@@$01@DirectComposition@@UEAAJIMPEA_N@Z @ 0x140231000 (-SetFloatProperty@-$CSharedResourceMarshaler@VCRegionGeometryMarshaler@DirectComposition@@$01@Di.c)
 * Callees:
 *     Feature_1282722105__private_IsEnabledFallback @ 0x140228F00 (Feature_1282722105__private_IsEnabledFallback.c)
 */

__int64 Feature_1282722105__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_1282722105__private_featureState & 0x10) != 0 )
    return Feature_1282722105__private_featureState & 1;
  else
    return Feature_1282722105__private_IsEnabledFallback((unsigned int)Feature_1282722105__private_featureState, 3LL);
}
