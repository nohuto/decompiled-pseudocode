/*
 * XREFs of ?ActivateApplicationForContractByAumid@ApplicationActivation@Private@Activation@ApplicationModel@Windows@winrt@@SA@AEBUUser@System@56@AEBUhstring@param@6@1AEBUIInspectable@Foundation@56@AEBUIApplicationActivationProperties@23456@@Z @ 0x18032C5BC
 * Callers:
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::TryLaunchGamingAppAsync$_ResumeCoro$1 @ 0x180330A10 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPosture_ea_180330A10.c)
 * Callees:
 *     ??$call@AEAV_lambda_c13b110588b4e2f99da684d72199d508_@@@?$factory_cache_entry@UApplicationActivation@Private@Activation@ApplicationModel@Windows@winrt@@UIApplicationActivationStatics@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_c13b110588b4e2f99da684d72199d508_@@@Z @ 0x180329A54 (--$call@AEAV_lambda_c13b110588b4e2f99da684d72199d508_@@@-$factory_cache_entry@UApplicationActiva.c)
 *     ??R_lambda_c13b110588b4e2f99da684d72199d508_@@QEBA@AEBUIApplicationActivationStatics@Private@Activation@ApplicationModel@Windows@winrt@@@Z @ 0x18032C030 (--R_lambda_c13b110588b4e2f99da684d72199d508_@@QEBA@AEBUIApplicationActivationStatics@Private@Act.c)
 */

// Hidden C++ exception states: #wind=1
const struct winrt::Windows::System::User *__fastcall winrt::Windows::ApplicationModel::Activation::Private::ApplicationActivation::ActivateApplicationForContractByAumid(
        const struct winrt::Windows::System::User *a1,
        const struct winrt::param::hstring *a2,
        const struct winrt::param::hstring *a3,
        const struct IInspectable *a4,
        const struct winrt::Windows::ApplicationModel::Activation::Private::IApplicationActivationProperties *a5,
        __int64 *a6)
{
  __int64 *v8[6]; // [rsp+28h] [rbp-30h] BYREF

  v8[0] = (__int64 *)a2;
  v8[1] = (__int64 *)a3;
  v8[2] = (__int64 *)a4;
  v8[3] = (__int64 *)a5;
  v8[4] = a6;
  _InterlockedIncrement64(&qword_18089AE38);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::ApplicationModel::Activation::Private::ApplicationActivation,winrt::Windows::ApplicationModel::Activation::Private::IApplicationActivationStatics> )
  {
    _lambda_c13b110588b4e2f99da684d72199d508_::operator()(
      v8,
      a1,
      (__int64 **)&winrt::impl::factory_cache_entry_v<winrt::Windows::ApplicationModel::Activation::Private::ApplicationActivation,winrt::Windows::ApplicationModel::Activation::Private::IApplicationActivationStatics>);
    _InterlockedDecrement64(&qword_18089AE38);
  }
  else
  {
    _InterlockedDecrement64(&qword_18089AE38);
    winrt::impl::factory_cache_entry<winrt::Windows::ApplicationModel::Activation::Private::ApplicationActivation,winrt::Windows::ApplicationModel::Activation::Private::IApplicationActivationStatics>::call<_lambda_c13b110588b4e2f99da684d72199d508_ &>(
      (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))a1,
      (__int64)a1,
      (__int64)v8);
  }
  return a1;
}
