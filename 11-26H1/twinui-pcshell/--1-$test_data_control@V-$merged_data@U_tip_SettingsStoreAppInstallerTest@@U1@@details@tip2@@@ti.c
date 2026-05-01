/*
 * XREFs of ??1?$test_data_control@V?$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1805CC238
 * Callers:
 *     ??R_lambda_9f5c7493512f30cd4ebf6dfda1287bbc_@@QEAA@AEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@AEBUIInspectable@Foundation@67@@Z @ 0x1805CD4A8 (--R_lambda_9f5c7493512f30cd4ebf6dfda1287bbc_@@QEAA@AEBUAppInstallItem@InstallControl@Preview@Sto.c)
 *     ??R_lambda_c63df5938b5e32cbd3483994e088b3e3_@@QEAA@AEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@AEBUIInspectable@Foundation@67@@Z @ 0x1805CDA54 (--R_lambda_c63df5938b5e32cbd3483994e088b3e3_@@QEAA@AEBUAppInstallItem@InstallControl@Preview@Sto.c)
 *     LockScreenWidgetPackageHelperBase::TryInstallStoreApplicationAsync$_ResumeCoro$1 @ 0x1805D8C60 (LockScreenWidgetPackageHelperBase--TryInstallStoreApplicationAsync$_ResumeCoro$1.c)
 *     __lambda_9f5c7493512f30cd4ebf6dfda1287bbc_::operator()_::_1_::dtor$1 @ 0x1806FABBE (__lambda_9f5c7493512f30cd4ebf6dfda1287bbc_--operator()_--_1_--dtor$1.c)
 *     __lambda_c63df5938b5e32cbd3483994e088b3e3_::operator()_::_1_::dtor$2 @ 0x1806FAC1E (__lambda_c63df5938b5e32cbd3483994e088b3e3_--operator()_--_1_--dtor$2.c)
 *     _LockScreenWidgetPackageHelperBase::TryInstallStoreApplicationAsync$_ResumeCoro$1_::_1_::dtor$1 @ 0x1806FCECD (_LockScreenWidgetPackageHelperBase--TryInstallStoreApplicationAsync$_ResumeCoro$1_--_1_--dtor$1.c)
 *     _LockScreenWidgetPackageHelperBase::TryInstallStoreApplicationAsync$_ResumeCoro$1_::_1_::dtor$4 @ 0x1806FCFEE (_LockScreenWidgetPackageHelperBase--TryInstallStoreApplicationAsync$_ResumeCoro$1_--_1_--dtor$4.c)
 *     _LockScreenWidgetPackageHelperBase::TryInstallStoreApplicationAsync$_ResumeCoro$1_::_1_::dtor$15 @ 0x1806FD12C (_LockScreenWidgetPackageHelperBase--TryInstallStoreApplicationAsync$_ResumeCoro$1_--_1_--dtor$15.c)
 *     _LockScreenWidgetPackageHelperBase::TryInstallStoreApplicationAsync$_ResumeCoro$1_::_1_::dtor$17 @ 0x1806FD196 (_LockScreenWidgetPackageHelperBase--TryInstallStoreApplicationAsync$_ResumeCoro$1_--_1_--dtor$17.c)
 * Callees:
 *     ?close@?$test_data_control@V?$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@@tip2@@QEAAXXZ @ 0x1805DB080 (-close@-$test_data_control@V-$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@.c)
 */

__int64 __fastcall tip2::test_data_control<tip2::details::merged_data<_tip_SettingsStoreAppInstallerTest,_tip_SettingsStoreAppInstallerTest>>::~test_data_control<tip2::details::merged_data<_tip_SettingsStoreAppInstallerTest,_tip_SettingsStoreAppInstallerTest>>(
        void **a1)
{
  tip2::test_data_control<tip2::details::merged_data<_tip_SettingsStoreAppInstallerTest,_tip_SettingsStoreAppInstallerTest>>::close();
  return wil::com_ptr_t<tip2::details::merged_data<_tip_SettingsStoreAppInstallerTest,_tip_SettingsStoreAppInstallerTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_SettingsStoreAppInstallerTest,_tip_SettingsStoreAppInstallerTest>,wil::err_returncode_policy>(a1);
}
