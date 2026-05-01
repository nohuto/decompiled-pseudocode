/*
 * XREFs of ??0StartExperiencePackageHelper@@QEAA@W4PackageInstallScenario@@@Z @ 0x1805A790C
 * Callers:
 *     _lambda_7017635d5b356f6d3f79dc972349e24e_::operator() @ 0x1805A8A10 (_lambda_7017635d5b356f6d3f79dc972349e24e_--operator().c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::RunWidgetCanvasDelayedInitializeAsync$_ResumeCoro$1 @ 0x1805B2880 (winrt--Windows--Internal--Shell--implementation--DashboardManager--RunWidgetCanvasD_ea_1805B2880.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800EDA04 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ??$ExpandEnvironmentStringsW@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@$0BAA@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG@Z @ 0x1802B2CC8 (--$ExpandEnvironmentStringsW@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z.c)
 *     ??0LockScreenWidgetPackageHelperBase@@QEAA@W4PackageInstallScenario@@PEBG1UPackageVersion@ApplicationModel@Windows@winrt@@1@Z @ 0x1805A78A0 (--0LockScreenWidgetPackageHelperBase@@QEAA@W4PackageInstallScenario@@PEBG1UPackageVersion@Applic.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall StartExperiencePackageHelper::StartExperiencePackageHelper(_QWORD *a1)
{
  LPVOID *v2; // rax
  __int64 v3; // rdx
  void *v5; // [rsp+40h] [rbp+8h] BYREF

  v5 = a1;
  v2 = wil::ExpandEnvironmentStringsW<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>,256>(
         &v5,
         (__int64)L"%SystemRoot%\\InboxApps\\Microsoft.StartExperiencesApp_8wekyb3d8bbwe.msixbundle");
  LockScreenWidgetPackageHelperBase::LockScreenWidgetPackageHelperBase(
    (__int64)a1,
    v3,
    (__int64)L"9PC1H9VN18CM",
    (__int64)L"Microsoft.StartExperiencesApp_8wekyb3d8bbwe",
    0xC800010001LL,
    *v2);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v5);
  *a1 = &StartExperiencePackageHelper::`vftable';
  return a1;
}
