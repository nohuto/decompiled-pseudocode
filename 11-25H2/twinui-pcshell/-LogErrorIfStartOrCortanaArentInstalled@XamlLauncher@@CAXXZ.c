/*
 * XREFs of ?LogErrorIfStartOrCortanaArentInstalled@XamlLauncher@@CAXXZ @ 0x18024FE40
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_014daf4e80f8d9d33103ca7fb469f571___::Run @ 0x1804505E0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_014daf4e80f8d9d33103ca7fb469f571___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18004E0F4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800AC1A4 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1800AD16C (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ?Find@AppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@SA@AEBUhstring@param@5@AEBW4AppExtensionOptions@2345@@Z @ 0x1801C80BC (-Find@AppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@SA@AEBUhstring@param@5@AEBW4.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_53852258@@@details@wil@@QEAA_NXZ @ 0x1803B24AC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_53852258@@@details@wil@@QEAA_NXZ.c)
 *     ??$ShellExperienceHostNotInstalled@AEBJ@StartWindowTelemetry@@SAXAEBJ@Z @ 0x180449A7C (--$ShellExperienceHostNotInstalled@AEBJ@StartWindowTelemetry@@SAXAEBJ@Z.c)
 *     ??$StartMenuExperienceHostNotInstalled@AEBJ@StartWindowTelemetry@@SAXAEBJ@Z @ 0x180449AEC (--$StartMenuExperienceHostNotInstalled@AEBJ@StartWindowTelemetry@@SAXAEBJ@Z.c)
 *     ?UndockedSearchFullTrustAppNotInstalled@StartWindowTelemetry@@SAXXZ @ 0x180450CD0 (-UndockedSearchFullTrustAppNotInstalled@StartWindowTelemetry@@SAXXZ.c)
 *     ?UndockedSearchNotInstalled@StartWindowTelemetry@@SAXXZ @ 0x180450D24 (-UndockedSearchNotInstalled@StartWindowTelemetry@@SAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
void XamlLauncher::LogErrorIfStartOrCortanaArentInstalled(void)
{
  __int64 v0; // rbx
  __int64 v1; // rbx
  __int64 (__fastcall *v2)(__int64, _QWORD, __int64, _BYTE *); // rdi
  __int64 v3; // rbx
  __int64 (__fastcall *v4)(__int64, _QWORD, __int64, _BYTE *); // rdi
  __int64 v5; // rbx
  __int64 v6; // rbx
  _BYTE v7[4]; // [rsp+30h] [rbp-50h] BYREF
  int v8; // [rsp+34h] [rbp-4Ch] BYREF
  __int64 v9; // [rsp+38h] [rbp-48h] BYREF
  volatile signed __int32 *v10; // [rsp+40h] [rbp-40h] BYREF
  volatile signed __int32 *v11; // [rsp+48h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-30h] BYREF
  __int64 v13; // [rsp+68h] [rbp-18h]

  v9 = 0LL;
  v13 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Internal.StateRepository.Application",
    0x2Du,
    0x2Cu);
  v0 = v13;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v9);
  if ( (int)RoGetActivationFactory(v0, &GUID_07adcc9a_e505_48c2_b471_45af8561f6af, &v9) >= 0 )
  {
    v7[0] = 0;
    v1 = v9;
    v2 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, _BYTE *))(*(_QWORD *)v9 + 184LL);
    v13 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Microsoft.Windows.ShellExperienceHost_cw5n1h2txyewy!App",
      0x38u,
      0x37u);
    v8 = v2(v1, 0LL, v13, v7);
    if ( v8 < 0 || !v7[0] )
      StartWindowTelemetry::ShellExperienceHostNotInstalled<long const &>(&v8);
    v3 = v9;
    v4 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, _BYTE *))(*(_QWORD *)v9 + 184LL);
    v13 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Microsoft.Windows.StartMenuExperienceHost_cw5n1h2txyewy!App",
      0x3Cu,
      0x3Bu);
    v8 = v4(v3, 0LL, v13, v7);
    if ( v8 < 0 || !v7[0] )
      StartWindowTelemetry::StartMenuExperienceHostNotInstalled<long const &>(&v8);
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_53852258>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_53852258>::GetImpl'::`2'::impl) )
    {
      v8 = 1;
      hstringHeader.Reserved.Reserved1 = *(PVOID *)winrt::hstring::hstring(
                                                     (winrt::hstring *)&v11,
                                                     L"com.microsoft.windows.app.searchMI");
      v5 = *(_QWORD *)winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension::Find(
                        (const struct winrt::param::hstring *)&v10,
                        (const enum winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtensionOptions *)&hstringHeader,
                        (__int64)&v8);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v10);
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v11);
      if ( !v5 )
        StartWindowTelemetry::UndockedSearchFullTrustAppNotInstalled();
    }
    v8 = 1;
    hstringHeader.Reserved.Reserved1 = *(PVOID *)winrt::hstring::hstring(
                                                   (winrt::hstring *)&v10,
                                                   L"com.microsoft.windows.app.search");
    v6 = *(_QWORD *)winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension::Find(
                      (const struct winrt::param::hstring *)&v11,
                      (const enum winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtensionOptions *)&hstringHeader,
                      (__int64)&v8);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v11);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v10);
    if ( !v6 )
      StartWindowTelemetry::UndockedSearchNotInstalled();
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v9);
}
