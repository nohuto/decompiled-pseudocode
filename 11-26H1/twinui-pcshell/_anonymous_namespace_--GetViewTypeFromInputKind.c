/*
 * XREFs of _anonymous_namespace_::GetViewTypeFromInputKind @ 0x18024A8C4
 * Callers:
 *     _lambda_76f340d5d82a2ae937276f5837d7f307_::operator() @ 0x18046A598 (_lambda_76f340d5d82a2ae937276f5837d7f307_--operator().c)
 * Callees:
 *     ??$InvalidInputKind@I@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAI@Z @ 0x1802C264C (--$InvalidInputKind@I@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAI@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_GamepadInvocation@@@details@wil@@QEAA_NXZ @ 0x180474A18 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_GamepadInvocation@@@_ea_180474A18.c)
 */

__int64 __fastcall anonymous_namespace_::GetViewTypeFromInputKind(int a1)
{
  unsigned int *v2; // rax
  int v4; // [rsp+38h] [rbp+10h] BYREF

  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_GamepadInvocation>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_GamepadInvocation>::GetImpl'::`2'::impl) )
  {
    v2 = (unsigned int *)&unk_1807AA480;
    while ( a1 != v2[1] )
    {
      v2 += 2;
      if ( v2 == (unsigned int *)&unk_1807AA4F8 )
        goto LABEL_9;
    }
  }
  else
  {
    v2 = (unsigned int *)&unk_1807AA5C0;
    while ( a1 != v2[1] )
    {
      v2 += 2;
      if ( v2 == (unsigned int *)&winrt::impl::guid_v<winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics4> )
      {
LABEL_9:
        v4 = a1;
        TouchKeyboardExperienceTelemetryLogger::InvalidInputKind<unsigned int>(&v4);
        return 0xFFFFFFFFLL;
      }
    }
  }
  return *v2;
}
