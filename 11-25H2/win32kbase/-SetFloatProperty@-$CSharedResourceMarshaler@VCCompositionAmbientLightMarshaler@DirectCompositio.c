/*
 * XREFs of ?SetFloatProperty@?$CSharedResourceMarshaler@VCCompositionAmbientLightMarshaler@DirectComposition@@$01@DirectComposition@@UEAAJIMPEA_N@Z @ 0x140230DD0
 * Callers:
 *     <none>
 * Callees:
 *     Feature_1282722105__private_IsEnabledDeviceUsageNoInline @ 0x140228EC8 (Feature_1282722105__private_IsEnabledDeviceUsageNoInline.c)
 *     ?SetFloatProperty@CCompositionAmbientLightMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x140239990 (-SetFloatProperty@CCompositionAmbientLightMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 */

__int64 __fastcall DirectComposition::CSharedResourceMarshaler<DirectComposition::CCompositionAmbientLightMarshaler,2>::SetFloatProperty(
        DirectComposition::CCompositionAmbientLightMarshaler *this,
        unsigned int a2,
        float a3,
        bool *a4)
{
  Feature_1282722105__private_IsEnabledDeviceUsageNoInline();
  return DirectComposition::CCompositionAmbientLightMarshaler::SetFloatProperty(this, a2, a3, a4);
}
