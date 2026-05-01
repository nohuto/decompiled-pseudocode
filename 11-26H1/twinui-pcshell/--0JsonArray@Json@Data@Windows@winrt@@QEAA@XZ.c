/*
 * XREFs of ??0JsonArray@Json@Data@Windows@winrt@@QEAA@XZ @ 0x1802A10E8
 * Callers:
 *     ?SerializeToJsonFile@JsonGameMruManager@@AEBAXUwrite_lock_required@wil@@@Z @ 0x180139BB0 (-SerializeToJsonFile@JsonGameMruManager@@AEBAXUwrite_lock_required@wil@@@Z.c)
 *     GetEnterprisePinDataFromRegistry @ 0x18068FFBC (GetEnterprisePinDataFromRegistry.c)
 *     GetPidlsFromTaskbarLayout @ 0x180690384 (GetPidlsFromTaskbarLayout.c)
 * Callees:
 *     ??$ActivateInstance@UJsonArray@Json@Data@Windows@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUJsonArray@Json@Data@23@XZ @ 0x1802A1160 (--$ActivateInstance@UJsonArray@Json@Data@Windows@winrt@@@IActivationFactory@Foundation@Windows@w.c)
 *     ??$call@P6A?AUJsonArray@Json@Data@Windows@winrt@@AEBUIActivationFactory@Foundation@45@@Z@?$factory_cache_entry@UJsonArray@Json@Data@Windows@winrt@@UIActivationFactory@Foundation@45@@impl@winrt@@QEAA?A_P$$QEAP6A?AUJsonArray@Json@Data@Windows@2@AEBUIActivationFactory@Foundation@62@@Z@Z @ 0x180317584 (--$call@P6A-AUJsonArray@Json@Data@Windows@winrt@@AEBUIActivationFactory@Foundation@45@@Z@-$facto.c)
 */

// Hidden C++ exception states: #wind=1
winrt::Windows::Data::Json::JsonArray *__fastcall winrt::Windows::Data::Json::JsonArray::JsonArray(
        winrt::Windows::Data::Json::JsonArray *this)
{
  __int64 *v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = &qword_1808DB388;
  _InterlockedIncrement64(&qword_1808DB388);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Data::Json::JsonArray,winrt::Windows::Foundation::IActivationFactory> )
  {
    winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::Windows::Data::Json::JsonArray>(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::Data::Json::JsonArray,winrt::Windows::Foundation::IActivationFactory>,
      this);
    _InterlockedDecrement64(&qword_1808DB388);
  }
  else
  {
    _InterlockedDecrement64(&qword_1808DB388);
    v3 = (__int64 *)_lambda_26ceda9fe0b282db3cefe2785cdd4c46_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::Windows::Data::Json::JsonArray,winrt::Windows::Foundation::IActivationFactory>::call<winrt::Windows::Data::Json::JsonArray (*)(winrt::Windows::Foundation::IActivationFactory const &)>(
      this,
      this,
      &v3);
  }
  return this;
}
