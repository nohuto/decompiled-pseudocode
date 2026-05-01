/*
 * XREFs of ??0ValueSet@Collections@Foundation@Windows@winrt@@QEAA@XZ @ 0x180341A40
 * Callers:
 *     ?ReportCompleted@GamingOverlayExperienceManager@@UEAAJIPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180352290 (-ReportCompleted@GamingOverlayExperienceManager@@UEAAJIPEAUIPropertySet@Collections@Foundation@W.c)
 *     ?DeserializeValueSet@RemoteSystemData@@YA?AUValueSet@Collections@Foundation@Windows@winrt@@PEBXI@Z @ 0x18064B8AC (-DeserializeValueSet@RemoteSystemData@@YA-AUValueSet@Collections@Foundation@Windows@winrt@@PEBXI.c)
 * Callees:
 *     ??$ActivateInstance@UValueSet@Collections@Foundation@Windows@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUValueSet@Collections@123@XZ @ 0x18033B030 (--$ActivateInstance@UValueSet@Collections@Foundation@Windows@winrt@@@IActivationFactory@Foundati.c)
 *     ??$call@P6A?AUValueSet@Collections@Foundation@Windows@winrt@@AEBUIActivationFactory@345@@Z@?$factory_cache_entry@UValueSet@Collections@Foundation@Windows@winrt@@UIActivationFactory@345@@impl@winrt@@QEAA?A_P$$QEAP6A?AUValueSet@Collections@Foundation@Windows@2@AEBUIActivationFactory@562@@Z@Z @ 0x18033F18C (--$call@P6A-AUValueSet@Collections@Foundation@Windows@winrt@@AEBUIActivationFactory@345@@Z@-$fac.c)
 */

struct IUnknown *__fastcall winrt::Windows::Foundation::Collections::ValueSet::ValueSet(struct IUnknown *this)
{
  const struct winrt::Windows::Foundation::IActivationFactory *(__fastcall *v3)(const struct winrt::Windows::Foundation::IActivationFactory *, __int64); // [rsp+30h] [rbp+8h] BYREF

  v3 = (const struct winrt::Windows::Foundation::IActivationFactory *(__fastcall *)(const struct winrt::Windows::Foundation::IActivationFactory *, __int64))&qword_1808DB2E8;
  _InterlockedIncrement64(&qword_1808DB2E8);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Foundation::Collections::ValueSet,winrt::Windows::Foundation::IActivationFactory> )
  {
    winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::Windows::Foundation::Collections::ValueSet>(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::Foundation::Collections::ValueSet,winrt::Windows::Foundation::IActivationFactory>,
      this);
    _InterlockedDecrement64(&qword_1808DB2E8);
  }
  else
  {
    _InterlockedDecrement64(&qword_1808DB2E8);
    v3 = _lambda_f635e0c3324166f0c8ad227de6175e83_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::Windows::Foundation::Collections::ValueSet,winrt::Windows::Foundation::IActivationFactory>::call<winrt::Windows::Foundation::Collections::ValueSet (*)(winrt::Windows::Foundation::IActivationFactory const &)>(
      (__int64)this,
      (__int64)this,
      (void (__fastcall **)(__int64, __int64 *))&v3);
  }
  return this;
}
