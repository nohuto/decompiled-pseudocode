/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_GamepadInvocation@@@details@wil@@QEAA_NXZ @ 0x180474A18
 * Callers:
 *     _anonymous_namespace_::GetViewTypeFromExperienceId @ 0x180145528 (_anonymous_namespace_--GetViewTypeFromExperienceId.c)
 *     _anonymous_namespace_::GetViewTypeFromInputKind @ 0x18024A8C4 (_anonymous_namespace_--GetViewTypeFromInputKind.c)
 *     ?OnInputPaneTryShowRequested@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputPaneTryShowRequestedEventArgs@45678@@Z @ 0x18047B2B0 (-OnInputPaneTryShowRequested@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@T.c)
 *     ?HandleInputPaneTryShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x1804838F0 (-HandleInputPaneTryShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAW4ShellRequestType@Text@Sh.c)
 *     ?StringifyCoreInputViewKind@@YAPEBDW4CoreInputViewKind@Core@ViewManagement@UI@Windows@@@Z @ 0x1804850B0 (-StringifyCoreInputViewKind@@YAPEBDW4CoreInputViewKind@Core@ViewManagement@UI@Windows@@@Z.c)
 *     ?StringifyCoreKeyboardModality@@YAPEBDW4CoreKeyboardModality@Core@Text@Internal@UI@Windows@@@Z @ 0x180485174 (-StringifyCoreKeyboardModality@@YAPEBDW4CoreKeyboardModality@Core@Text@Internal@UI@Windows@@@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_GamepadInvocation@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18046CEE4 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_GamepadInvocation@@@deta.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GamepadInvocation@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18046FDF8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GamepadInvocation@@@details@wil@@QEAAX_NW.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_GamepadInvocation>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GamepadInvocation>::GetCachedFeatureEnabledState(a1, &v4);
  v2 = v4 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GamepadInvocation>::ReportUsage(a1, v4 & 1, 3u);
  return v2;
}
