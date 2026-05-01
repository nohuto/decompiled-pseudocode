/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_HangOnCoreKeyboardHandler@@@details@wil@@QEAA_NXZ @ 0x1804806D8
 * Callers:
 *     ?OnCoreKeyboardHardwareKeyboardUIEnabled@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@45678@@Z @ 0x18024E280 (-OnCoreKeyboardHardwareKeyboardUIEnabled@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardMa.c)
 *     ??0TabTipAdapter@KeyboardHosting@@QEAA@PEAUIInputExperienceHost@Text@Shell@Internal@Windows@@PEAUIShellKeyboardHostingPolicy@3456@PEAUIDesktopKeyboardHostingPolicy@1456@PEAUIInputInjectionValidityHelper@1456@@Z @ 0x1802937DC (--0TabTipAdapter@KeyboardHosting@@QEAA@PEAUIInputExperienceHost@Text@Shell@Internal@Windows@@PEA.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_HangOnCoreKeyboardHandler@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180479604 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_HangOnCoreKeyboardHandle.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_HangOnCoreKeyboardHandler@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18047DD54 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_HangOnCoreKeyboardHandler@@@details@wil@@.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_HangOnCoreKeyboardHandler>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_HangOnCoreKeyboardHandler>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_HangOnCoreKeyboardHandler>::ReportUsage(a1, v5 & 1, v3);
  return v2;
}
