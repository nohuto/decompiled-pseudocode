/*
 * XREFs of ??$call@AEAV_lambda_c893b0be85f95fa79319d83703904477_@@@?$factory_cache_entry@UCompositionAnimation@Composition@UI@WindowsUdk@winrt@@UICompositionAnimationStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_c893b0be85f95fa79319d83703904477_@@@Z @ 0x1806AB060
 * Callers:
 *     ?CreateAnimation@VirtualDesktopSwitcherHost@@AEAA?AV?$tuple@UScalarKeyFrameAnimation@Composition@UI@Windows@winrt@@UCompositor@2345@@std@@AEBM0AEBV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@3@AEBU_GUID@@AEBUfloat2@Numerics@Foundation@Windows@winrt@@3@Z @ 0x1802184F4 (-CreateAnimation@VirtualDesktopSwitcherHost@@AEAA-AV-$tuple@UScalarKeyFrameAnimation@Composition.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?TryAddTag@?$consume_WindowsUdk_UI_Composition_ICompositionAnimationStatics@UICompositionAnimationStatics@Composition@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUICompositionAnimationBase@Composition@UI@Windows@3@AEBUguid@3@@Z @ 0x1802A189C (-TryAddTag@-$consume_WindowsUdk_UI_Composition_ICompositionAnimationStatics@UICompositionAnimati.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@_WU?$char_traits@_W@std@@@std@@@Z @ 0x1802C3488 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@_WU-$char_traits@_W@std@@@std@@@Z.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1802D41BD (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     ??$get_activation_factory@UICompositionAnimationStatics@Composition@UI@WindowsUdk@winrt@@@winrt@@YA?AUICompositionAnimationStatics@Composition@UI@WindowsUdk@0@AEBUhstring@param@0@@Z @ 0x1806AB320 (--$get_activation_factory@UICompositionAnimationStatics@Composition@UI@WindowsUdk@winrt@@@winrt@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::Composition::CompositionAnimation,winrt::WindowsUdk::UI::Composition::ICompositionAnimationStatics>::call<_lambda_c893b0be85f95fa79319d83703904477_ &>(
        void (__fastcall ***a1)(_QWORD, __int64 *, __int64 **),
        __int64 a2)
{
  signed __int64 v3; // rbx
  __int64 *v4; // rax
  char v5; // si
  char v6; // al
  char v7; // bl
  _QWORD v9[2]; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v10[32]; // [rsp+30h] [rbp-20h] BYREF
  void (__fastcall ***v11)(_QWORD, __int64 *, __int64 **); // [rsp+70h] [rbp+20h] BYREF
  __int64 *v12; // [rsp+80h] [rbp+30h] BYREF

  v11 = a1;
  v9[0] = L"WindowsUdk.UI.Composition.CompositionAnimation";
  v9[1] = 46LL;
  winrt::param::hstring::hstring((winrt::param::hstring *)v10, (__int64)v9);
  winrt::get_activation_factory<winrt::WindowsUdk::UI::Composition::ICompositionAnimationStatics>(&v11, v10);
  v3 = (signed __int64)v11;
  v12 = 0LL;
  if ( !v11 )
  {
    v4 = 0LL;
LABEL_3:
    v5 = 0;
    goto LABEL_4;
  }
  (**v11)(v11, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v12);
  v4 = v12;
  if ( !v12 )
    goto LABEL_3;
  v5 = 1;
LABEL_4:
  if ( v4 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v12);
  if ( v5 )
  {
    v12 = &qword_1808DCD58;
    _InterlockedIncrement64(&qword_1808DCD58);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Composition::CompositionAnimation,winrt::WindowsUdk::UI::Composition::ICompositionAnimationStatics>,
            v3,
            0LL) )
    {
      v11 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_1808DCD60);
    }
    v6 = winrt::impl::consume_WindowsUdk_UI_Composition_ICompositionAnimationStatics<winrt::WindowsUdk::UI::Composition::ICompositionAnimationStatics>::TryAddTag(
           &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Composition::CompositionAnimation,winrt::WindowsUdk::UI::Composition::ICompositionAnimationStatics>,
           *(__int64 **)a2,
           *(__int128 **)(a2 + 8));
    _InterlockedDecrement64(&qword_1808DCD58);
  }
  else
  {
    v6 = winrt::impl::consume_WindowsUdk_UI_Composition_ICompositionAnimationStatics<winrt::WindowsUdk::UI::Composition::ICompositionAnimationStatics>::TryAddTag(
           (__int64 *)&v11,
           *(__int64 **)a2,
           *(__int128 **)(a2 + 8));
  }
  v7 = v6;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v11);
  return v7;
}
