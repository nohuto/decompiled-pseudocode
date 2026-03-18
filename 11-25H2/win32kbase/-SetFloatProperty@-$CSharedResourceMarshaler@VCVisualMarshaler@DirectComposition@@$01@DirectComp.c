/*
 * XREFs of ?SetFloatProperty@?$CSharedResourceMarshaler@VCVisualMarshaler@DirectComposition@@$01@DirectComposition@@UEAAJIMPEA_N@Z @ 0x140228AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetFloatProperty@CVisualMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1400CD770 (-SetFloatProperty@CVisualMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 *     Feature_1282722105__private_IsEnabledDeviceUsageNoInline @ 0x140228EC8 (Feature_1282722105__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall DirectComposition::CSharedResourceMarshaler<DirectComposition::CVisualMarshaler,2>::SetFloatProperty(
        DirectComposition::CVisualMarshaler *this,
        unsigned int a2,
        float a3,
        bool *a4)
{
  Feature_1282722105__private_IsEnabledDeviceUsageNoInline();
  return DirectComposition::CVisualMarshaler::SetFloatProperty(this, a2, a3, a4);
}
