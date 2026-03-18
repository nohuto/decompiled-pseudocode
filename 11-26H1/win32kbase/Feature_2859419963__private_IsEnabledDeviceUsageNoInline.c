/*
 * XREFs of Feature_2859419963__private_IsEnabledDeviceUsageNoInline @ 0x14022B1E8
 * Callers:
 *     ?GetTargetProperty@?$CSharedResourceMarshaler@VCResourceMarshaler@DirectComposition@@$0A@@DirectComposition@@UEBAPEBUResPropInfo@2@UDCOMPOSITION_PROPERTY_ID@@@Z @ 0x14022ACC0 (-GetTargetProperty@-$CSharedResourceMarshaler@VCResourceMarshaler@DirectComposition@@$0A@@Direct.c)
 *     ?GetTargetProperty@?$CSharedResourceMarshaler@VCVisualMarshaler@DirectComposition@@$01@DirectComposition@@UEBAPEBUResPropInfo@2@UDCOMPOSITION_PROPERTY_ID@@@Z @ 0x14022AD00 (-GetTargetProperty@-$CSharedResourceMarshaler@VCVisualMarshaler@DirectComposition@@$01@DirectCom.c)
 * Callees:
 *     Feature_2859419963__private_IsEnabledFallback @ 0x14022B224 (Feature_2859419963__private_IsEnabledFallback.c)
 */

__int64 Feature_2859419963__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_2859419963__private_featureState & 0x10) != 0 )
    return Feature_2859419963__private_featureState & 1;
  else
    return Feature_2859419963__private_IsEnabledFallback((unsigned int)Feature_2859419963__private_featureState, 3LL);
}
