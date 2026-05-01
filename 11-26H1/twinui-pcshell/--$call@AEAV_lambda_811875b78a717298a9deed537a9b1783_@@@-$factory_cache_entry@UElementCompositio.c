/*
 * XREFs of ??$call@AEAV_lambda_811875b78a717298a9deed537a9b1783_@@@?$factory_cache_entry@UElementCompositionPreview@Hosting@Xaml@UI@Windows@winrt@@UIElementCompositionPreviewStatics2@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_811875b78a717298a9deed537a9b1783_@@@Z @ 0x1806AAF38
 * Callers:
 *     ?SetIsTranslationEnabled@ElementCompositionPreview@Hosting@Xaml@UI@Windows@winrt@@SA@AEBUUIElement@3456@_N@Z @ 0x1802A4074 (-SetIsTranslationEnabled@ElementCompositionPreview@Hosting@Xaml@UI@Windows@winrt@@SA@AEBUUIEleme.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?OnFileActivated@?$consume_Windows_UI_Xaml_IApplicationOverrides@UIApplicationOverrides@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUFileActivatedEventArgs@Activation@ApplicationModel@Windows@3@@Z @ 0x1802A40E8 (-OnFileActivated@-$consume_Windows_UI_Xaml_IApplicationOverrides@UIApplicationOverrides@Xaml@UI@.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@_WU?$char_traits@_W@std@@@std@@@Z @ 0x1802C3488 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@_WU-$char_traits@_W@std@@@std@@@Z.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1802D41BD (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     ??$get_activation_factory@UIElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@@winrt@@YA?AUIElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@0@AEBUhstring@param@0@@Z @ 0x1806AB384 (--$get_activation_factory@UIElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@@wi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall winrt::impl::factory_cache_entry<winrt::Windows::UI::Xaml::Hosting::ElementCompositionPreview,winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2>::call<_lambda_811875b78a717298a9deed537a9b1783_ &>(
        void (__fastcall ***a1)(_QWORD, __int64 *, __int64 **),
        __int64 **a2)
{
  signed __int64 v3; // rbx
  __int64 *v4; // rax
  char v5; // si
  _QWORD v6[2]; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v7[32]; // [rsp+30h] [rbp-20h] BYREF
  void (__fastcall ***v8)(_QWORD, __int64 *, __int64 **); // [rsp+70h] [rbp+20h] BYREF
  __int64 *v9; // [rsp+80h] [rbp+30h] BYREF

  v8 = a1;
  v6[0] = L"Windows.UI.Xaml.Hosting.ElementCompositionPreview";
  v6[1] = 49LL;
  winrt::param::hstring::hstring((winrt::param::hstring *)v7, (__int64)v6);
  winrt::get_activation_factory<winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2>(&v8, v7);
  v3 = (signed __int64)v8;
  v9 = 0LL;
  if ( !v8 )
  {
    v4 = 0LL;
LABEL_3:
    v5 = 0;
    goto LABEL_4;
  }
  (**v8)(v8, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v9);
  v4 = v9;
  if ( !v9 )
    goto LABEL_3;
  v5 = 1;
LABEL_4:
  if ( v4 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v9);
  if ( v5 )
  {
    v9 = &qword_1808DC878;
    _InterlockedIncrement64(&qword_1808DC878);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Hosting::ElementCompositionPreview,winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2>,
            v3,
            0LL) )
    {
      v8 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_1808DC880);
    }
    winrt::impl::consume_Windows_UI_Xaml_IApplicationOverrides<winrt::Windows::UI::Xaml::IApplicationOverrides>::OnFileActivated(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Hosting::ElementCompositionPreview,winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2>,
      *a2);
    _InterlockedDecrement64(&qword_1808DC878);
  }
  else
  {
    winrt::impl::consume_Windows_UI_Xaml_IApplicationOverrides<winrt::Windows::UI::Xaml::IApplicationOverrides>::OnFileActivated(
      (__int64 *)&v8,
      *a2);
  }
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v8);
}
