/*
 * XREFs of ??0?$delegate@U?$TypedEventHandler@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@UIInspectable@Foundation@67@@Foundation@Windows@winrt@@V_lambda_c63df5938b5e32cbd3483994e088b3e3_@@@impl@winrt@@QEAA@$$QEAV_lambda_c63df5938b5e32cbd3483994e088b3e3_@@@Z @ 0x1805CAD60
 * Callers:
 *     ??$?0V_lambda_c63df5938b5e32cbd3483994e088b3e3_@@@?$TypedEventHandler@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@UIInspectable@Foundation@67@@Foundation@Windows@winrt@@QEAA@V_lambda_c63df5938b5e32cbd3483994e088b3e3_@@@Z @ 0x1805C374C (--$-0V_lambda_c63df5938b5e32cbd3483994e088b3e3_@@@-$TypedEventHandler@UAppInstallItem@InstallCon.c)
 * Callees:
 *     ??0?$function@$$A6AXAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Z@std@@QEAA@$$QEAV01@@Z @ 0x1805CADD4 (--0-$function@$$A6AXAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@win.c)
 */

__int64 __fastcall winrt::impl::delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem,winrt::Windows::Foundation::IInspectable>,_lambda_c63df5938b5e32cbd3483994e088b3e3_>::delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem,winrt::Windows::Foundation::IInspectable>,_lambda_c63df5938b5e32cbd3483994e088b3e3_>(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v3; // rax

  *(_DWORD *)(a1 + 8) = 1;
  *(_QWORD *)(a1 + 16) = *a2;
  v3 = a2[1];
  a2[1] = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 24) = v3;
  *(_QWORD *)(a1 + 32) = a2[2];
  *(_QWORD *)(a1 + 40) = a2[3];
  a2[2] = 0LL;
  a2[3] = 0LL;
  std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>(
    a1 + 48,
    a2 + 4);
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *(_QWORD *)a1 = &winrt::impl::delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem,winrt::Windows::Foundation::IInspectable>,_lambda_c63df5938b5e32cbd3483994e088b3e3_>::`vftable';
  return a1;
}
