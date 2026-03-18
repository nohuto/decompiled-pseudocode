/*
 * XREFs of ?IsOverlayRequired@CDxHandleBitmapRealization@@UEBA_NXZ @ 0x180034140
 * Callers:
 *     <none>
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_D3D11ShaderAccessRestrictedResource@@@details@wil@@QEAA_NXZ @ 0x1800339A0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_D3D11ShaderAccessRestrictedResour.c)
 */

char __fastcall CDxHandleBitmapRealization::IsOverlayRequired(CDxHandleBitmapRealization *this, __int64 a2)
{
  char IsEnabled; // al
  int v4; // edx

  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_D3D11ShaderAccessRestrictedResource>::__private_IsEnabled(
                (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_D3D11ShaderAccessRestrictedResource>::GetImpl'::`2'::impl,
                a2);
  v4 = *((_DWORD *)this - 22) & 0x80;
  if ( !IsEnabled )
    return v4 != 0;
  if ( v4 )
    return 1;
  return *((_BYTE *)this + 67) == 0;
}
