/*
 * XREFs of _anonymous_namespace_::GetViewTypeFromInputKind @ 0x180255E08
 * Callers:
 *     _lambda_ff3af0abcf4100822182f80ac5bd56ae_::operator() @ 0x18045ED54 (_lambda_ff3af0abcf4100822182f80ac5bd56ae_--operator().c)
 * Callees:
 *     ??$InvalidInputKind@I@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAI@Z @ 0x1802CAE74 (--$InvalidInputKind@I@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAI@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_GamepadInvocation@@@details@wil@@QEAA_NXZ @ 0x18046894C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_GamepadInvocation@@@details@wil@@.c)
 */

__int64 __fastcall anonymous_namespace_::GetViewTypeFromInputKind(int a1)
{
  unsigned int *v2; // rax
  int v4; // [rsp+38h] [rbp+10h] BYREF

  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_GamepadInvocation>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_GamepadInvocation>::GetImpl'::`2'::impl) )
  {
    v2 = (unsigned int *)&unk_180780EA0;
    while ( a1 != v2[1] )
    {
      v2 += 2;
      if ( v2 == (unsigned int *)&unk_180780F18 )
        goto LABEL_9;
    }
  }
  else
  {
    v2 = (unsigned int *)&unk_180780E30;
    while ( a1 != v2[1] )
    {
      v2 += 2;
      if ( v2 == (unsigned int *)&unk_180780EA0 )
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
