/*
 * XREFs of ?GetTargetProperty@?$CSharedResourceMarshaler@VCVisualMarshaler@DirectComposition@@$01@DirectComposition@@UEBAPEBUResPropInfo@2@UDCOMPOSITION_PROPERTY_ID@@@Z @ 0x14022AD00
 * Callers:
 *     <none>
 * Callees:
 *     Feature_2859419963__private_IsEnabledDeviceUsageNoInline @ 0x14022B1E8 (Feature_2859419963__private_IsEnabledDeviceUsageNoInline.c)
 *     ?GetTargetProperty@CResourceMarshaler@DirectComposition@@UEBAPEBUResPropInfo@2@UDCOMPOSITION_PROPERTY_ID@@@Z @ 0x14023B050 (-GetTargetProperty@CResourceMarshaler@DirectComposition@@UEBAPEBUResPropInfo@2@UDCOMPOSITION_PRO.c)
 */

__int64 __fastcall DirectComposition::CSharedResourceMarshaler<DirectComposition::CVisualMarshaler,2>::GetTargetProperty(
        __int64 a1,
        unsigned int a2)
{
  Feature_2859419963__private_IsEnabledDeviceUsageNoInline();
  return DirectComposition::CResourceMarshaler::GetTargetProperty(a1, a2);
}
