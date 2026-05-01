/*
 * XREFs of ?IsDashboardExtensionPresent@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CA_NXZ @ 0x18026D69C
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::ShowDashboardAsync$_ResumeCoro$1 @ 0x180278C40 (winrt--Windows--Internal--Shell--implementation--DashboardManager--ShowDashboardAsync$_ResumeCor.c)
 *     ?EnsureDashboardExtensionCreated@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUDashboardExtension@Dashboard@3UI@WindowsUdk@6@AEAUguid@6@@Z @ 0x1805CF760 (-EnsureDashboardExtensionCreated@DashboardManager@implementation@Shell@Internal@Windows@winrt@@A.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::ToggleDashboardVisibilityAsync$_ResumeCoro$1 @ 0x1805D81C0 (winrt--Windows--Internal--Shell--implementation--DashboardManager--ToggleDashboardVisibilityAsyn.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::UpdateWidgetsTelemetryAsync$_ResumeCoro$1 @ 0x1805D9670 (winrt--Windows--Internal--Shell--implementation--DashboardManager--UpdateWidgetsTelemetryAsync$_.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180030428 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     _anonymous_namespace_::DashboardExtensionVersion::DashboardExtensionVersion @ 0x18013B8F4 (_anonymous_namespace_--DashboardExtensionVersion--DashboardExtensionVersion.c)
 *     std::_Optional_destruct_base__anonymous_namespace_::DashboardExtensionVersion_0_::__Optional_destruct_base__anonymous_namespace_::DashboardExtensionVersion_0_ @ 0x1801C9850 (std--_Optional_destruct_base__anonymous_namespace_--DashboardExtensionVersion_0_--__Optional_des.c)
 *     _anonymous_namespace_::DashboardExtensionVersion::_DashboardExtensionVersion @ 0x1801C986C (_anonymous_namespace_--DashboardExtensionVersion--_DashboardExtensionVersion.c)
 *     std::optional__anonymous_namespace_::DashboardExtensionVersion_::value @ 0x180208B60 (std--optional__anonymous_namespace_--DashboardExtensionVersion_--value.c)
 *     _anonymous_namespace_::DashboardExtensionVersion::operator__ @ 0x180208B80 (_anonymous_namespace_--DashboardExtensionVersion--operator__.c)
 *     _anonymous_namespace_::TryGetAvailableDashboardExtensionVersion @ 0x180279994 (_anonymous_namespace_--TryGetAvailableDashboardExtensionVersion.c)
 *     _anonymous_namespace_::DashboardExtensionVersion::DashboardExtensionVersion_0 @ 0x180295C90 (_anonymous_namespace_--DashboardExtensionVersion--DashboardExtensionVersion_0.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _anonymous_namespace_::DashboardExtensionVersion::operator_ @ 0x1805CC5E8 (_anonymous_namespace_--DashboardExtensionVersion--operator_.c)
 *     _anonymous_namespace_::FindDashboardAppExtension @ 0x1805CFC68 (_anonymous_namespace_--FindDashboardAppExtension.c)
 *     _anonymous_namespace_::TryGetAvailableDashboardExtensionVersion_0 @ 0x1805D89C0 (_anonymous_namespace_--TryGetAvailableDashboardExtensionVersion_0.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_49686193@@@details@wil@@QEAA_NXZ @ 0x1805DA9EC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_49686193@@@details@wil@@QEAA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_Widgets_ExtensionLookupFix@@@details@wil@@QEAA_NXZ @ 0x1805DAEB4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_Widgets_ExtensionLookup.c)
 */

// Hidden C++ exception states: #wind=4
char winrt::Windows::Internal::Shell::implementation::DashboardManager::IsDashboardExtensionPresent(void)
{
  char v0; // bl
  __int64 DashboardAppExtension; // rax
  __int64 AvailableDashboardExtensionVersion_0; // rax
  _QWORD *v3; // rax
  _BYTE v5[56]; // [rsp+20h] [rbp-59h] BYREF
  char v6; // [rsp+58h] [rbp-21h]
  _BYTE v7[8]; // [rsp+60h] [rbp-19h] BYREF
  __int64 v8[8]; // [rsp+68h] [rbp-11h] BYREF
  void *v9[4]; // [rsp+A8h] [rbp+2Fh] BYREF

  v0 = 0;
  v6 = 0;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_Widgets_ExtensionLookupFix>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_Widgets_ExtensionLookupFix>::GetImpl'::`2'::impl)
    && (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_49686193>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_49686193>::GetImpl'::`2'::impl) )
  {
    DashboardAppExtension = anonymous_namespace_::FindDashboardAppExtension(v7);
    AvailableDashboardExtensionVersion_0 = anonymous_namespace_::TryGetAvailableDashboardExtensionVersion_0(
                                             v8,
                                             DashboardAppExtension);
  }
  else
  {
    AvailableDashboardExtensionVersion_0 = anonymous_namespace_::TryGetAvailableDashboardExtensionVersion(v8);
  }
  if ( *(_BYTE *)(AvailableDashboardExtensionVersion_0 + 56) )
  {
    anonymous_namespace_::DashboardExtensionVersion::DashboardExtensionVersion_0(
      v5,
      AvailableDashboardExtensionVersion_0);
    v6 = 1;
  }
  std::_Optional_destruct_base__anonymous_namespace_::DashboardExtensionVersion_0_::__Optional_destruct_base__anonymous_namespace_::DashboardExtensionVersion_0_((__int64)v8);
  if ( v6 )
  {
    std::wstring::wstring((__int64)v9, (__int64)L"0.1");
    anonymous_namespace_::DashboardExtensionVersion::DashboardExtensionVersion((__int64)v8, v9);
    std::wstring::_Tidy_deallocate(v9);
    v3 = (_QWORD *)std::optional__anonymous_namespace_::DashboardExtensionVersion_::value((__int64)v5);
    v0 = anonymous_namespace_::DashboardExtensionVersion::operator__(v3, v8);
    anonymous_namespace_::DashboardExtensionVersion::_DashboardExtensionVersion(v8);
  }
  std::_Optional_destruct_base__anonymous_namespace_::DashboardExtensionVersion_0_::__Optional_destruct_base__anonymous_namespace_::DashboardExtensionVersion_0_((__int64)v5);
  return v0;
}
