/*
 * XREFs of ?GetTargetProperty@?$CSharedResourceMarshaler@VCResourceMarshaler@DirectComposition@@$0A@@DirectComposition@@UEBAPEBUResPropInfo@2@UDCOMPOSITION_PROPERTY_ID@@@Z @ 0x14022ACC0
 * Callers:
 *     <none>
 * Callees:
 *     Feature_2859419963__private_IsEnabledDeviceUsageNoInline @ 0x14022B1E8 (Feature_2859419963__private_IsEnabledDeviceUsageNoInline.c)
 *     ?GetTargetProperty@CResourceMarshaler@DirectComposition@@UEBAPEBUResPropInfo@2@UDCOMPOSITION_PROPERTY_ID@@@Z @ 0x14023B050 (-GetTargetProperty@CResourceMarshaler@DirectComposition@@UEBAPEBUResPropInfo@2@UDCOMPOSITION_PRO.c)
 */

__int64 __fastcall DirectComposition::CSharedResourceMarshaler<DirectComposition::CResourceMarshaler,0>::GetTargetProperty(
        __int64 a1,
        unsigned int a2)
{
  if ( (unsigned int)Feature_2859419963__private_IsEnabledDeviceUsageNoInline() )
    return 0LL;
  else
    return DirectComposition::CResourceMarshaler::GetTargetProperty(a1, a2);
}
