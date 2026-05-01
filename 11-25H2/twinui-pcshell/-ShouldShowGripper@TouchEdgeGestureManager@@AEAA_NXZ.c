/*
 * XREFs of ?ShouldShowGripper@TouchEdgeGestureManager@@AEAA_NXZ @ 0x180569CBC
 * Callers:
 *     ?StartTouchEdgeGesture@TouchEdgeGestureManager@@QEAA_NXZ @ 0x180569EA8 (-StartTouchEdgeGesture@TouchEdgeGestureManager@@QEAA_NXZ.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x1800286D0 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??DIterator@?$ObjectArrayAdapterImpl@UIVirtualDesktop@@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@details@@QEAA?AV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@XZ @ 0x180192E88 (--DIterator@-$ObjectArrayAdapterImpl@UIVirtualDesktop@@V-$ComPtr@UIVirtualDesktop@@@WRL@Microsof.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@QEAA_NXZ @ 0x1802ED918 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@QEAA_NXZ.c)
 *     ??$IsInGamingFullScreenExperience@AEB_N@TouchEdgeGestureTelemetry@@SAXAEB_N@Z @ 0x180568C00 (--$IsInGamingFullScreenExperience@AEB_N@TouchEdgeGestureTelemetry@@SAXAEB_N@Z.c)
 *     _lambda_507ae1b140dd0534ced08e530f119204_::operator() @ 0x180569400 (_lambda_507ae1b140dd0534ced08e530f119204_--operator().c)
 *     _lambda_f50d75b95467dfcfa5462755f3ee65a6_::operator() @ 0x180569848 (_lambda_f50d75b95467dfcfa5462755f3ee65a6_--operator().c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall TouchEdgeGestureManager::ShouldShowGripper(IUnknown **this)
{
  char v2; // di
  __int64 v3; // rcx
  bool v4; // bl
  IUnknown **v6[2]; // [rsp+20h] [rbp-10h] BYREF
  IUnknown **v7; // [rsp+58h] [rbp+28h] BYREF
  __int64 v8; // [rsp+60h] [rbp+30h] BYREF

  v2 = 1;
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_52580392>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_52580392>::GetImpl'::`2'::impl) )
  {
    v4 = (unsigned int)IsGamingFullScreenExperienceSupported() && (unsigned int)IsGamingFullScreenExperienceActive(v3);
    LOBYTE(v7) = v4;
    TouchEdgeGestureTelemetry::IsInGamingFullScreenExperience<bool const &>((char *)&v7);
    if ( v4 )
      return 0;
  }
  details::ObjectArrayAdapterImpl<IVirtualDesktop,Microsoft::WRL::ComPtr<IVirtualDesktop>>::Iterator::operator*(
    (__int64)(this + 12),
    &v8);
  v7 = (IUnknown **)&v8;
  v6[0] = this;
  v6[1] = (IUnknown **)&v8;
  if ( !lambda_507ae1b140dd0534ced08e530f119204_::operator()(&v7)
    && !lambda_f50d75b95467dfcfa5462755f3ee65a6_::operator()(v6) )
  {
    v2 = 0;
  }
  if ( v8 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v8);
  return v2;
}
