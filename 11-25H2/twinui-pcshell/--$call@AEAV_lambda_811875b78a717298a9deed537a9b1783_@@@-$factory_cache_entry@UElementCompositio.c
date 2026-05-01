/*
 * XREFs of ??$call@AEAV_lambda_811875b78a717298a9deed537a9b1783_@@@?$factory_cache_entry@UElementCompositionPreview@Hosting@Xaml@UI@Windows@winrt@@UIElementCompositionPreviewStatics2@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_811875b78a717298a9deed537a9b1783_@@@Z @ 0x180683B34
 * Callers:
 *     ?SetIsTranslationEnabled@ElementCompositionPreview@Hosting@Xaml@UI@Windows@winrt@@SA@AEBUUIElement@3456@_N@Z @ 0x1802B14F8 (-SetIsTranslationEnabled@ElementCompositionPreview@Hosting@Xaml@UI@Windows@winrt@@SA@AEBUUIEleme.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?OnFileActivated@?$consume_Windows_UI_Xaml_IApplicationOverrides@UIApplicationOverrides@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUFileActivatedEventArgs@Activation@ApplicationModel@Windows@3@@Z @ 0x1802B156C (-OnFileActivated@-$consume_Windows_UI_Xaml_IApplicationOverrides@UIApplicationOverrides@Xaml@UI@.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@_WU?$char_traits@_W@std@@@std@@@Z @ 0x1802CBEA0 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@_WU-$char_traits@_W@std@@@std@@@Z.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1802DBABD (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     ??$get_activation_factory@UIElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@@winrt@@YA?AUIElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@0@AEBUhstring@param@0@@Z @ 0x180683F4C (--$get_activation_factory@UIElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@@wi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall winrt::impl::factory_cache_entry<winrt::Windows::UI::Xaml::Hosting::ElementCompositionPreview,winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2>::call<_lambda_811875b78a717298a9deed537a9b1783_ &>(
        void (__fastcall ***a1)(_QWORD, __int64 *, __int64 *),
        __int64 **a2)
{
  _QWORD v3[2]; // [rsp+28h] [rbp-38h] BYREF
  _BYTE v4[40]; // [rsp+38h] [rbp-28h] BYREF
  void (__fastcall ***v5)(_QWORD, __int64 *, __int64 *); // [rsp+70h] [rbp+10h] BYREF
  __int64 v6; // [rsp+80h] [rbp+20h] BYREF
  __int64 v7; // [rsp+88h] [rbp+28h] BYREF

  v5 = a1;
  v3[0] = L"Windows.UI.Xaml.Hosting.ElementCompositionPreview";
  v3[1] = 49LL;
  winrt::param::hstring::hstring((winrt::param::hstring *)v4, (__int64)v3);
  winrt::get_activation_factory<winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2>(&v5, v4);
  if ( v5 && (v6 = 0LL, (**v5)(v5, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v6), (v7 = v6) != 0) )
  {
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v7);
    _InterlockedIncrement64(&qword_18089C208);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Hosting::ElementCompositionPreview,winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2>,
            (signed __int64)v5,
            0LL) )
    {
      v5 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_18089C210);
    }
    winrt::impl::consume_Windows_UI_Xaml_IApplicationOverrides<winrt::Windows::UI::Xaml::IApplicationOverrides>::OnFileActivated(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Hosting::ElementCompositionPreview,winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2>,
      *a2);
    _InterlockedDecrement64(&qword_18089C208);
  }
  else
  {
    winrt::impl::consume_Windows_UI_Xaml_IApplicationOverrides<winrt::Windows::UI::Xaml::IApplicationOverrides>::OnFileActivated(
      (__int64 *)&v5,
      *a2);
  }
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v5);
}
