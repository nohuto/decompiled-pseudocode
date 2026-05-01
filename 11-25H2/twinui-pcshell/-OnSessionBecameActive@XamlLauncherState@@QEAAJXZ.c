/*
 * XREFs of ?OnSessionBecameActive@XamlLauncherState@@QEAAJXZ @ 0x1801E0174
 * Callers:
 *     ?OnMessage@XamlLauncherState@@UEAAJI_K_J@Z @ 0x1801E0010 (-OnMessage@XamlLauncherState@@UEAAJI_K_J@Z.c)
 * Callees:
 *     ??$OnSessionBecameActive@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x180049058 (--$OnSessionBecameActive@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SA.c)
 *     ?ShowSearchWithStart@XamlLauncherState@@AEAAJW4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x180254F48 (-ShowSearchWithStart@XamlLauncherState@@AEAAJW4IMMERSIVELAUNCHERSHOWFLAGS@@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_53115370@@@details@wil@@QEAA_NXZ @ 0x180456BE8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_53115370@@@details@wil@@QEAA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_RecoverFromIdleAndDesktopSwitchTimeoutFalseNegatives@@@details@wil@@QEAA_NXZ @ 0x180456C24 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_RecoverFromIdleAndDesktopSwitchTi.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncherState::OnSessionBecameActive(XamlLauncherState *this)
{
  int *v2; // rdi
  int v4; // [rsp+20h] [rbp-28h] BYREF
  XamlLauncherState *v5; // [rsp+28h] [rbp-20h]
  char v6; // [rsp+30h] [rbp-18h]

  v2 = (int *)((char *)this + 64);
  v4 = *((_DWORD *)this + 16);
  v5 = this;
  v6 = 1;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_53115370>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_53115370>::GetImpl'::`2'::impl)
    && *v2 == 5 )
  {
    XamlLauncherState::ShowSearchWithStart(this, 8LL);
  }
  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_RecoverFromIdleAndDesktopSwitchTimeoutFalseNegatives>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_RecoverFromIdleAndDesktopSwitchTimeoutFalseNegatives>::GetImpl'::`2'::impl) )
    *((_BYTE *)this + 1064) = 0;
  v6 = 0;
  StartWindowTelemetry::OnSessionBecameActive<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
    &v4,
    v2);
  return 0LL;
}
