/*
 * XREFs of _anonymous_namespace_::GetDashboardExtensionName @ 0x1805AE3A0
 * Callers:
 *     ?CreateInstance@DashboardActivator@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180274D70 (-CreateInstance@DashboardActivator@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIUnknow.c)
 *     _anonymous_namespace_::FindDashboardAppExtension @ 0x1805AB9E8 (_anonymous_namespace_--FindDashboardAppExtension.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::UpdateWidgetsTelemetryAsync$_ResumeCoro$1 @ 0x1805B5D00 (winrt--Windows--Internal--Shell--implementation--DashboardManager--UpdateWidgetsTel_ea_1805B5D00.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800AC1A4 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1800AD16C (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ?Find@AppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@SA@AEBUhstring@param@5@AEBW4AppExtensionOptions@2345@@Z @ 0x1801C80BC (-Find@AppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@SA@AEBUhstring@param@5@AEBW4.c)
 *     _anonymous_namespace_::IsWidgetsThirdPartyFeedEnabledByRegionalPolicy @ 0x1805B0FE0 (_anonymous_namespace_--IsWidgetsThirdPartyFeedEnabledByRegionalPolicy.c)
 *     ?__private_GetVariant@?$FeatureImpl@U__WilFeatureTraits_Feature_49686193@@@details@wil@@QEAA?AW4Variant_49686193@@W4VariantReportingKind@3@_N@Z @ 0x1805B7054 (-__private_GetVariant@-$FeatureImpl@U__WilFeatureTraits_Feature_49686193@@@details@wil@@QEAA-AW4.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_49686193@@@details@wil@@QEAA_NXZ @ 0x1805B709C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_49686193@@@details@wil@@QEAA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_55368383@@@details@wil@@QEAA_NXZ @ 0x1805B7194 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_55368383@@@details@wil@@QEAA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_56189266@@@details@wil@@QEAA_NXZ @ 0x1805B7304 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_56189266@@@details@wil@@QEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=1
winrt::hstring *__fastcall anonymous_namespace_::GetDashboardExtensionName(winrt::hstring *this)
{
  __int64 v2; // rbx
  const unsigned __int16 *v3; // rdx
  _QWORD v5[5]; // [rsp+28h] [rbp-28h] BYREF
  int v6; // [rsp+78h] [rbp+28h] BYREF
  char v7; // [rsp+80h] [rbp+30h] BYREF
  volatile signed __int32 *v8; // [rsp+88h] [rbp+38h] BYREF

  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_49686193>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_49686193>::GetImpl'::`2'::impl)
    && ((unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_55368383>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_55368383>::GetImpl'::`2'::impl)
     || (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_49686193>::__private_GetVariant(&`wil::Feature<__WilFeatureTraits_Feature_49686193>::GetImpl'::`2'::impl) == 1
     || (unsigned __int8)anonymous_namespace_::IsWidgetsThirdPartyFeedEnabledByRegionalPolicy())
    && (!(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_56189266>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_56189266>::GetImpl'::`2'::impl)
      ? (v6 = 4)
      : (v6 = 20),
        v5[0] = *(_QWORD *)winrt::hstring::hstring(
                             (winrt::hstring *)&v8,
                             L"com.microsoft.windows.extension.widgetboard"),
        v2 = *(_QWORD *)winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension::Find(
                          (const struct winrt::param::hstring *)&v7,
                          (const enum winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtensionOptions *)v5,
                          (__int64)&v6),
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v7),
        winrt::handle_type<winrt::impl::hstring_traits>::close(&v8),
        v2) )
  {
    v3 = L"com.microsoft.windows.extension.widgetboard";
  }
  else
  {
    v3 = L"com.microsoft.windows.extension.dashboard";
  }
  winrt::hstring::hstring(this, v3);
  return this;
}
