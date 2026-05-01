/*
 * XREFs of ?begin@?$consume_Windows_Foundation_Collections_IIterable@U?$IIterable@UPackage@ApplicationModel@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UPackage@ApplicationModel@45@@impl@winrt@@QEBA@XZ @ 0x1801EE0D8
 * Callers:
 *     ?GetInstalledPackageVersion@LockScreenWidgetPackageHelperBase@@IEAA?AUPackageVersion@ApplicationModel@Windows@winrt@@AEBUhstring@5@@Z @ 0x1805AE770 (-GetInstalledPackageVersion@LockScreenWidgetPackageHelperBase@@IEAA-AUPackageVersion@Application.c)
 *     ?IsPackageInstalled@LockScreenWidgetPackageHelperBase@@IEAA_NAEBUhstring@winrt@@AEBUPackageVersion@ApplicationModel@Windows@3@@Z @ 0x1805B0854 (-IsPackageInstalled@LockScreenWidgetPackageHelperBase@@IEAA_NAEBUhstring@winrt@@AEBUPackageVersi.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?CreateInstanceAsync@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics@UITaskGroupDataSourceAdapterStatics@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180062824 (-CreateInstanceAsync@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStat.c)
 *     ?IsManagedByOrganization@?$consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeSetting@UITapInvokeSetting@TouchKeyboard@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1801EE130 (-IsManagedByOrganization@-$consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeSetting@UITapI.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::impl::consume_Windows_Foundation_Collections_IIterable<winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::ApplicationModel::Package>,winrt::Windows::ApplicationModel::Package>::begin(
        __int64 **a1,
        _QWORD *a2)
{
  _QWORD *v4; // [rsp+48h] [rbp+10h] BYREF

  v4 = a2;
  winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
    a1,
    &v4);
  if ( (unsigned __int8)winrt::impl::consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeSetting<winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSetting>::IsManagedByOrganization(&v4) )
  {
    *a2 = v4;
  }
  else
  {
    *a2 = 0LL;
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v4);
  }
  return a2;
}
