/*
 * XREFs of ??_D?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x1800651EC
 * Callers:
 *     ?GetInvokeTypeFromContextAndAnimationProperties@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXUhstring@6@UShellViewAnimationProperties@3UI@WindowsUdk@6@AEAV?$optional@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180275240 (-GetInvokeTypeFromContextAndAnimationProperties@DashboardManager@implementation@Shell@Internal@W.c)
 *     ??_E?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UEAAPEAXI@Z @ 0x18031B4CC (--_E-$basic_stringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@UEAAPEAXI@Z.c)
 *     GamingOverlayExperienceManager::LaunchForResultsAsyncInternal$_ResumeCoro$1 @ 0x180348DF0 (GamingOverlayExperienceManager--LaunchForResultsAsyncInternal$_ResumeCoro$1.c)
 *     ?IsWindowVisibleInContactPanel@PeoplePaneViewManager@@AEAAJPEAUHWND__@@PEBGPEAH@Z @ 0x1804014B8 (-IsWindowVisibleInContactPanel@PeoplePaneViewManager@@AEAAJPEAUHWND__@@PEBGPEAH@Z.c)
 *     ?GetKeyPathForHwnd@Util@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_J@Z @ 0x180626F20 (-GetKeyPathForHwnd@Util@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@_J@Z.c)
 *     __anonymous_namespace_::DashboardExtensionVersion::DashboardExtensionVersion_::_1_::dtor$2 @ 0x1806A7709 (__anonymous_namespace_--DashboardExtensionVersion--DashboardExtensionVersion_--_1_--dtor$2.c)
 *     _GamingOverlayExperienceManager::LaunchForResultsAsyncInternal$_ResumeCoro$1_::_1_::dtor$4 @ 0x1806BD1CE (_GamingOverlayExperienceManager--LaunchForResultsAsyncInternal$_ResumeCoro$1_--_1_--dtor$4.c)
 *     _PeoplePaneViewManager::IsWindowVisibleInContactPanel_::_1_::dtor$9 @ 0x1806C1C26 (_PeoplePaneViewManager--IsWindowVisibleInContactPanel_--_1_--dtor$9.c)
 *     _winrt::Windows::Internal::Shell::implementation::DashboardManager::GetInvokeTypeFromContextAndAnimationProperties_::_1_::dtor$4 @ 0x1806D335D (_winrt--Windows--Internal--Shell--implementation--DashboardManager--GetInvokeTypeFr_ea_1806D335D.c)
 *     _winrt::Windows::Internal::Shell::implementation::DashboardManager::GetInvokeTypeFromContextAndAnimationProperties_::_1_::dtor$7 @ 0x1806D3381 (_winrt--Windows--Internal--Shell--implementation--DashboardManager--GetInvokeTypeFr_ea_1806D3381.c)
 *     _Util::GetKeyPathForHwnd_::_1_::dtor$0 @ 0x1806DAE61 (_Util--GetKeyPathForHwnd_--_1_--dtor$0.c)
 * Callees:
 *     ??1?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UEAA@XZ @ 0x18006521C (--1-$basic_stringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@UEAA@XZ.c)
 */

__int64 __fastcall std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::`vbase destructor'(
        __int64 a1)
{
  __int64 v1; // rbx

  v1 = a1 + 152;
  std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::~basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>(a1 + 152);
  return std::basic_ios<unsigned short>::~basic_ios<unsigned short,std::char_traits<unsigned short>>(v1);
}
