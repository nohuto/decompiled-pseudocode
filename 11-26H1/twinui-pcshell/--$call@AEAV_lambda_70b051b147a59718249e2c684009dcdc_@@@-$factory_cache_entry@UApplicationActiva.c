/*
 * XREFs of ??$call@AEAV_lambda_70b051b147a59718249e2c684009dcdc_@@@?$factory_cache_entry@UApplicationActivation@Private@Activation@ApplicationModel@Windows@winrt@@UIApplicationActivationStatics@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_70b051b147a59718249e2c684009dcdc_@@@Z @ 0x180326284
 * Callers:
 *     ?ActivateApplicationByAumid@ApplicationActivation@Private@Activation@ApplicationModel@Windows@winrt@@SA@AEBUUser@System@56@AEBUhstring@param@6@1AEBUIApplicationActivationProperties@23456@@Z @ 0x180329944 (-ActivateApplicationByAumid@ApplicationActivation@Private@Activation@ApplicationModel@Windows@wi.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1801C5810 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1802D41BD (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     ??$get_activation_factory@UIApplicationActivationStatics@Private@Activation@ApplicationModel@Windows@winrt@@@winrt@@YA?AUIApplicationActivationStatics@Private@Activation@ApplicationModel@Windows@0@AEBUhstring@param@0@@Z @ 0x18032658C (--$get_activation_factory@UIApplicationActivationStatics@Private@Activation@ApplicationModel@Win.c)
 *     ??R_lambda_70b051b147a59718249e2c684009dcdc_@@QEBA@AEBUIApplicationActivationStatics@Private@Activation@ApplicationModel@Windows@winrt@@@Z @ 0x1803293F4 (--R_lambda_70b051b147a59718249e2c684009dcdc_@@QEBA@AEBUIApplicationActivationStatics@Private@Act.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::factory_cache_entry<winrt::Windows::ApplicationModel::Activation::Private::ApplicationActivation,winrt::Windows::ApplicationModel::Activation::Private::IApplicationActivationStatics>::call<_lambda_70b051b147a59718249e2c684009dcdc_ &>(
        void (__fastcall ***a1)(_QWORD, __int64 *, __int64 **),
        __int64 a2,
        __int64 a3)
{
  signed __int64 v5; // rbx
  __int64 *v6; // rax
  char v7; // si
  __int64 v9[2]; // [rsp+28h] [rbp-38h] BYREF
  _BYTE v10[40]; // [rsp+38h] [rbp-28h] BYREF
  void (__fastcall ***v11)(_QWORD, __int64 *, __int64 **); // [rsp+80h] [rbp+20h] BYREF
  __int64 *v12; // [rsp+98h] [rbp+38h] BYREF

  v11 = a1;
  v9[0] = (__int64)L"Windows.ApplicationModel.Activation.Private.ApplicationActivation";
  v9[1] = 65LL;
  winrt::param::hstring::hstring((__int64)v10, v9);
  winrt::get_activation_factory<winrt::Windows::ApplicationModel::Activation::Private::IApplicationActivationStatics>(
    &v11,
    v10);
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
    v12 = &qword_1808DB578;
    _InterlockedIncrement64(&qword_1808DB578);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::ApplicationModel::Activation::Private::ApplicationActivation,winrt::Windows::ApplicationModel::Activation::Private::IApplicationActivationStatics>,
            v5,
            0LL) )
    {
      v11 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_1808DB580);
    }
    _lambda_70b051b147a59718249e2c684009dcdc_::operator()(
      a3,
      a2,
      &winrt::impl::factory_cache_entry_v<winrt::Windows::ApplicationModel::Activation::Private::ApplicationActivation,winrt::Windows::ApplicationModel::Activation::Private::IApplicationActivationStatics>);
    _InterlockedDecrement64(&qword_1808DB578);
  }
  else
  {
    _lambda_70b051b147a59718249e2c684009dcdc_::operator()(a3, a2, &v11);
  }
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v11);
  return a2;
}
