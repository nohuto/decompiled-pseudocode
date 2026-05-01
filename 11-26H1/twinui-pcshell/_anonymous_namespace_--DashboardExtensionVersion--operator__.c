/*
 * XREFs of _anonymous_namespace_::DashboardExtensionVersion::operator__ @ 0x180208B80
 * Callers:
 *     ?IsDashboardExtensionPresent@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CA_NXZ @ 0x18026D69C (-IsDashboardExtensionPresent@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CA_NX.c)
 *     ?IsDashboardExtensionVersionPresent@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CA_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18026D7BC (-IsDashboardExtensionVersionPresent@DashboardManager@implementation@Shell@Internal@Windows@winrt.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::VerifyAndActivateAppAsync$_ResumeCoro$1 @ 0x180279DE0 (winrt--Windows--Internal--Shell--implementation--DashboardManager--VerifyAndActivateAppAsync$_Re.c)
 * Callees:
 *     ??$lexicographical_compare@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@H@std@@@std@@@std@@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@H@std@@@std@@@2@U?$less@X@2@@std@@YA_NV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@H@std@@@std@@@0@0V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@H@std@@@std@@@0@1U?$less@X@0@@Z @ 0x180208BA8 (--$lexicographical_compare@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@H@std@@@std@@@std.c)
 */

char __fastcall anonymous_namespace_::DashboardExtensionVersion::operator__(_QWORD *a1, _QWORD *a2)
{
  return std::lexicographical_compare<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<int>>>,std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<int>>>,std::less<void>>(
           *a1,
           a1[1],
           *a2,
           a2[1]) ^ 1;
}
