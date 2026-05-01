/*
 * XREFs of ??0_lambda_adefc463c2a6e43ea1280e21dd7410de_@@QEAA@AEBV?$tip_test@V?$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@@tip2@@AEBV?$shared_any_t@V?$event_t@V?$shared_storage@V?$unique_any_t@V?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@@wil@@AEBV?$function@$$A6AXAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Z@std@@@Z @ 0x1805A6A9C
 * Callers:
 *     LockScreenWidgetPackageHelperBase::TryInstallStoreApplicationAsync$_ResumeCoro$1 @ 0x1805B5220 (LockScreenWidgetPackageHelperBase--TryInstallStoreApplicationAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??0?$function@$$A6AJPEBG@Z@std@@QEAA@AEBV01@@Z @ 0x1802C6744 (--0-$function@$$A6AJPEBG@Z@std@@QEAA@AEBV01@@Z.c)
 *     ??0?$tip_test@V?$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@@tip2@@QEAA@AEBV01@@Z @ 0x1805A77D0 (--0-$tip_test@V-$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@@tip2@@QEAA@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall _lambda_adefc463c2a6e43ea1280e21dd7410de_::_lambda_adefc463c2a6e43ea1280e21dd7410de_(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4)
{
  __int64 v7; // rax

  tip2::tip_test<tip2::details::merged_data<_tip_SettingsStoreAppInstallerTest,_tip_SettingsStoreAppInstallerTest>>::tip_test<tip2::details::merged_data<_tip_SettingsStoreAppInstallerTest,_tip_SettingsStoreAppInstallerTest>>();
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  v7 = a3[1];
  if ( v7 )
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
  *(_QWORD *)(a1 + 8) = *a3;
  *(_QWORD *)(a1 + 16) = a3[1];
  std::function<long (unsigned short const *)>::function<long (unsigned short const *)>(a1 + 24, a4);
  return a1;
}
