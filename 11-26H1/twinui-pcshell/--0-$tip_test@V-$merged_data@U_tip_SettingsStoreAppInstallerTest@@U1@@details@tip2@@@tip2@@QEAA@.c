/*
 * XREFs of ??0?$tip_test@V?$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@@tip2@@QEAA@AEBV01@@Z @ 0x1805CB9D4
 * Callers:
 *     ??0_lambda_9f5c7493512f30cd4ebf6dfda1287bbc_@@QEAA@AEBV?$tip_test@V?$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@@tip2@@AEBV?$shared_any_t@V?$event_t@V?$shared_storage@V?$unique_any_t@V?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@@wil@@AEBV?$function@$$A6AXAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Z@std@@@Z @ 0x1805CAC04 (--0_lambda_9f5c7493512f30cd4ebf6dfda1287bbc_@@QEAA@AEBV-$tip_test@V-$merged_data@U_tip_SettingsS.c)
 *     ??0_lambda_c63df5938b5e32cbd3483994e088b3e3_@@QEAA@PEAVLockScreenWidgetPackageHelperBase@@AEBV?$tip_test@V?$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@@tip2@@AEBV?$shared_any_t@V?$event_t@V?$shared_storage@V?$unique_any_t@V?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@@wil@@AEBV?$function@$$A6AXAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Z@std@@@Z @ 0x1805CAC7C (--0_lambda_c63df5938b5e32cbd3483994e088b3e3_@@QEAA@PEAVLockScreenWidgetPackageHelperBase@@AEBV-$.c)
 * Callees:
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x1805DB520 (-ensure_data@-$tip_test@V-$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@@t.c)
 */

__int64 *__fastcall tip2::tip_test<tip2::details::merged_data<_tip_SettingsStoreAppInstallerTest,_tip_SettingsStoreAppInstallerTest>>::tip_test<tip2::details::merged_data<_tip_SettingsStoreAppInstallerTest,_tip_SettingsStoreAppInstallerTest>>(
        __int64 *a1,
        __int64 a2)
{
  __int64 *v3; // rax
  __int64 v4; // rdx

  v3 = (__int64 *)tip2::tip_test<tip2::details::merged_data<_tip_SettingsStoreAppInstallerTest,_tip_SettingsStoreAppInstallerTest>>::ensure_data(a2);
  v4 = *v3;
  *a1 = *v3;
  if ( v4 )
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 392));
  return a1;
}
