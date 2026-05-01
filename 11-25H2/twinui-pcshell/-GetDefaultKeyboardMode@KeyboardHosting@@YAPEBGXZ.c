/*
 * XREFs of ?GetDefaultKeyboardMode@KeyboardHosting@@YAPEBGXZ @ 0x180472818
 * Callers:
 *     ?InitializeShellPreferencesDesktop@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x180255E7C (-InitializeShellPreferencesDesktop@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_XboxGamepadSupport@@@details@wil@@QEAA_NXZ @ 0x180468B2C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_XboxGamepadSupport@@@details@wil@.c)
 */

const unsigned __int16 *__fastcall KeyboardHosting::GetDefaultKeyboardMode(KeyboardHosting *this)
{
  const unsigned __int16 *result; // rax
  int v2; // [rsp+30h] [rbp+8h] BYREF

  if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_XboxGamepadSupport>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_XboxGamepadSupport>::GetImpl'::`2'::impl) )
    return L"wide";
  v2 = 0;
  RtlGetDeviceFamilyInfoEnum(0LL, 0LL, &v2);
  result = L"wide";
  if ( v2 == 46 )
    return L"controller";
  return result;
}
