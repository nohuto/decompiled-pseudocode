/*
 * XREFs of ?GetInstalledPackageVersion@LockScreenWidgetPackageHelperBase@@IEAA?AUPackageVersion@ApplicationModel@Windows@winrt@@AEBUhstring@5@@Z @ 0x1805AE770
 * Callers:
 *     ??R_lambda_c63df5938b5e32cbd3483994e088b3e3_@@QEAA@AEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@AEBUIInspectable@Foundation@67@@Z @ 0x1805A9594 (--R_lambda_c63df5938b5e32cbd3483994e088b3e3_@@QEAA@AEBUAppInstallItem@InstallControl@Preview@Sto.c)
 *     LockScreenWidgetPackageHelperBase::InstallInboxedPackageAsync$_ResumeCoro$1 @ 0x1805AF730 (LockScreenWidgetPackageHelperBase--InstallInboxedPackageAsync$_ResumeCoro$1.c)
 *     LockScreenWidgetPackageHelperBase::TryInstallStoreApplicationAsync$_ResumeCoro$1 @ 0x1805B5220 (LockScreenWidgetPackageHelperBase--TryInstallStoreApplicationAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?CreateInstanceAsync@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics@UITaskGroupDataSourceAdapterStatics@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180062824 (-CreateInstanceAsync@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStat.c)
 *     ??9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800F5554 (--9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?begin@?$consume_Windows_Foundation_Collections_IIterable@U?$IIterable@UPackage@ApplicationModel@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UPackage@ApplicationModel@45@@impl@winrt@@QEBA@XZ @ 0x1801EE0D8 (-begin@-$consume_Windows_Foundation_Collections_IIterable@U-$IIterable@UPackage@ApplicationModel.c)
 *     ??E?$consume_Windows_Foundation_Collections_IIterator@U?$IIterator@UPackage@ApplicationModel@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UPackage@ApplicationModel@45@@impl@winrt@@QEAA@XZ @ 0x18021655C (--E-$consume_Windows_Foundation_Collections_IIterator@U-$IIterator@UPackage@ApplicationModel@Win.c)
 *     ??0PackageManager@Deployment@Management@Windows@winrt@@QEAA@XZ @ 0x1802C00C0 (--0PackageManager@Deployment@Management@Windows@winrt@@QEAA@XZ.c)
 *     ?Current@?$consume_Windows_Foundation_Collections_IIterator@U?$IIterator@UPackage@ApplicationModel@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UPackage@ApplicationModel@45@@impl@winrt@@QEBA@XZ @ 0x1802CE13C (-Current@-$consume_Windows_Foundation_Collections_IIterator@U-$IIterator@UPackage@ApplicationMod.c)
 *     ?FindPackagesForUser@?$consume_Windows_Management_Deployment_IPackageManager@UIPackageManager@Deployment@Management@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@0@Z @ 0x1803A7E10 (-FindPackagesForUser@-$consume_Windows_Management_Deployment_IPackageManager@UIPackageManager@De.c)
 *     ?Version@?$consume_Windows_ApplicationModel_IPackageId@UIPackageId@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1803B1D48 (-Version@-$consume_Windows_ApplicationModel_IPackageId@UIPackageId@ApplicationModel@Windows@winr.c)
 */

// Hidden C++ exception states: #wind=7
_QWORD *__fastcall LockScreenWidgetPackageHelperBase::GetInstalledPackageVersion(
        void (__fastcall ***a1)(_QWORD, __int64 *, __int64 *),
        _QWORD *a2,
        __int64 *a3)
{
  __int64 **v5; // rax
  void (__fastcall ***v7)(_QWORD, __int64 *, __int64 *); // [rsp+20h] [rbp-60h] BYREF
  __int64 *v8; // [rsp+28h] [rbp-58h] BYREF
  void (__fastcall ***v9)(_QWORD, __int64 *, __int64 *); // [rsp+30h] [rbp-50h] BYREF
  __int64 v10[4]; // [rsp+38h] [rbp-48h] BYREF
  _QWORD v11[5]; // [rsp+58h] [rbp-28h] BYREF
  void (__fastcall ***v12)(_QWORD, __int64 *, __int64 *); // [rsp+A0h] [rbp+20h] BYREF
  struct IUnknown v13; // [rsp+B0h] [rbp+30h] BYREF
  __int64 *v14; // [rsp+B8h] [rbp+38h] BYREF

  v12 = a1;
  v5 = (__int64 **)winrt::Windows::Management::Deployment::PackageManager::PackageManager(&v13);
  v10[0] = *a3;
  v11[0] = 0LL;
  winrt::impl::consume_Windows_Management_Deployment_IPackageManager<winrt::Windows::Management::Deployment::IPackageManager>::FindPackagesForUser(
    v5,
    &v8,
    v11,
    v10);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v13);
  winrt::impl::consume_Windows_Foundation_Collections_IIterable<winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::ApplicationModel::Package>,winrt::Windows::ApplicationModel::Package>::begin(
    &v8,
    &v12);
  v7 = 0LL;
  if ( winrt::Windows::Foundation::operator!=(&v12, &v7) )
  {
    v9 = 0LL;
    do
    {
      winrt::impl::consume_Windows_Foundation_Collections_IIterator<winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::ApplicationModel::Package>,winrt::Windows::ApplicationModel::Package>::Current(
        (__int64 *)&v12,
        (winrt *)&v14);
      if ( winrt::Windows::Foundation::operator!=((void (__fastcall ****)(_QWORD, __int64 *, __int64 *))&v14, &v9) )
      {
        winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
          &v14,
          &v13);
        if ( v13.lpVtbl )
        {
          winrt::impl::consume_Windows_ApplicationModel_IPackageId<winrt::Windows::ApplicationModel::IPackageId>::Version(
            (__int64 *)&v13,
            a2);
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v13);
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v14);
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v7);
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v12);
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v8);
          return a2;
        }
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v13);
      }
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v14);
      winrt::impl::consume_Windows_Foundation_Collections_IIterator<winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::ApplicationModel::Package>,winrt::Windows::ApplicationModel::Package>::operator++((__int64 *)&v12);
    }
    while ( winrt::Windows::Foundation::operator!=(&v12, &v7) );
  }
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v7);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v12);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v8);
  *a2 = 0LL;
  return a2;
}
