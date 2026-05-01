/*
 * XREFs of ??0PackageManagerInternal@Internal@Deployment@Management@Windows@winrt@@QEAA@XZ @ 0x18033528C
 * Callers:
 *     ?HasGamingAppCapability@GamingPostureConfiguration@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@SA_NAEBUhstring@7@@Z @ 0x180335D94 (-HasGamingAppCapability@GamingPostureConfiguration@implementation@Posture@GamingExperiences@Inte.c)
 * Callees:
 *     ??$ActivateInstance@UPackageManagerInternal@Internal@Deployment@Management@Windows@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUPackageManagerInternal@Internal@Deployment@Management@23@XZ @ 0x180333944 (--$ActivateInstance@UPackageManagerInternal@Internal@Deployment@Management@Windows@winrt@@@IActi.c)
 *     ??$call@P6A?AUPackageManagerInternal@Internal@Deployment@Management@Windows@winrt@@AEBUIActivationFactory@Foundation@56@@Z@?$factory_cache_entry@UPackageManagerInternal@Internal@Deployment@Management@Windows@winrt@@UIActivationFactory@Foundation@56@@impl@winrt@@QEAA?A_P$$QEAP6A?AUPackageManagerInternal@Internal@Deployment@Management@Windows@2@AEBUIActivationFactory@Foundation@72@@Z@Z @ 0x180334BC4 (--$call@P6A-AUPackageManagerInternal@Internal@Deployment@Management@Windows@winrt@@AEBUIActivati.c)
 */

struct IUnknown *__fastcall winrt::Windows::Management::Deployment::Internal::PackageManagerInternal::PackageManagerInternal(
        struct IUnknown *this)
{
  const struct winrt::Windows::Foundation::IActivationFactory *(__fastcall *v3)(const struct winrt::Windows::Foundation::IActivationFactory *, __int64); // [rsp+30h] [rbp+8h] BYREF

  v3 = (const struct winrt::Windows::Foundation::IActivationFactory *(__fastcall *)(const struct winrt::Windows::Foundation::IActivationFactory *, __int64))&qword_1808DB5D8;
  _InterlockedIncrement64(&qword_1808DB5D8);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Management::Deployment::Internal::PackageManagerInternal,winrt::Windows::Foundation::IActivationFactory> )
  {
    winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::Windows::Management::Deployment::Internal::PackageManagerInternal>(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::Management::Deployment::Internal::PackageManagerInternal,winrt::Windows::Foundation::IActivationFactory>,
      this);
    _InterlockedDecrement64(&qword_1808DB5D8);
  }
  else
  {
    _InterlockedDecrement64(&qword_1808DB5D8);
    v3 = _lambda_3b774df9feaf32ce198fda5ed74d0bf7_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::Windows::Management::Deployment::Internal::PackageManagerInternal,winrt::Windows::Foundation::IActivationFactory>::call<winrt::Windows::Management::Deployment::Internal::PackageManagerInternal (*)(winrt::Windows::Foundation::IActivationFactory const &)>(
      this,
      (__int64)this,
      (void (__fastcall **)(__int64, __int64 *))&v3);
  }
  return this;
}
