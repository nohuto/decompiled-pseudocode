/*
 * XREFs of ?Invoke@?$delegate@U?$TypedEventHandler@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@UIInspectable@Foundation@67@@Foundation@Windows@winrt@@V_lambda_adefc463c2a6e43ea1280e21dd7410de_@@@impl@winrt@@UEAAHPEAX0@Z @ 0x1805AFFD0
 * Callers:
 *     <none>
 * Callees:
 *     ??R_lambda_adefc463c2a6e43ea1280e21dd7410de_@@QEAA@AEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@AEBUIInspectable@Foundation@67@@Z @ 0x1805A9468 (--R_lambda_adefc463c2a6e43ea1280e21dd7410de_@@QEAA@AEBUAppInstallItem@InstallControl@Preview@Sto.c)
 */

__int64 __fastcall winrt::impl::delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem,winrt::Windows::Foundation::IInspectable>,_lambda_adefc463c2a6e43ea1280e21dd7410de_>::Invoke(
        __int64 a1,
        __int64 *a2,
        __int64 a3)
{
  __int64 *v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  _lambda_adefc463c2a6e43ea1280e21dd7410de_::operator()(a1 + 16, &v4, a3);
  return 0LL;
}
