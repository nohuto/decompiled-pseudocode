/*
 * XREFs of ??$call@AEAV_lambda_12f5bf833773a01a30ff4e031defbf2b_@@@?$factory_cache_entry@UAnimationLastFrameTelemetry@Composition@UI@WindowsUdk@winrt@@UIAnimationLastFrameTelemetryStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_12f5bf833773a01a30ff4e031defbf2b_@@@Z @ 0x180459DB4
 * Callers:
 *     ?GetForScenario@AnimationLastFrameTelemetry@Composition@UI@WindowsUdk@winrt@@SA@AEBUguid@5@@Z @ 0x180461DEC (-GetForScenario@AnimationLastFrameTelemetry@Composition@UI@WindowsUdk@winrt@@SA@AEBUguid@5@@Z.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1801CE210 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     ??R_lambda_c6eead5922142ea911cef51d7f7bcdf9_@@QEBA@AEBUISnapLayoutManagerStatics2@Shell@UI@WindowsUdk@winrt@@@Z @ 0x1802CAAF8 (--R_lambda_c6eead5922142ea911cef51d7f7bcdf9_@@QEBA@AEBUISnapLayoutManagerStatics2@Shell@UI@Windo.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1802DBABD (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     ??$get_activation_factory@UIAnimationLastFrameTelemetryStatics@Composition@UI@WindowsUdk@winrt@@@winrt@@YA?AUIAnimationLastFrameTelemetryStatics@Composition@UI@WindowsUdk@0@AEBUhstring@param@0@@Z @ 0x18045A1CC (--$get_activation_factory@UIAnimationLastFrameTelemetryStatics@Composition@UI@WindowsUdk@winrt@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::Composition::AnimationLastFrameTelemetry,winrt::WindowsUdk::UI::Composition::IAnimationLastFrameTelemetryStatics>::call<_lambda_12f5bf833773a01a30ff4e031defbf2b_ &>(
        void (__fastcall ***a1)(_QWORD, __int64 *, __int64 *),
        _QWORD *a2,
        __int128 **a3)
{
  __int64 v6[2]; // [rsp+28h] [rbp-48h] BYREF
  __int64 v7[2]; // [rsp+38h] [rbp-38h] BYREF
  _BYTE v8[40]; // [rsp+48h] [rbp-28h] BYREF
  void (__fastcall ***v9)(_QWORD, __int64 *, __int64 *); // [rsp+80h] [rbp+10h] BYREF
  __int64 v10; // [rsp+98h] [rbp+28h] BYREF

  v9 = a1;
  v7[0] = (__int64)L"WindowsUdk.UI.Composition.AnimationLastFrameTelemetry";
  v7[1] = 53LL;
  winrt::param::hstring::hstring((__int64)v8, v7);
  winrt::get_activation_factory<winrt::WindowsUdk::UI::Composition::IAnimationLastFrameTelemetryStatics>(&v9, v8);
  if ( v9 && (v10 = 0LL, (**v9)(v9, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v10), (v6[0] = v10) != 0) )
  {
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v6);
    v6[1] = (__int64)&qword_18089C5A8;
    _InterlockedIncrement64(&qword_18089C5A8);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Composition::AnimationLastFrameTelemetry,winrt::WindowsUdk::UI::Composition::IAnimationLastFrameTelemetryStatics>,
            (signed __int64)v9,
            0LL) )
    {
      v9 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_18089C5B0);
    }
    _lambda_c6eead5922142ea911cef51d7f7bcdf9_::operator()(
      a3,
      a2,
      &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Composition::AnimationLastFrameTelemetry,winrt::WindowsUdk::UI::Composition::IAnimationLastFrameTelemetryStatics>);
    _InterlockedDecrement64(&qword_18089C5A8);
  }
  else
  {
    _lambda_c6eead5922142ea911cef51d7f7bcdf9_::operator()(a3, a2, (__int64 *)&v9);
  }
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v9);
  return a2;
}
