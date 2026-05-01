/*
 * XREFs of ??$call@AEAV_lambda_12f5bf833773a01a30ff4e031defbf2b_@@@?$factory_cache_entry@UAnimationLastFrameTelemetry@Composition@UI@WindowsUdk@winrt@@UIAnimationLastFrameTelemetryStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_12f5bf833773a01a30ff4e031defbf2b_@@@Z @ 0x180465FD0
 * Callers:
 *     ?GetForScenario@AnimationLastFrameTelemetry@Composition@UI@WindowsUdk@winrt@@SA@AEBUguid@5@@Z @ 0x18046DCE0 (-GetForScenario@AnimationLastFrameTelemetry@Composition@UI@WindowsUdk@winrt@@SA@AEBUguid@5@@Z.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1801C5810 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     ??R_lambda_c6eead5922142ea911cef51d7f7bcdf9_@@QEBA@AEBUISnapLayoutManagerStatics2@Shell@UI@WindowsUdk@winrt@@@Z @ 0x1802C2198 (--R_lambda_c6eead5922142ea911cef51d7f7bcdf9_@@QEBA@AEBUISnapLayoutManagerStatics2@Shell@UI@Windo.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1802D41BD (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     ??$get_activation_factory@UIAnimationLastFrameTelemetryStatics@Composition@UI@WindowsUdk@winrt@@@winrt@@YA?AUIAnimationLastFrameTelemetryStatics@Composition@UI@WindowsUdk@0@AEBUhstring@param@0@@Z @ 0x1804664AC (--$get_activation_factory@UIAnimationLastFrameTelemetryStatics@Composition@UI@WindowsUdk@winrt@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::Composition::AnimationLastFrameTelemetry,winrt::WindowsUdk::UI::Composition::IAnimationLastFrameTelemetryStatics>::call<_lambda_12f5bf833773a01a30ff4e031defbf2b_ &>(
        void (__fastcall ***a1)(_QWORD, __int64 *, __int64 **),
        _QWORD *a2,
        __int128 **a3)
{
  signed __int64 v5; // rbx
  __int64 *v6; // rax
  char v7; // si
  __int64 v9[2]; // [rsp+28h] [rbp-38h] BYREF
  _BYTE v10[40]; // [rsp+38h] [rbp-28h] BYREF
  void (__fastcall ***v11)(_QWORD, __int64 *, __int64 **); // [rsp+80h] [rbp+20h] BYREF
  __int64 *v12; // [rsp+98h] [rbp+38h] BYREF

  v11 = a1;
  v9[0] = (__int64)L"WindowsUdk.UI.Composition.AnimationLastFrameTelemetry";
  v9[1] = 53LL;
  winrt::param::hstring::hstring((__int64)v10, v9);
  winrt::get_activation_factory<winrt::WindowsUdk::UI::Composition::IAnimationLastFrameTelemetryStatics>(&v11, v10);
  v5 = (signed __int64)v11;
  v12 = 0LL;
  if ( !v11 )
  {
    v6 = 0LL;
LABEL_3:
    v7 = 0;
    goto LABEL_4;
  }
  (**v11)(v11, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v12);
  v6 = v12;
  if ( !v12 )
    goto LABEL_3;
  v7 = 1;
LABEL_4:
  if ( v6 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v12);
  if ( v7 )
  {
    v12 = &qword_1808DCC48;
    _InterlockedIncrement64(&qword_1808DCC48);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Composition::AnimationLastFrameTelemetry,winrt::WindowsUdk::UI::Composition::IAnimationLastFrameTelemetryStatics>,
            v5,
            0LL) )
    {
      v11 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_1808DCC50);
    }
    _lambda_c6eead5922142ea911cef51d7f7bcdf9_::operator()(
      a3,
      a2,
      &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Composition::AnimationLastFrameTelemetry,winrt::WindowsUdk::UI::Composition::IAnimationLastFrameTelemetryStatics>);
    _InterlockedDecrement64(&qword_1808DCC48);
  }
  else
  {
    _lambda_c6eead5922142ea911cef51d7f7bcdf9_::operator()(a3, a2, (__int64 *)&v11);
  }
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v11);
  return a2;
}
