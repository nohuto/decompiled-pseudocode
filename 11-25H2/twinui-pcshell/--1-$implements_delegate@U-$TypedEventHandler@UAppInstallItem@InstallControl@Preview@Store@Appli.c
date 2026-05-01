/*
 * XREFs of ??1?$implements_delegate@U?$TypedEventHandler@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@UIInspectable@Foundation@67@@Foundation@Windows@winrt@@V_lambda_adefc463c2a6e43ea1280e21dd7410de_@@@impl@winrt@@QEAA@XZ @ 0x1805A7DAC
 * Callers:
 *     ?Release@?$implements_delegate@U?$TypedEventHandler@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@UIInspectable@Foundation@67@@Foundation@Windows@winrt@@V_lambda_adefc463c2a6e43ea1280e21dd7410de_@@@impl@winrt@@UEAAIXZ @ 0x1805B1A10 (-Release@-$implements_delegate@U-$TypedEventHandler@UAppInstallItem@InstallControl@Preview@Store.c)
 * Callees:
 *     ??1?$module_lock_updater@$00@impl@winrt@@QEAA@XZ @ 0x1800E9F14 (--1-$module_lock_updater@$00@impl@winrt@@QEAA@XZ.c)
 */

void __fastcall winrt::impl::implements_delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem,winrt::Windows::Foundation::IInspectable>,_lambda_adefc463c2a6e43ea1280e21dd7410de_>::~implements_delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem,winrt::Windows::Foundation::IInspectable>,_lambda_adefc463c2a6e43ea1280e21dd7410de_>(
        __int64 a1)
{
  __int64 v2; // rdx

  winrt::impl::module_lock_updater<1>::~module_lock_updater<1>();
  _lambda_adefc463c2a6e43ea1280e21dd7410de_::~_lambda_adefc463c2a6e43ea1280e21dd7410de_(
    (_lambda_adefc463c2a6e43ea1280e21dd7410de_ *)(a1 + 16),
    v2);
}
