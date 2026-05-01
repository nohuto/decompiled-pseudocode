/*
 * XREFs of ?Invoke@?$delegate@U?$TypedEventHandler@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@UIInspectable@Foundation@67@@Foundation@Windows@winrt@@V_lambda_c63df5938b5e32cbd3483994e088b3e3_@@@impl@winrt@@UEAAHPEAX0@Z @ 0x1805B0000
 * Callers:
 *     <none>
 * Callees:
 *     ??R_lambda_c63df5938b5e32cbd3483994e088b3e3_@@QEAA@AEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@AEBUIInspectable@Foundation@67@@Z @ 0x1805A9594 (--R_lambda_c63df5938b5e32cbd3483994e088b3e3_@@QEAA@AEBUAppInstallItem@InstallControl@Preview@Sto.c)
 */

__int64 __fastcall winrt::impl::delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem,winrt::Windows::Foundation::IInspectable>,_lambda_c63df5938b5e32cbd3483994e088b3e3_>::Invoke(
        __int64 a1,
        __int64 *a2,
        void *a3)
{
  __int64 *v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  _lambda_c63df5938b5e32cbd3483994e088b3e3_::operator()(a1 + 16, &v4, a3);
  return 0LL;
}
