/*
 * XREFs of _anonymous_namespace_::FindDashboardAppExtension @ 0x1805CFC68
 * Callers:
 *     ?IsDashboardExtensionPresent@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CA_NXZ @ 0x18026D69C (-IsDashboardExtensionPresent@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CA_NX.c)
 *     ?IsDashboardExtensionVersionPresent@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CA_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18026D7BC (-IsDashboardExtensionVersionPresent@DashboardManager@implementation@Shell@Internal@Windows@winrt.c)
 *     ?GetDashboardAppExtension@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUAppExtension@AppExtensions@ApplicationModel@WindowsUdk@6@XZ @ 0x1805D2064 (-GetDashboardAppExtension@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA-AUA.c)
 * Callees:
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x180025E74 (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??8winrt@@YA_NAEBUhstring@0@0@Z @ 0x18002E674 (--8winrt@@YA_NAEBUhstring@0@0@Z.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180054B64 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x1800DC92C (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 *     ?Find@AppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@SA@AEBUhstring@param@5@AEBW4AppExtensionOptions@2345@@Z @ 0x1801BFCB8 (-Find@AppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@SA@AEBUhstring@param@5@AEBW4.c)
 *     ?FindAll@AppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@SA@AEBUhstring@param@5@AEBW4AppExtensionOptions@2345@@Z @ 0x1801DAEA0 (-FindAll@AppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@SA@AEBUhstring@param@5@AE.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ??D?$fast_iterator@U?$IVectorView@UAppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@@Collections@Foundation@Windows@winrt@@@impl@winrt@@QEBA?AUAppExtension@AppExtensions@ApplicationModel@WindowsUdk@2@XZ @ 0x1803A0DE8 (--D-$fast_iterator@U-$IVectorView@UAppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@.c)
 *     _anonymous_namespace_::GetDashboardExtensionName @ 0x1805D21D8 (_anonymous_namespace_--GetDashboardExtensionName.c)
 *     _anonymous_namespace_::GetDashboardPackageFamilyName @ 0x1805D22E0 (_anonymous_namespace_--GetDashboardPackageFamilyName.c)
 *     _anonymous_namespace_::IsInternalDevUnlocked @ 0x1805D4474 (_anonymous_namespace_--IsInternalDevUnlocked.c)
 *     ?PackageFamilyName@?$consume_WindowsUdk_ApplicationModel_AppExtensions_IAppExtension2@UAppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x1805D554C (-PackageFamilyName@-$consume_WindowsUdk_ApplicationModel_AppExtensions_IAppExtension2@UAppExtens.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_56189266@@@details@wil@@QEAA_NXZ @ 0x1805DAC54 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_56189266@@@details@wil@@QEAA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 *__fastcall anonymous_namespace_::FindDashboardAppExtension(__int64 *a1)
{
  int v2; // esi
  int v3; // eax
  __int64 *v4; // rax
  char v5; // bl
  __int64 *v6; // rax
  __int64 v8; // [rsp+28h] [rbp-31h] BYREF
  volatile signed __int32 *v9; // [rsp+30h] [rbp-29h] BYREF
  volatile signed __int32 *v10; // [rsp+38h] [rbp-21h] BYREF
  volatile signed __int32 *v11; // [rsp+40h] [rbp-19h] BYREF
  __int64 *v12; // [rsp+48h] [rbp-11h] BYREF
  int v13; // [rsp+50h] [rbp-9h]
  _QWORD v14[4]; // [rsp+58h] [rbp-1h] BYREF
  int v15; // [rsp+78h] [rbp+1Fh] BYREF
  __int128 v16; // [rsp+80h] [rbp+27h]
  __int64 v17; // [rsp+C8h] [rbp+6Fh] BYREF
  int v18; // [rsp+D0h] [rbp+77h] BYREF
  volatile signed __int32 *v19; // [rsp+D8h] [rbp+7Fh] BYREF

  *a1 = 0LL;
  if ( (unsigned __int8)anonymous_namespace_::IsInternalDevUnlocked(a1) )
  {
    anonymous_namespace_::GetDashboardPackageFamilyName((winrt::hstring *)&v9);
    if ( v9 )
    {
      LODWORD(v17) = 9;
      if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_56189266>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_56189266>::GetImpl'::`2'::impl) )
        LODWORD(v17) = v17 | 0x10;
      v14[0] = *(_QWORD *)anonymous_namespace_::GetDashboardExtensionName((winrt::hstring *)&v10);
      winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension::FindAll(
        (const struct winrt::param::hstring *)&v8,
        (const enum winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtensionOptions *)v14,
        (__int64)&v17);
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v10);
      v12 = &v8;
      v2 = 0;
      v13 = 0;
      v18 = 0;
      v15 = 0;
      v16 = 0LL;
      v3 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v8 + 56LL))(v8, &v18);
      winrt::check_hresult((int *)&v19, v3, (__int64)&v15);
      while ( v2 != v18 )
      {
        winrt::impl::fast_iterator<winrt::Windows::Foundation::Collections::IVectorView<winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension>>::operator*(
          (__int64)&v12,
          (winrt *)&v19);
        v4 = (__int64 *)winrt::impl::consume_WindowsUdk_ApplicationModel_AppExtensions_IAppExtension2<winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension>::PackageFamilyName(
                          &v19,
                          &v11);
        v5 = winrt::operator==(v4, (__int64 *)&v9);
        winrt::handle_type<winrt::impl::hstring_traits>::close(&v11);
        if ( v5 )
          winrt::Windows::Foundation::IUnknown::operator=(a1, (__int64 *)&v19);
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v19);
        v13 = ++v2;
      }
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v8);
    }
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v9);
  }
  v17 = 0LL;
  if ( winrt::Windows::Foundation::operator==((void (__fastcall ****)(_QWORD, __int64 *, __int64 *))a1, &v17) )
  {
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_56189266>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_56189266>::GetImpl'::`2'::impl) )
      LODWORD(v17) = 24;
    else
      LODWORD(v17) = 8;
    v14[0] = *(_QWORD *)anonymous_namespace_::GetDashboardExtensionName((winrt::hstring *)&v19);
    v6 = (__int64 *)winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension::Find(
                      (const struct winrt::param::hstring *)&v18,
                      (const enum winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtensionOptions *)v14,
                      (__int64)&v17);
    winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=(a1, v6);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v18);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v19);
  }
  return a1;
}
