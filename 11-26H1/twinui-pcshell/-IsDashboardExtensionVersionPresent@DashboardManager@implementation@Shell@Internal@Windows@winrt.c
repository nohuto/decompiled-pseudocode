/*
 * XREFs of ?IsDashboardExtensionVersionPresent@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CA_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18026D7BC
 * Callers:
 *     ?GetInvokeTypeFromContextAndAnimationProperties@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXUhstring@6@UShellViewAnimationProperties@3UI@WindowsUdk@6@AEAV?$optional@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18026D23C (-GetInvokeTypeFromContextAndAnimationProperties@DashboardManager@implementation@Shell@Internal@W.c)
 * Callees:
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

// Hidden C++ exception states: #wind=2
char __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::IsDashboardExtensionVersionPresent(
        void **a1)
{
  __int64 DashboardAppExtension; // rax
  __int64 AvailableDashboardExtensionVersion_0; // rax
  _QWORD *v4; // rax
  char v5; // bl
  _BYTE v7[56]; // [rsp+20h] [rbp-39h] BYREF
  char v8; // [rsp+58h] [rbp-1h]
  _BYTE v9[8]; // [rsp+60h] [rbp+7h] BYREF
  __int64 v10[8]; // [rsp+68h] [rbp+Fh] BYREF

  v8 = 0;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_Widgets_ExtensionLookupFix>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_Widgets_ExtensionLookupFix>::GetImpl'::`2'::impl)
    && (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_49686193>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_49686193>::GetImpl'::`2'::impl) )
  {
    DashboardAppExtension = anonymous_namespace_::FindDashboardAppExtension(v9);
    AvailableDashboardExtensionVersion_0 = anonymous_namespace_::TryGetAvailableDashboardExtensionVersion_0(
                                             v10,
                                             DashboardAppExtension);
  }
  else
  {
    AvailableDashboardExtensionVersion_0 = anonymous_namespace_::TryGetAvailableDashboardExtensionVersion(v10);
  }
  if ( *(_BYTE *)(AvailableDashboardExtensionVersion_0 + 56) )
  {
    anonymous_namespace_::DashboardExtensionVersion::DashboardExtensionVersion_0(
      v7,
      AvailableDashboardExtensionVersion_0);
    v8 = 1;
  }
  std::_Optional_destruct_base__anonymous_namespace_::DashboardExtensionVersion_0_::__Optional_destruct_base__anonymous_namespace_::DashboardExtensionVersion_0_((__int64)v10);
  if ( v8 )
  {
    anonymous_namespace_::DashboardExtensionVersion::DashboardExtensionVersion((__int64)v10, a1);
    v4 = (_QWORD *)std::optional__anonymous_namespace_::DashboardExtensionVersion_::value((__int64)v7);
    v5 = anonymous_namespace_::DashboardExtensionVersion::operator__(v4, v10);
    anonymous_namespace_::DashboardExtensionVersion::_DashboardExtensionVersion(v10);
  }
  else
  {
    v5 = 0;
  }
  std::_Optional_destruct_base__anonymous_namespace_::DashboardExtensionVersion_0_::__Optional_destruct_base__anonymous_namespace_::DashboardExtensionVersion_0_((__int64)v7);
  return v5;
}
