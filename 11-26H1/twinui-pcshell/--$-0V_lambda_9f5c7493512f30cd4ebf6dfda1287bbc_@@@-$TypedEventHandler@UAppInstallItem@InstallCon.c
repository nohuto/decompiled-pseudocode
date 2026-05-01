/*
 * XREFs of ??$?0V_lambda_9f5c7493512f30cd4ebf6dfda1287bbc_@@@?$TypedEventHandler@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@UIInspectable@Foundation@67@@Foundation@Windows@winrt@@QEAA@V_lambda_9f5c7493512f30cd4ebf6dfda1287bbc_@@@Z @ 0x1805C36DC
 * Callers:
 *     LockScreenWidgetPackageHelperBase::TryInstallStoreApplicationAsync$_ResumeCoro$1 @ 0x1805D8C60 (LockScreenWidgetPackageHelperBase--TryInstallStoreApplicationAsync$_ResumeCoro$1.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     ??0?$delegate@U?$TypedEventHandler@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@UIInspectable@Foundation@67@@Foundation@Windows@winrt@@V_lambda_9f5c7493512f30cd4ebf6dfda1287bbc_@@@impl@winrt@@QEAA@$$QEAV_lambda_9f5c7493512f30cd4ebf6dfda1287bbc_@@@Z @ 0x1805CACF4 (--0-$delegate@U-$TypedEventHandler@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel.c)
 *     ??1_lambda_9f5c7493512f30cd4ebf6dfda1287bbc_@@QEAA@XZ @ 0x1805CBCE8 (--1_lambda_9f5c7493512f30cd4ebf6dfda1287bbc_@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem,winrt::Windows::Foundation::IInspectable>::TypedEventHandler<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem,winrt::Windows::Foundation::IInspectable>(
        _QWORD *a1,
        _lambda_9f5c7493512f30cd4ebf6dfda1287bbc_ *a2)
{
  void *v5; // [rsp+28h] [rbp-20h]

  v5 = operator new(0x68uLL);
  *a1 = winrt::impl::delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem,winrt::Windows::Foundation::IInspectable>,_lambda_9f5c7493512f30cd4ebf6dfda1287bbc_>::delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem,winrt::Windows::Foundation::IInspectable>,_lambda_9f5c7493512f30cd4ebf6dfda1287bbc_>(
          v5,
          a2);
  _lambda_9f5c7493512f30cd4ebf6dfda1287bbc_::~_lambda_9f5c7493512f30cd4ebf6dfda1287bbc_(a2);
  return a1;
}
